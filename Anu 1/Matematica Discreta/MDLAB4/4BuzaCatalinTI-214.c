#include <stdio.h>
#include <stdlib.h>

int adiacenta[50][50];
struct list
{
    int data;
    struct list *next;
};
typedef struct list Lista;
void append(Lista **head, int data)
{
    Lista *newData = (Lista *)malloc(sizeof(Lista));
    newData -> data = data;
    newData -> next = NULL;

    if(!(*head))
    {
        *head = newData;
        return;
    }
    Lista *temp = *head;
    while(temp -> next != NULL)
        temp = temp -> next;

    temp -> next = newData;
}
int popFirst(Lista **head)
{
    int first = (*head) -> data;
    Lista *temp = *head;

    (*head) = (*head) -> next;
    free(temp);

    return first;
}
int checkN(int nod[], int n)
{
    for(int i = 0; i < n; i++)
        if(nod[i] == 0)
            return 1;

    return 0;
}
int checkInList(struct list *head, int data)
{
    while(head)
    {
        if(head -> data == data)
            return 1;
        head = head -> next;
    }

    return 0;
}

void copyLine(int array[], int noduri, int line)
{
    for(int i = 0; i < noduri; i++)
        adiacenta[line][i] = array[i];
}

void delLeg(Lista *l1, Lista *l2, int noduri)
{
    int tempArr[noduri], tempNode;

    while(l1)
    {
        tempNode = l1 -> data;
        for(int i = 0; i < noduri; i++)
            tempArr[i] = 0;

        for(int i = 0; i < noduri; i++)
            if(adiacenta[tempNode][i] == 1 && !checkInList(l2,i))
                tempArr[i] = 1;

        copyLine(tempArr,noduri, tempNode);
        l1 = l1 -> next;
    }
}
void grafAcoperire(int noduri, int start)
{
    Lista *FA1 = NULL, *FA2 = NULL, *temp;
    int nod[noduri], tempArr[noduri], current, tempNode;

    for(int i = 0; i < noduri; i++)
        nod[i] = 0;

    nod[start - 1] = 1;
    append(&FA1, start - 1);

    while(checkN(nod, noduri))
    {
        if(FA1)
        {
            current = popFirst(&FA1);
            nod[current] = 1;

            //adauga toti copii de la nodul current in lista FA2
            for(int i = 0; i < noduri; i++)
                if(adiacenta[current][i] == 1 && !nod[i])
                    append(&FA2,i);

            //sterge muchiile care leaga nodurile din FA2
            delLeg(FA2,FA2, noduri);

            //sterge toate muchiile in afara de una care leaga fiecare varg din FA2 cu varfurile din FA1
            delLeg(FA1,FA2, noduri);
            delLeg(FA2,FA1, noduri);

        }
        else
        {
            temp = FA1;
            FA1 = FA2;
            FA2 = temp;
        }

        if(!FA1 && !FA2)
            for(int i = 0; i < noduri; i++)
                if(nod[i] == 0)
                    append(&FA1,i);
    }
}
void printList(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d | ", i+1);
        for(int j = 0; j < n; j++)
            if(adiacenta[i][j])
                printf("%d ",j+1);
        printf("0\n");
    }
}

int main()
{
    FILE *f = fopen("graf.in","r");
    int n;
    Lista *head = NULL;

    system("cls");
    printf("Introduceti numarul de varfuri:");
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            fscanf(f,"%d", &adiacenta[i][j]);

    printList(n);

    printf("\nIntroduceti virful din care vreti sa incepeti algoritmul de deterinare a grafului de acoperire:");
    int inceput;
    scanf("%d",&inceput);
    grafAcoperire(n,inceput);

    printf("\nGraful de acoperire:\n");
    printList(n);
    return 0;
}
