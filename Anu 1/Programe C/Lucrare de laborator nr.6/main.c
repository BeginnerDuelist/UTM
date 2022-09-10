#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Probleme pointeri//
    printf("\nProblema 1:\nScrieti un program C pentru a crea, initializa si utiliza pointeri pentru printarea a diferitor variabile.");
    int a=5,b=61;
    int*p,*p1;
    p=&a;p1=&b;
    printf("\nValorile printate folosind pointeri sunt :");
    printf("\n%d",*p);
    printf("\n%d",*p1);

    printf("\n\nProblema 2:\nScrieti un program C pentru a aduna doua numere folosind pointerii.");
    int c=10,d=1,suma=0;
    int *p2,*p3;
    p2=&c; p3=&d;
    suma=*p2+*p3;
    printf("\nSuma este: %d",suma);

    printf("\n\nProblema 3:\nScrieti un program C pentru a interschimba valorile a doua variabile folosind pointerii.");
    int e=10,f=1,aux=0;
    int *p4,*p5;
    printf("\nValorile variabilelor inainte de schimabare:e=%d , f=%d",e,f);
    p4=&e;p5=&f;
    aux=*p4;
    *p4=*p5;
    *p5=aux;
    printf("\nVariabilele dupa interschimabarea valorilor :e=%d, f=%d",e,f);

    printf("\n\nProblema 4:\nScrieti un program C pentru a initializa si afisa elementele unei matrici folosind pointerii.");
    int matrice[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",(*(matrice+i)+j));//expresia data e egala cu &matrice[i][j];//
        }
    }
    printf("\nMatricea este :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d",*(*(matrice+i)+j));//expresia data e egala cu matrice[i][j];//
        }
        printf("\n");
    }

    printf("\n\nProblema 5:\nScrieti un program C pentru a copia o matrice in alta folosind pointeri.");
    int matrice1[2][2];
    printf("\nVoi copia matricea ,,matrice'' in ,,matrice1'' ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            *(*(matrice1+i)+j)=*(*(matrice+i)+j);
        }
    }
    printf("\nMatricea ,,matrice1'' este :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d",*(*(matrice1+i)+j));
        }
        printf("\n");
    }

    //Probleme alocare dinamica//
    printf("\nProblema 1:\nScrieti un program C pentru alocarea unui sir de caractere si initializarea acestuia.");
    int numar_de_elemente=100;
    char *sir = calloc(numar_de_elemente,sizeof(char));
    printf("\nIntroducem un sir de caractere:\n");
    fflush(stdin);
    gets(sir);
    printf("\nSirul este:\n");
    puts(sir);
    free(sir);

   return 0;
}
