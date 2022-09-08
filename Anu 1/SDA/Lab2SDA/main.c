#include <stdio.h>
#include <stdlib.h>
void meniu()
{
    printf("\n\t|=========================Meniul programului=============================");
    printf("\n\t|-----------------------------------------------------------------------|");
    printf("\n\t|   1)citirea de la tastatura a elementelor listei;                     |");
    printf("\n\t|-----------------------------------------------------------------------|");
    printf("\n\t|   2)afisarea la consola a elementelor listei;                         |");
    printf("\n\t|-----------------------------------------------------------------------|");
    printf("\n\t|   3)cautarea unui element dupa o valoarea a unui cimp                 |");
    printf("\n\t| din structura si returnarea pozitiei unde se afla primul element gasit|");
    printf("\n\t|-----------------------------------------------------------------------|");
    printf("\n\t|   4)eliberarea memoriei listei;                                       |");
    printf("\n\t|-----------------------------------------------------------------------|");
    printf("\n\t|   5)sortarea elementelor dupa un cimp a structurii;                   |");
    printf("\n\t|-----------------------------------------------------------------------|");
    printf("\n\t|   6)inserarea unui element nou la capatul listei;                     |");
    printf("\n\t|-----------------------------------------------------------------------|");
    printf("\n\t|   7)inserarea unui element nou la inceputul listei;                   |");
    printf("\n\t|-----------------------------------------------------------------------|");
    printf("\n\t|   8)insearea unui element la o pozitie X                              |");
    printf("\n\t|      (introdusa de la tastatura) in cadrul listei;                    |");
    printf("\n\t|-----------------------------------------------------------------------|");
    printf("\n\t|   9)stergerea unui element de pe o pozitie X                          |");
    printf("\n\t|    ( introdusa de la tastatura) din cadrul listei;                    |");
    printf("\n\t|-----------------------------------------------------------------------|");
    printf("\n\t|   10)inversarea ordinei elementelor din lista;                        |");
    printf("\n\t|-----------------------------------------------------------------------|");
    printf("\n\t|   11)curatirea listei.                                                |");
    printf("\n\t|-----------------------------------------------------------------------|");
    printf("\n\t|      Tastati orice 0 pentru a iesi din program!!!                     |");
    printf("\n\t|=======================================================================|");
}
struct Nod
{
    int info;
    struct Nod * urmator;
};
struct Lista
{
    struct Nod * head;
};
typedef struct Nod Nod;
typedef struct Lista Lista;
Lista* creare_Lista()
{
    Lista *lista=malloc(sizeof(Lista));
    lista->head=NULL;
    return lista;
}
Nod * creare_Nod(int info)
{
    Nod * nod=malloc(sizeof(Nod));
    nod->info=info;
    return nod;
}
void citire_date_de_la_tastatura(int nr_noduri,Lista* lista)
{
    int nr;
    if(lista==NULL)
    {
        printf("\nMemoria nu a fost alocata!!!");
        return;
    }
    for(int i=0;i<nr_noduri;i++)
    {
        printf("\nIntroduceti informatia pentru nodul %d :",i+1);
        scanf("%d",&nr);
        inserare_la_inceput(lista,nr);
    }
    inversare_lista(lista);
    printf("\nTastati 2 pentru a vedea lista!!!");
}
void inserare_la_inceput(Lista *lista, int info)
{
    Nod * nod_nou=creare_Nod(info);
    nod_nou->urmator=lista->head;
    lista->head=nod_nou;
}
void afisare_lista(Lista *lista)
{
    if(lista==NULL)
    {
        printf("\nLista nu a fost alocata!!!");
        return;
    }

    if(lista->head==NULL)
    {
        printf("\nLista este vida!\n");
        return;
    }
    printf("\nElementele listei sunt :\n");
    Nod* nod_curent=lista->head;
    while(nod_curent!=NULL)
    {
        printf("%d ",nod_curent->info);
        nod_curent=nod_curent->urmator;
    }
    printf("\n");
    free(nod_curent);

}
void inversare_lista(Lista * lista)
{
    if(lista!=NULL && lista->head!=NULL)
    {
        Nod * precedent = NULL, * curent=lista->head, * urmator = NULL;
            while(curent)
            {
                urmator=curent->urmator;
                curent->urmator=precedent;
                precedent=curent;
                curent=urmator;
            }
            lista->head=precedent;
    }
}
int cautare_lista(Lista *lista, int info)
{
    if(lista->head==NULL)
    {
        printf("\nLista este vida!!!");
        return -2;//Daca lista este vida inseamna cu nu exista niciun element//
    }
    int gasit=0;
    Nod * nod_curent=lista->head;
    while(nod_curent!=NULL)
    {
        if(nod_curent->info==info)
        {
            return gasit;
        }
        gasit++;
        nod_curent=nod_curent->urmator;
    }
    return -1;///in caz ca elementu nu exista in lista
}
void curatire_lista(Lista *lista)
{
    if(lista->head==NULL)
    {
        printf("\nLista este vida!!!");
        return;
    }
    Nod *nod_curent=lista->head,*nod_precedent=NULL;
    while(nod_curent!=NULL)
    {
        nod_precedent=nod_curent;
        nod_curent=nod_curent->urmator;
        free(nod_precedent);
    }
    lista->head=NULL;
    printf("\nLista a fost curatita");

}
void eliberare_lista(Lista *lista)
{
    if(lista==NULL)
    {
        printf("\nLista a fost eliberata deja!!!");
        return;
    }
    curatire_lista(lista);
    free(lista);
    printf("\nMemoria a fost eliberata cu succes!!!");
}
void sortarea_liste(Lista *lista)
{
    if(lista->head==NULL)
    {
        printf("\nLista este vida!!!");
        return;
    }
    int temp;
    Nod *nod1,*nod2;
    for(nod1=lista->head;nod1->urmator!=NULL;nod1=nod1->urmator)
    {
        for(nod2=nod1->urmator;nod2!=NULL;nod2=nod2->urmator)
        {
            if(nod1->info > nod2->info)
            {
                temp=nod1->info;
                nod1->info=nod2->info;
                nod2->info=temp;
            }
        }
    }
    printf("\nTastati 2 pentru a vedea lista !!!");
}
void inserare_la_sfirsit(Lista *lista,int numar)
{
    Nod *nod_nou=creare_Nod(numar);
    nod_nou->urmator=NULL;

    Nod *auxiliar = lista->head;
    while(auxiliar->urmator!=NULL)
    {
        auxiliar=auxiliar->urmator;
    }
    auxiliar->urmator=nod_nou;
    printf("\nTastati 2 pentru a vedea lista !!!");
}
void inserare_pozitie_X(Lista *lista,int pozitie,int numar)
{
   Nod* nod_nou=creare_Nod(numar);
   nod_nou->urmator=NULL;
   if(pozitie==0)
   {
       nod_nou->urmator=lista->head;
       lista->head=nod_nou;
   }
   else
    {
      Nod*temp=lista->head;
      for(int i=0;i<pozitie-1;i++)
      {
          temp=temp->urmator;
      }
      nod_nou->urmator=temp->urmator;
      temp->urmator=nod_nou;
    }
    printf("\nTastati 2 pentru a vedea modificarile !!!");
}
void stergere_pozitie_X(Lista *lista,int pozitie)
{
    Nod* nod_temp1=lista->head;
    if(pozitie==0)
    {
        lista->head=nod_temp1->urmator;
        free(nod_temp1);
        return;
    }
    for(int i=0;i<pozitie-1;i++)
    {
      nod_temp1=nod_temp1->urmator;
    }
    Nod* nod_temp2=nod_temp1->urmator;
    nod_temp1->urmator=nod_temp2->urmator;
    free(nod_temp2);
    printf("\nTastati 2 pentru a vedea modificarea!!!");
}
int main()
{
    int k;
    Lista * l=creare_Lista();
    meniu();
    do
    {
        printf("\nAlegeti optiunea dorita:");
        scanf("%d",&k);
  switch(k)
    {
       case 1:
        {
           printf("\nIntroduti numarul de noduri ale listei:");
           int noduri;scanf("%d",&noduri);
           citire_date_de_la_tastatura(noduri,l);
           break;
        }
       case 2:
        {
            afisare_lista(l);
            break;
        }
       case 3:
        {
            printf("\nIntroduceti elementul ce doriti sal gasiti:");
            int element,pozitie;scanf("%d",&element);
            pozitie=cautare_lista(l,element);
            printf("\nElementul a fost gasit prima data pe pozitia %d",pozitie);
            break;
        }
       case 4:
        {
           eliberare_lista(l);
           l=NULL;
           break;
        }
       case 5:
        {
          sortarea_liste(l);
          break;
        }
       case 6:
        {
           printf("\nIntroduceti un nou element pe care sal introduceti la sfirsit de lista:");
           int numar;scanf("%d",&numar);
           inserare_la_sfirsit(l,numar);
           break;
        }
       case 7:
        {
            printf("\nIntroduceti un nou element pe care sal introduceti la inceput de lista:");
            int element_nou;scanf("%d",&element_nou);
            inserare_la_inceput(l,element_nou);
            printf("\nTastati 2 pentru a vedea modificarile din lista!!!");
            break;
        }
       case 8:
        {
            printf("\nIntroduceti un nou element pe care doriti sal inserati:");
            int numar;scanf("%d",&numar);
            printf("\nIntroduceti pozitia la care vreti sa introduceti elementul:");
            int poz;scanf("%d",&poz);
            inserare_pozitie_X(l,poz,numar);
            break;
        }
       case 9:
        {
            printf("\nIntroduceti pozitia la care vreti sa stergeti un element din lista:");
            int pozitie;scanf("%d",&pozitie);
            stergere_pozitie_X(l,pozitie);
            break;
        }
       case 10:
        {
            inversare_lista(l);
            printf("\nTastati 2 pentru a vedea lista!!!");
            break;
        }
       case 11:
        {
            curatire_lista(l);
            l=NULL;
        }
    }
    }while((k>=1)&&(k<=11));
   return 0;
}
