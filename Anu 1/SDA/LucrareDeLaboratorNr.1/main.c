#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 typedef struct sarcina1
{
    char cuvint[100];
    int numar;
}tablou;
void citire_tablou_static(tablou tablou_static[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("\nIntrodu  un cuvint \n");
        fflush(stdin);
        gets(tablou_static[i].cuvint);
        printf("\nIntrodu un numar:\n");
        scanf("%d",&tablou_static[i].numar);
    }
}
void afisare_tablou_static(tablou tablou_static[],int size)
{
    printf("\nAfisam elementele tabloului:\n");
    for(int i=0;i<size;i++)
    {
       puts(tablou_static[i].cuvint);
       printf("%d\n",tablou_static[i].numar);

    }
}
void cautare_caracter_tablou_static(int caracter,tablou tablou_static[],int size)
{
    int gasit=0;
    printf("\nCaracterul caruia ii cautam prima aparitie in primul cimp al structuri  este ,,%c''",caracter);
    for(int i=0;i<size;i++)
    {
        for(int j=0;tablou_static[i].cuvint[j];j++)
        {
         if(tablou_static[i].cuvint[j]==caracter)
           {
            printf("\nCaracterul ,,%c'' a fost gasit pe prima oara in cimpul %d pe pozitia %d",caracter,i,j);
            gasit=1;
            break;
           }
        }
    }
    if(gasit==0)
    {
        printf("\nCaracterul ,,%c'' nu exista in cimpul ",caracter);
    }
}
void meniu_sarcina2()
{
    printf("\n|----------------------------------------------------------------------|");
    printf("\n| 1 - citirea de la tastatura a elementelor tabloului                  |");
    printf("\n| 2 - afisarea la consola a elementelor tabloului                      |");
    printf("\n| 3 - cautarea unui element dupa o valoarea a unui camp din structura  |");
    printf("\n|     si returnarea pozitiei unde se afla primul element gasit         |");
    printf("\n| 4 - eliberarea memoriei tabloului                                    |");
    printf("\n| 5 - sortarea elementelor dupa un camp a structurii                   |");
    printf("\n| 6 - inserarea unui element nou la capatul tabloului                  |");
    printf("\n| 7 - inserarea unui element nou la inceputul tabloului                |");
    printf("\n| 8 - insearea unui element la o pozitie X                             |");
    printf("\n|     (introdusa de la tastatura)                                      |");
    printf("\n| 9 - stergerea unui element de pe o pozitie X                         |");
    printf("\n|     (introdusa de la tastatura)                                      |");
    printf("\n| 0 - Terminarea exercitiului                                          |");
    printf("\n|----------------------------------------------------------------------|");
}
typedef struct sarcina2
{
    char nume[50];
    char prenume[50];
    double nota;
} tablou2;
tablou2* tablou_dinamic=NULL;
void citire_tablou_dinamic(int size)
{
    tablou_dinamic=calloc(size,sizeof(tablou2));
    for(int i=0;i<size;i++)
    {
        printf("\nIntrodu  numele studentului %d: \n",i+1);
        fflush(stdin);
        gets(tablou_dinamic[i].nume);
        printf("\nIntrodu  prenumele studentului %d: \n",i+1);
        gets(tablou_dinamic[i].prenume);
        printf("\nIntrodu nota finala a studentului %d:\n",i+1);
        scanf("%lf",&tablou_dinamic[i].nota);
    }
}
void afisare_tablou_dinamic(int size)
{
    printf("\nAfisam elementele tabloului:\n");
    fflush(stdin);
    for(int i=0;i<size;i++)
    {
       printf("\nInformatia despre studentul %d este:\n",i+1);
       puts(tablou_dinamic[i].nume);
       puts(tablou_dinamic[i].prenume);
       printf("%.2lf\n",tablou_dinamic[i].nota);
    }
}
void cautare_caracter_tablou_dinamic(int caracter,int size)
{
    int gasit=0;
    printf("\nCaracterul caruia ii cautam prima aparitie in primul cimp al structuri  este ,,%c''",caracter);
    for(int i=0;i<size;i++)
    {
        for(int j=0;tablou_dinamic[i].nume[j];j++)
        {
         if(tablou_dinamic[i].nume[j]==caracter)
           {
            printf("\nCaracterul ,,%c'' a fost gasit pe prima oara in cimpul %d pe pozitia %d",caracter,i,j);
            gasit=1;
            break;
           }
        }
    }
    if(gasit==0)
    {
        printf("\nCaracterul ,,%c'' nu a fost gasit pe cimpul dat",caracter);
    }
}
void sortarea_elementelor_dupa_un_cimp(int size)
{   if(tablou_dinamic==NULL)
    {
        printf("\nTabloul alocat dinamic nare date pe care sa le sortati!!!");
        return;
    }
    tablou2 aux;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
           if(tablou_dinamic[i].nota>tablou_dinamic[j].nota)
           {
               aux=tablou_dinamic[i];
               tablou_dinamic[i]=tablou_dinamic[j];
               tablou_dinamic[j]=aux;
           }
        }
    }
    printf("\nPentru a putea vedea modificarile tastati 2:");
}
int inserare_elemen_laInceput(int size,int index)
{
    tablou2 element_nou;
    element_nou.nota=7.70;
    tablou_dinamic=realloc(tablou_dinamic,size+1);
    for (int i=size;i>=index;i--)
    {
      strcpy(tablou_dinamic[i+1].nume,tablou_dinamic[i].nume);
      strcpy(tablou_dinamic[i+1].prenume,tablou_dinamic[i].prenume);
      tablou_dinamic[i+1].nota=tablou_dinamic[i].nota;
    }
    size++;
    strcpy(tablou_dinamic[index].nume,"Ursu");
    strcpy(tablou_dinamic[index].prenume,"Ion");
    tablou_dinamic[index].nota=element_nou.nota;
    printf("\nTastati 2 pentru a vedea modificarile efectuate:");
   return size;
}
int inserare_elemen_laSfirsit(int size,int index)
{
    tablou2 element_nou;
    element_nou.nota=6.66;
    tablou_dinamic=realloc(tablou_dinamic,size+1);
    fflush(stdin);
    for (int i=size;i>=index;i--)
    {
      strcpy(tablou_dinamic[i+1].nume,tablou_dinamic[i].nume);
      strcpy(tablou_dinamic[i+1].prenume,tablou_dinamic[i].prenume);
      tablou_dinamic[i+1].nota=tablou_dinamic[i].nota;
    }
    size++;
    strcpy(tablou_dinamic[index].nume,"Florea");
    strcpy(tablou_dinamic[index].prenume,"Mihai");
    tablou_dinamic[index].nota=element_nou.nota;

    printf("\nTastati 2 pentru a vedea modificarile efectuate:");
   return size;
}
int inserare_elemen_pozX(int size,int index)
{
    tablou2 element_nou;
    element_nou.nota=8.70;
    tablou_dinamic=realloc(tablou_dinamic,size+1);
    for (int i=size-1;i>=index;i--)
    {
      strcpy(tablou_dinamic[i+1].nume,tablou_dinamic[i].nume);
      strcpy(tablou_dinamic[i+1].prenume,tablou_dinamic[i].prenume);
      tablou_dinamic[i+1].nota=tablou_dinamic[i].nota;
    }
    size++;
    strcpy(tablou_dinamic[index].nume,"Gonta");
    strcpy(tablou_dinamic[index].prenume,"Vasile");
    tablou_dinamic[index].nota=element_nou.nota;
    printf("\nTastati 2 pentru a vedea modificarile efectuate:");
   return size;
}
int stergere_element(int size,int index)
{
    if(tablou_dinamic==NULL)
    {
        printf("\nTabloul alocat dinamic nare date pe care sa le stergeti!!!");
        return -1;
    }
    tablou_dinamic=realloc(tablou_dinamic,size-1);
    size--;
    for(int i=index;i<size;i++)
        {
            strcpy(tablou_dinamic[i].nume,tablou_dinamic[i+1].nume);
            strcpy(tablou_dinamic[i].prenume,tablou_dinamic[i+1].prenume);
            tablou_dinamic[i].nota=tablou_dinamic[i+1].nota;
        }
    printf("\nTastati 2 pentru a vedea modificarile efectuate:");
    return size;
}
int main()
{
   printf("Sarcina 1 :Sa se elaboreze un program ce va aloca static un tablou unidimensional de structuri si va realiza urmatoarele functii:");
   int elemente=1;
   tablou tablou_static[elemente];
   printf("\nCitirea de la tastatura a elementelor tabloului");
   citire_tablou_static(tablou_static,elemente);
   printf("\nAfisarea la consola a elementelor tabloului");
   afisare_tablou_static(tablou_static,elemente);
   printf("\n\nCautarea unui element dupa o valoare a unui cimp din structura si returnarea pozitiei unde se afla primul element gasit");
   char c='u';
   cautare_caracter_tablou_static(c,tablou_static,elemente);

   printf("\n\nSarcina 2:Sa se elaboreze un program ce va aloca dinamic un tablou unidimensional de structuri si va realiza urmatoarele functii, ");
   printf("unde functiile date reprezinta optiuni organizate intr-un meniu in cadrul programului.");
   meniu_sarcina2();
   int m;
do
 {
   printf("\nIntroduceti optiunea dorita:");
   scanf("%d",&m);
   switch(m)
   {
       case 1:
       {
           citire_tablou_dinamic(elemente);
           break;
       }
       case 2:
        {
            afisare_tablou_dinamic(elemente);
            break;
        }
       case 3:
         {
             cautare_caracter_tablou_dinamic(c,elemente);
             break;
         }
        case 4:
         {
            free(tablou_dinamic);
            printf("\nMemoria a fost eliberata cu succes!!!");
            break;
         }
        case 5:
         {
           sortarea_elementelor_dupa_un_cimp(elemente);
           break;
         }
        case 6:
            {
              elemente=inserare_elemen_laSfirsit(elemente,elemente);
              break;
            }
        case 7:
            {
             elemente=inserare_elemen_laInceput(elemente,0);
             break;
            }
        case 8:
            {
                int pozitie;
                printf("\nIntroduceti pozitia la care vreti sa inserati un nou element:\n");
                scanf("%d",&pozitie);
                elemente=inserare_elemen_pozX(elemente,pozitie);
                break;
            }
        case 9:
            {
                printf("\nIntroduceti pozitia de pe care vreti sa stergi un element existent:");
                int pozitie;scanf("%d",&pozitie);
                printf("\nPozitia aleasa de dvs este:%d",pozitie);
                elemente=stergere_element(elemente,pozitie);
                break;
            }
       }
 } while (m!=0);
    return 0;
}
