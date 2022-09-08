#include <stdio.h>
#include <stdlib.h>
int matrice_adiacenta[100][100];
int matrice_incidenta[150][100];
int lista_adiacenta[100][100];
int nr_de_virfuri=0;
int nr_de_arce=0;
///Lista de adiacenta si functiile de tranformare in matrice de adicenta si matrice de incidenta///
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
void NumarulDeArce() //functia ce numara cite arce avem din matricea de adiacenta
{
    nr_de_arce=0;
    printf("\n\tArcele grafului nostru:");
	for(int i=0;i<nr_de_virfuri;i++)
    {
        for(int j=0;j<nr_de_virfuri;j++)
        {
			if(matrice_adiacenta[i][j] == 1)
			{
				printf("\nU%d(%d,%d)",nr_de_arce+1,i+1,j+1);
				nr_de_arce++;
			}
        }
    }
}
void MatriceDeAdiacentaInMatriceDeIncidenta()
{
	int k=0;
	for(int i=0;i<nr_de_virfuri;i++)
    {
        for(int j=0;j<nr_de_virfuri;j++)
        {
            matrice_incidenta[i][j]=0;
        }
    }
	for (int i=0;i<nr_de_virfuri;i++)
    {
		for (int j=0;j<nr_de_virfuri;j++)
		{
			if((matrice_adiacenta[i][j]==1))
			{
				matrice_incidenta[k][i]=-1;
				matrice_incidenta[k][j]=1;
				k++;
		    }
        }
        nr_de_arce=k;
    }
}
void AfisareMatriceDeIncidenta()
{
    printf("\n\tMatrice de incidenta\n\n");
	for(int i=0;i<nr_de_arce;i++)
	{

		for(int j=0;j<nr_de_virfuri;j++)
        {
              printf(" %d ",matrice_incidenta[i][j]);
        }
		printf("\n");
	}
}
///Matricea de adiacenta si functiile de transformare in matrice de incidenta si in lista de adiacenta
void CitireMatriceDeAdiacenta()
{
    for(int i=0;i<nr_de_virfuri;i++)
    {
        for(int j=0;j<nr_de_virfuri;j++)
        {
            printf("matrice_adiacneta[%d][%d]=",i,j);
            scanf("%d",&matrice_adiacenta[i][j]);
        }
        printf("\n");
    }
}
void MatriceDeAdiacentaInListaDeAdiacenta() //Matricea ce transforma matricea de adiacenta in lista de adiacenta si o afiseaza in acelasi timp//
{
    printf("\n\tLista de adiacenta\n");
	for(int i=0;i<nr_de_virfuri;i++)
	{
	    printf("\n|%d|",i+1);
		for(int j=0;j<nr_de_virfuri;j++)
		{
			if(matrice_adiacenta[i][j]==1)
			{
				printf("%d_",j+1);
            }
        }
        printf("0");
	}
}
/// Matricea de incidenta :
void CitireMatriceDeIncidenta()
{
	for (int i=0;i<nr_de_arce;i++)
	{
 		for (int j=0;j<nr_de_virfuri;j++)
		{
			printf("matrice_incidenta[%d][%d]=",i,j);
			scanf("%d", &matrice_incidenta[i][j]);
		}
		printf("\n");
	}
}
void MatriceDeIncidentaInMatriceDeAdiacenta()
{
     for (int i=0;i<nr_de_virfuri;i++)
      {
    	 for (int j=0;j<nr_de_virfuri;j++)
    	 {
    		matrice_adiacenta[i][j]=0;
    	 }
      }

   for (int i=0;i<nr_de_arce;i++)
     {
    	int x=0,y=0;
        for (int j=0;j<nr_de_virfuri;j++)
        {
            if(matrice_incidenta[i][j]==-1) x=j;
            if(matrice_incidenta[i][j]==1)  y=j;
        }
        matrice_adiacenta[x][y]=1;
     }
}
int main()
{
   int k;
   do {
   printf("\nIntroduceti metoda prin care doriti sa introduceti graful:");
   printf("\n1)Lista de adiacenta;\n2)Matrice de adiacenta;\n3)Matrice de incidenta;\n4)Iesiti din bucla do while apasind orice tasta de la 4-9");
   printf("\nOptiunea:");
   scanf("%d",&k);
   switch(k)
   {
       case 1:
           {
               printf("\nAti ales sa introduceti graful sub forma de lista de adiacenta:");
               printf("\nIntroduceti numarul de virfuri a grafului:");
               scanf("%d",&nr_de_virfuri);
               CitireListaDeAdiacenta();
               AfisareListaDeAdiacenta();
               ListaDeAdiacentaLaMatriceDeAdiacenta();
               AfisareMatriceDeAdiacenta();
               NumarulDeArce();
               MatriceDeAdiacentaInMatriceDeIncidenta();
               AfisareMatriceDeIncidenta();
               break;
           }
       case 2:
           {
              printf("\nAti ales sa introduceti graful sub forma de matrice de adiacenta:");
              printf("\nIntroduceti numarul de virfuri a grafului:");
              scanf("%d",&nr_de_virfuri);
              CitireMatriceDeAdiacenta();
              AfisareMatriceDeAdiacenta();
              NumarulDeArce();
              MatriceDeAdiacentaInMatriceDeIncidenta();
              AfisareMatriceDeIncidenta();
              MatriceDeAdiacentaInListaDeAdiacenta();
              break;
           }
       case 3:
           {
               printf("\nAti selectat sa introduceti graful sub forma de matrice de incidenta:");
               printf("\nIntroduceti numarul de virfuri a grafului:");
               scanf("%d",&nr_de_virfuri);
               printf("\nIntroduceti numarul de arce a grafului:");
               scanf("%d",&nr_de_arce);
               CitireMatriceDeIncidenta();
               AfisareMatriceDeIncidenta();
               MatriceDeIncidentaInMatriceDeAdiacenta();
               AfisareMatriceDeAdiacenta();
               MatriceDeAdiacentaInListaDeAdiacenta();
               break;
           }
       default:
        {
            printf("\nAti introdus o optiune gresita!!!\nApasati enter ca sa iesiti din program:");
            break;
        }
     }
   } while((k>=1) && (k<=3));

    return 0;
}
