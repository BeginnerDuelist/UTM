#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct elev{
	char *nume;
	char *prenume;
	float note[3];
	float notaMedie;
};
typedef struct elev elev1;
struct list{
	elev1 head;
	struct list *next;
};
typedef struct list list1;
list1 *elevi = NULL;
int totalElevi = 0;

const char nume[][20] = {"Radu","Retcu","Gonta","Maimescu","Frunceac","Mulear","Tipac","Ripa","Regus","Andranovici"};
const char prenume[][20] = {"Ecaterina","Roxana","Felicia","Ana","Alexandru","Victor","Stefan","Mihai","Andrei","Catalin"};

void append(char *nume, char *prenume, float note[3]){
	 list1 *temp = (list1*)malloc(sizeof(list1));
	 list1 *last = elevi;

	totalElevi++;

	temp -> head.nume = (char*)malloc((strlen(nume)+1) * sizeof(char));
	strcpy(temp -> head.nume, nume);

	temp -> head.prenume = (char*)malloc(((strlen(prenume)+1) * sizeof(char)));
	strcpy(temp -> head.prenume, prenume);

	temp -> head.note[0] = note[0];
	temp -> head.note[1] = note[1];
	temp -> head.note[2] = note[2];

	temp -> next = NULL;

	if(elevi == NULL){
		elevi = temp;
		return;
	}

	while(last -> next != NULL)
		last = last -> next;

	last -> next = temp;
}

void changeElev(int position, char *nume, char *prenume, float note[3]){
    list1 *last = elevi;

	for(int i = 1; i < position; i++)
		last = last -> next;

	last -> head.nume = (char*)realloc(last -> head.nume, (strlen(nume) + 1) * sizeof(char));
	strcpy(last -> head.nume, nume);

	last -> head.prenume= (char*)realloc(last -> head.prenume, (strlen(prenume) + 1) * sizeof(char));
	strcpy(last -> head.prenume, prenume);

	last -> head.note[0] = note[0];
	last -> head.note[1] = note[1];
	last -> head.note[2] = note[2];
}

void insertPos(int position, char *nume, char *prenume, float note[3]){
	 list1 *curent = elevi;
	 list1 *temp = (list1*)malloc(sizeof(list1));

	totalElevi++;

	temp -> head.nume = (char*)malloc((strlen(nume) + 1)*sizeof(char));
	strcpy(temp -> head.nume, nume);

	temp -> head.prenume= (char*)malloc((strlen(prenume) + 1)*sizeof(char));
	strcpy(temp -> head.prenume, prenume);

	temp -> head.note[0] = note[0];
	temp -> head.note[1] = note[1];
	temp -> head.note[2] = note[2];

	if(position == 1){
		temp -> next = elevi;
		elevi = temp;
		return;
	}

	for(int i = 1; i < position-1; i ++)
		curent = curent -> next;

	temp -> next = curent -> next;
	curent -> next = temp;
}

void deletePos(int position){
	struct list *curent = elevi, *temp;

	totalElevi--;

	if(position == 1){
		elevi = elevi -> next;
		free(curent -> head.nume);
		free(curent -> head.prenume);
		curent -> next = NULL;
		free(curent);
		return;
	}

	for(int i = 1; i < position - 1; i++)
		curent = curent -> next;

	temp = curent -> next;
	curent -> next = curent -> next -> next;

	free(temp -> head.nume);
	free(temp -> head.prenume);
	temp -> next = NULL;
	free(temp);
}

void deleteNume(char *nume){
    list1 *curent = elevi;
	int i = 1;

	totalElevi--;

	while(curent != NULL){
		if(!strcmp(nume, curent -> head.nume)){
			deletePos(i);
			return;
		}

		i++;
		curent = curent -> next;
	}

	printf("\nNumele dat nu a fost gasit in lista!\n");
}

void delLast(){
    list1 *last = elevi;
    list1 *temp;

	totalElevi--;

	while(last -> next -> next != NULL)
		last = last -> next;

	temp = last -> next;
	last -> next = NULL;

	free(temp -> head.nume);
	free(temp -> head.prenume);
	free(temp);
}

void findNume(char *nume){
    list1 *curent = elevi;
	int i = 1;

	while(curent != NULL){
		if(!strcmp(curent -> head.nume, nume)){
			printf("\n%d %s %s\n", i, curent -> head.nume, curent -> head.prenume);
			return;
		}

		i++;
		curent = curent -> next;
	}

	printf("\nNumele dat nu a fost gasit!\n");
}

void calcMed(){
    list1 *temp = elevi;

	while(temp != NULL){
		temp -> head.notaMedie = (temp -> head.note[0] + temp -> head.note[1] + temp -> head.note[2])/3;
		temp = temp -> next;
	}
}

void sortAlf(){
    list1 *curent = elevi, *index;
	elev1 temp;

	while(curent != NULL){
		index = curent -> next;
		while(index != NULL){
			if(strcmp(curent -> head.nume, index -> head.nume) > 0){
				temp = curent -> head;
				curent -> head = index -> head;
				index -> head = temp;
			}
			index = index -> next;
		}
		curent = curent -> next;
	}
}

void sortMed(){
    list1 *curent = elevi, *index;
	elev1 temp;

	while(curent != NULL){
		index = curent -> next;
		while(index != NULL){
			if(curent -> head.notaMedie < index -> head.notaMedie){
				temp = curent -> head;
				curent -> head = index -> head;
				index -> head = temp;
			}
			index = index -> next;
		}
		curent = curent -> next;
	}
}

void showAbove(float lim){
	int curentPos = 1;
    list1 *temp = elevi;

	while(temp != NULL){
		if(temp -> head.notaMedie > lim)
			printf("%d %s %s %.2f\n",curentPos, temp -> head.nume, temp -> head.prenume, temp -> head.notaMedie);
		curentPos++;
		temp = temp -> next;
	}
}

void shuffle(){
    list1 *curent = elevi, *index;
    elev1 temp;
	int curentPos = 1;
	int pos;
	srand(time(NULL));

	while(curent != NULL){
		pos = rand() % totalElevi + 1;
		index = elevi;

		if(pos != curentPos){
			for(int i = 1; i < pos; i++)
				index = index -> next;

			temp = curent -> head;
			curent -> head = index -> head;
			index -> head = temp;
		}

		curentPos++;
		curent = curent -> next;
	}
}

void afisare(){
	if(elevi == NULL){
		printf("Lista este nulla.\n\n");
		return;
	}

    list1 *temp = elevi;
	int i = 1;

	while(temp != NULL){
		printf("%d) %s %s | %.2f | %.2f | %.2f | %.2f\n", i++, temp -> head.nume, temp -> head.prenume, temp -> head.note[0], temp -> head.note[1], temp -> head.note[2], temp -> head.notaMedie);
		temp = temp -> next;
	}
	printf("\n");
}

void initDB()
{
	FILE *file;
	float note[3];
	int i;
	char nume[30], prenume[30];

	file = fopen("BazaDeDate.txt", "r");
		while(!feof(file)){
			fscanf(file,"%s",&nume);
			fscanf(file,"%s",&prenume);
			fscanf(file,"%f",&note[0]);
			fscanf(file,"%f",&note[1]);
			fscanf(file,"%f",&note[2]);
			append(nume,prenume,note);
		}
	fclose(file);
}
void finalDB()
{
    FILE *file = fopen("BazaDeDate1.txt", "w");
    list1 *temp = elevi;
	int i = 1;

	while(temp != NULL){
		fprintf(file,"%d) %s %s | %.2f | %.2f | %.2f | %.2f\n", i++, temp -> head.nume, temp -> head.prenume, temp -> head.note[0], temp -> head.note[1], temp -> head.note[2], temp -> head.notaMedie);
		temp = temp -> next;
	}
	printf("\n");

    fclose(file);
}
void menu(){
	printf("1. Adaugarea unui elev in baza de date.\n");
	printf("2. Inlocuirea unui elev cu alt elev.\n");
	printf("3. Inserarea unui elev pe o anumita pozitie.\n");
	printf("4. Eliminarea unui elev pe o anumita pozitie.\n");
	printf("5. Eliminarea unui elev avand un nume.\n");
	printf("6. Cautarea unui elev dupa nume.\n");
	printf("7. Calcularea mediilor.\n");
	printf("8. Listarea alfabetica a elevilor.\n");
	printf("9. Listarea elevilor in ordinea descrescatoare a mediilor.\n");
	printf("10. Listarea elevilor cu medie peste o valoare data.\n");
	printf("11. Amestecarea elevilor.\n");
	printf("12. Eliminarea ultimului elev din baza de date.\n");
	printf("13. Salvarea informatiei modificate in alta baza de date.\n");
	printf("Alegeti optiunea care doriti sa o alegeti: ");
}

int main(){
	int option, pos;
	char str[30];
	float note[3];
	srand(time(NULL));

	initDB();

    do
    {
        system("cls");
        afisare();
        menu();
        scanf("%d",&option);

        switch(option)
        {
        case 1:
        {
            note[0] = (5 * (float)rand() / RAND_MAX) + 5 ;
            note[1] = (5 * (float)rand() / RAND_MAX) + 5 ;
            note[2] = (5 * (float)rand() / RAND_MAX) + 5 ;
            append(nume[rand() % 10], prenume[rand() % 10], note);
            break;
        }

        case 2:
        {
            printf("\nDati positia elevului care doriti sal schimbati: ");
            scanf("%d", &pos);
            note[0] = (5 * (float)rand() / RAND_MAX) + 5 ;
            note[1] = (5 * (float)rand() / RAND_MAX) + 5 ;
            note[2] = (5 * (float)rand() / RAND_MAX) + 5 ;
            changeElev(pos, nume[rand() % 10], prenume[rand() % 10], note);
            break;
        }
        case 3:
        {
            printf("\nDati positia pe caare doriti sa introduceti elevul nou: ");
            scanf("%d", &pos);
            note[0] = (5 * (float)rand() / RAND_MAX) + 5 ;
            note[1] = (5 * (float)rand() / RAND_MAX) + 5 ;
            note[2] = (5 * (float)rand() / RAND_MAX) + 5 ;
            insertPos(pos, nume[rand() % 10], prenume[rand() % 10], note);
            break;
        }

        case 4:
        {
            printf("\nAlegeti positia de pe care se va sterge elementul: ");
            scanf("%d", &pos);
            deletePos(pos);
            break;
        }

        case 5:
        {
            printf("\nDati numele care doriti sal stergeti din lista: ");
            scanf("%s", str);
            deleteNume(str);
            break;
        }

        case 6:
        {
            printf("\nDati numele care doriti sal gasiti in lista: ");
            scanf("%s", str);
            findNume(str);
            break;
        }

        case 7:
        {
            calcMed();
            break;
        }

        case 8:
        {
            sortAlf();
            break;
        }

        case 9:
        {
            sortMed();
            break;
        }

        case 10:
        {
            printf("\n");
            showAbove(7);
            break;
        }

        case 11:
        {
            shuffle();
            break;
        }

        case 12:
        {
            delLast();
            break;
        }

        case 13:
        {
            finalDB();
            printf("\nInfromatia modificata a fost salvata intr-o noua baza de date!!!");
            break;
        }
        }
     getch();
    }
    while(option != 0);

	return 0;
}
