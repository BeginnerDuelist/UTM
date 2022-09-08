#include <stdio.h>
#include <stdlib.h>
int matrice_adiacenta[20][20];
int lista_adiacenta[20][20];
int nr_de_virfuri;
int vizitat[20];
 void CitireListaDeAdiacenta()
 {
    printf("Introduceti elementele listei de adiacenta:\n");
    for(int i=0;i<nr_de_virfuri;i++)
    {
        for(int j=0;j<nr_de_virfuri;j++)
        {
            scanf("%d",&lista_adiacenta[i][j]);
            if(lista_adiacenta[i][j]==0)
                break;
        }
     }
 }
void AfisareListaDeAdiacenta()
{
    printf("\nLista de adiacenta a grafului introdus este:\n");
	for(int i=0;i<nr_de_virfuri;i++)
	{
		printf("| %d | ",i+1);
		for(int j=0;j<nr_de_virfuri;j++)
		{
			if(lista_adiacenta[i][j]!=0)
            {
                printf("%d_",lista_adiacenta[i][j]);
            }
			else if(lista_adiacenta[i][j]==0)
            {
				printf("%d",0);
                break;
			}
        }
		printf("\n");
	}
}
void ListaDeAdiacentaLaMatriceDeAdiacenta()
{
    for(int i=0;i<nr_de_virfuri;i++)
    {
        for(int j=0; j<nr_de_virfuri; j++)
        {
            matrice_adiacenta[i][j]=0;
        }
    }

    for(int i=0;i<nr_de_virfuri;i++)
    {
        for(int j=0;j<nr_de_virfuri;j++)
        {
            if(lista_adiacenta[i][j]!=0)
            {
                matrice_adiacenta[i][lista_adiacenta[i][j]-1]=1;
            }
        }
    }
}
void AfisareMatriceDeAdiacenta()
{
	printf("\n\tMatrice de adiacenta\n\n");
	for (int i=0;i<nr_de_virfuri;i++)
	{
		for (int j=0;j<nr_de_virfuri;j++)
        {
            printf(" %d  ", matrice_adiacenta[i][j]);
        }
		printf("\n");
	}
}
void parcurgere_in_largime(int start)
{
    int coada[nr_de_virfuri],capatul=-1,inceputul=-1,i,k;
    for(k=0;k<nr_de_virfuri;k++)
    {
        vizitat[k]=0;//initial toate virfurile sunt nevizatat
    }
    coada[++capatul]=start;//introducem virful de start in coada
    ++inceputul;
    vizitat[start]=1;
    while(capatul>=inceputul) // atita timp cit coada nu e vida
    {
        start=coada[inceputul++];
        printf("%d-->",start+1);
        for(i=0;i<nr_de_virfuri;i++) //parcurg virfurile
        {
            if(matrice_adiacenta[start][i]==1 && !vizitat[i]) //daca i este vecin cu start si nu e vizitat
            {
                vizitat[i]=1;// il vizitez
                coada[++capatul]=i;//il adaug in coada
            }
        }

    }
}
void parcurgere_in_adancime(int start)
{

	printf("%d-->",start+1);
  	vizitat[start]=1; //vizitam varful curent x
    for(int i=0;i<nr_de_virfuri;i++) //determinam vecinii nevizitati ai lui x
        {
	       if(matrice_adiacenta[start][i]==1 && !vizitat[i])
	         {
	    	    parcurgere_in_adancime(i); //continuam parcurgerea cu vecinul curent i
	         }
        }
}
int main()
{
    printf("\nIntroduceti nr de virfuri ale grafului:");
    scanf("%d",&nr_de_virfuri);
    CitireListaDeAdiacenta();
    AfisareListaDeAdiacenta();
    ListaDeAdiacentaLaMatriceDeAdiacenta();
    AfisareMatriceDeAdiacenta();
    int virf_de_plecare;
    printf("\nIntroduceti nodul din care vreti sa incepeti parcurgerile:");
    scanf("%d",&virf_de_plecare);
    printf("\nParcurgerea in largime: ");
    virf_de_plecare--;
    parcurgere_in_largime(virf_de_plecare);
    printf("\nParcurgerea in adincime: ");
    for(int j=0;j<nr_de_virfuri;j++)
    {
        vizitat[j]=0;
    }
    parcurgere_in_adancime(virf_de_plecare);
}
