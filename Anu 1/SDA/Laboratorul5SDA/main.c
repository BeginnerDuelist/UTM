#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100000
int N;
void meniu_ex1()
{
    printf("\n\t|----------------Meniul sarcinii 1-----------------|");
    printf("\n\t|--1)Initializarea tabloului cu numere aleatorii   |");
    printf("\n\t|--2)Afisarea tabloului                            |");
    printf("\n\t|--3)Eliberarea memoriei tabloului                 |");
    printf("\n\t|--4)Sortarea tabloului folosind metoda Bubble Sort|");
    printf("\n\t|--5)Sortarea tabloului folosind metoda Merge Sort |");
    printf("\n\t|--0)Terminarea programului sarcinii 1             |");
    printf("\n\t|--------------------------------------------------|");
}
void initializarea_tabloului_ex1(int *tablou)
{
    for(int i=0;i<N;i++)
    {
        tablou[i]=rand()%1000;
    }
    printf("\nTabloul a fost initializat !!!");
}
void initializarea_tabloului_ex2(int *tablou)
{
    for(int i=0;i<N;i++)
    {
        tablou[i]=i;
    }
    printf("\nTabloul a fost initializat !!!");
}
void afisarea_tabloului(int *tablou)
{
    if (tablou==NULL)
    {
        printf("\nTabloul nu a putut fi alocat dinamic\n");
        return;
    }
    printf("\nElementele tabloului sunt:\n");
    for(int i=0;i<N;i++)
    {
        printf("%d ",tablou[i]);
    }
}
void eliberare_memorie(int*tablou)
{
    if (tablou==NULL)
    {
        printf("\nMemoria tabloului a fost deja eliberata  !!!");
        return;
    }
    else
    {
    free(tablou);
    printf("\nTabloul a fost eliberat cu suucces!!!");
    }
}
void sortarea_metoda_BubbleSort(int *tablou)
{
    int aux;
    for(int j=0;j<N;j++)
    {
        for(int i=0;i<N-1;i++)
        {
            if(tablou[i]>tablou[i+1])
            {
                aux=tablou[i];
                tablou[i]=tablou[i+1];
                tablou[i+1]=aux;
            }
        }
    }
}
void merge_sort(int inceput,int sfirsit,int* tablou)
{
    if(inceput!=sfirsit)
    {
        int mijloc=(inceput+sfirsit)/2;
        merge_sort(inceput,mijloc,tablou);
        merge_sort(mijloc+1,sfirsit,tablou);
        merge_array(inceput,mijloc,sfirsit,tablou);
    }
}
void merge_array(int inceput,int mijloc,int sfirsit,int *tablou)
{
    int temp[max];
    int i=inceput,k=inceput,j=mijloc+1;
    while((i<=mijloc)&&(j<=sfirsit))
    {
        if(tablou[i]<=tablou[j]) temp[k++]=tablou[i++];
            else temp[k++]=tablou[j++];
    }
    while(i<=mijloc) temp[k++]=tablou[i++];
    while(j<=sfirsit) temp[k++]=tablou[j++];
    for(i=inceput;i<=sfirsit;i++)
    {
        tablou[i]=temp[i];
    }
}
void meniu_ex2()
{
    printf("\n\t|-----------------Meniul sarcinii 2------------------------------|");
    printf("\n\t|--1)Initializarea tabloului cu numere aleatorii                 |");
    printf("\n\t|--2)Afisarea tabloului                                          |");
    printf("\n\t|--3)Eliberarea memoriei tabloului                               |");
    printf("\n\t|--4)Cautarea unui numar din tablou folosind metoda liniar search|");
    printf("\n\t|--5)Cautarea unui numar din tablou folosind metoda binar search |");
    printf("\n\t|--0)Terminarea programului sarcinii 2                           |");
    printf("\n\t|----------------------------------------------------------------|");
}
int cautare_lininara(int *tablou,int numar)
{
    for(int i=0;i<N;i++)
    {
        if(tablou[i]==numar)
        {
             return i;
        }
    }
    return -1;//in caz ca nu am gasit elementul
}
int cautare_binara(int *tablou,int numar,int stinga,int dreapta)
{
    int mijloc=stinga+(dreapta-stinga)/2;
    if(stinga>dreapta) return -2;
    if(tablou[mijloc]==numar)
        return mijloc;
    else if(tablou[mijloc]>numar)
        return cautare_binara(tablou,numar,stinga,mijloc-1);
    else
        return cautare_binara(tablou,numar,mijloc+1,dreapta);

    return -1;// in caz ca nu am gasit elementul cautat
}

int main()
{
    int m;
    FILE *f=fopen("Rezultate sortari.txt","w");
    int* tablou_ex1=NULL;
    do
    {
        meniu_ex1();
        printf("\n\nIntrodu optiunea dorita:");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
        {
            srand(time(NULL));
            printf("\nIntrodu numarul de elemente a tabloului:");
            scanf("%d",&N);
            tablou_ex1=calloc(N,sizeof(int));
            initializarea_tabloului_ex1(tablou_ex1);
            break;
        }
        case 2:
        {
            afisarea_tabloului(tablou_ex1);
            break;
        }
        case 3:
        {
            eliberare_memorie(tablou_ex1);
            tablou_ex1=NULL;
            break;
        }
        case 4 :
            {
                clock_t tic = clock();
                sortarea_metoda_BubbleSort(tablou_ex1);
                clock_t toc = clock();
                double time_taken=(double)(toc - tic) / CLOCKS_PER_SEC;
                printf("\nSortarea prin metoda bubble sort a %d elemente a avut loc in %lf secunde",N,time_taken);
                printf("\nTastati 2 pentru a vedea tabloul sortat!");
                fprintf(f,"%lf  ",time_taken);
                if(N==100000)
                {
                    fprintf(f,"\n");
                }
                break;
            }
        case 5:
            {
                clock_t tic = clock();
                merge_sort(0,N-1,tablou_ex1);
                clock_t toc = clock();
                double time_taken=(double)(toc - tic) / CLOCKS_PER_SEC;
                printf("\nSortarea prin metoda merge sort a %d elemente a avut loc in %lf secunde",N,time_taken);
                printf("\nTastati 2 pentru a vedea tabloul sortat!");
                fprintf(f,"%lf  ",time_taken);
                break;
            }
        }
   } while(m!=0);
   fclose(f);
   FILE *f1=fopen("Rezultate cautarii.txt","w");
   int *tablou_ex2=NULL;
   do
   {
        meniu_ex2();
        printf("\n\nIntrodu optiunea dorita:");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
            {
                printf("\nIntrodu numarul de elemente a tabloului:");
                scanf("%d",&N);
                tablou_ex2=calloc(N,sizeof(int));
                initializarea_tabloului_ex2(tablou_ex2);
                break;
            }
        case 2:
            {
                afisarea_tabloului(tablou_ex2);
                break;
            }
        case 3:
            {
                eliberare_memorie(tablou_ex2);
                tablou_ex2=NULL;
                break;
            }
        case 4:
            {
                int numar,pozitie;
                printf("\nIntrodu numarul ce vrei sal gasesti:");
                scanf("%d",&numar);
                clock_t tic = clock();
                for(int i=0;i<10000;i++)
                {
                   pozitie=cautare_lininara(tablou_ex2,numar);
                }
                clock_t toc = clock();
                double time_taken=(double)(toc - tic) / CLOCKS_PER_SEC;
                printf("\nNumarul %d a fost gasit prima data pe pozitia %d",numar,pozitie);
                printf("\nCautarea prin metoda liniar search prin %d elemente a avut loc in %lf secunde",N,time_taken);
                fprintf(f,"%lf  ",time_taken);
                if(N==100000)
                {
                    fprintf(f1,"\n");
                }
                break;
            }
        case 5:
            {
                int numar,pozitie;
                printf("\nIntrodu numarul ce vrei sal gasesti:");
                scanf("%d",&numar);
                merge_sort(0,N-1,tablou_ex2);
                clock_t tic = clock();
                for(int i=0;i<10000;i++)
                {
                    pozitie=cautare_binara(tablou_ex2,numar,0,N-1);
                }
                clock_t toc = clock();
                double time_taken=(double)(toc - tic) / CLOCKS_PER_SEC;
                printf("\nNumarul %d a fost gasit prima data pe pozitia %d",numar,pozitie);
                printf("\nCautarea prin metoda binar search prin %d elemente a avut loc in %lf secunde",N,time_taken);
                fprintf(f,"%lf  ",time_taken);
                break;
            }
        }
   }while (m!=0);
   fclose(f1);

    return 0;
}
