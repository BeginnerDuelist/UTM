#include <stdio.h>
#include <stdlib.h>

int etichete[20];
int drum_minim[20];
int nr_de_virfuri,nr_de_arce,virf_initial,virf_final;
int matricea_ponderata[20][20],vector[20][20];
/*={
        {0,5,3,5,6,8,0},
        {0,0,0,1,4,0,0},
        {0,0,0,0,2,0,0},
        {0,0,0,0,3,5,0},
        {0,0,0,0,0,4,6},
        {0,0,0,0,0,0,5},
        {0,0,0,0,0,0,0}

    };*/
void introducere_matrice_ponderata()
{
   int i,j,p;
   printf("Introdu matricea ponderata a grafului:\n");
   for(int i=0;i<nr_de_virfuri;i++)
   {
       for(int j=0;j<nr_de_virfuri;j++)
		{
		    matricea_ponderata[i][j]=999;
		}
   }
	for(int i=0;i<nr_de_virfuri;i++)
    {
        matricea_ponderata[i][i]=0;
    }

	for(int k=0;k<nr_de_arce;k++)
	{
		printf("\r\nIntrodu originea->extrimitatea si ponderea\r\n");
		printf("Originea -> "); scanf("%d",&i);
		printf("Extrimitatea -> "); scanf("%d",&j);
		printf("Ponderea ->"); scanf("%d",&p);
		matricea_ponderata[i-1][j-1]=p;
    }
}
void afisare_matrice_ponderata()
{
    printf("\nMatricea ponderata a grafului este :\n");
    for(int i=0;i<nr_de_virfuri;i++)
    {
        printf("\t");
        for(int j=0;j<nr_de_virfuri;j++)
        {
            if(matricea_ponderata[i][j]==0 || matricea_ponderata[i][j]<10)
            {
                printf("  %d ",matricea_ponderata[i][j]);
            }

            else
            {
                printf(" %d",matricea_ponderata[i][j]);
            }
        }
        printf("\n");
    }
}
void initializare_etichetelor()
{
    for(int i=0;i<nr_de_virfuri;i++)
    {
        etichete[i]=999;
    }

    etichete[0]=0;
}
void modificarea_etichetelor()
{
    for(int k=0;k<nr_de_virfuri;k++)
    {
        for(int i=0; i<nr_de_virfuri; i++)
        {
            for(int j=0;j<nr_de_virfuri;j++)
            {
                if (matricea_ponderata[i][j]!=0 && matricea_ponderata[i][j]!=999)
                {
                    if ((etichete[j]-etichete[i])>matricea_ponderata[i][j])
                    {
                        etichete[j]=etichete[i]+matricea_ponderata[i][j];
                    }
                }
            }
        }
    }
}

void drumul_minim_FORD(int j,int aux)
{
   for(int i=0;i<nr_de_virfuri;i++)
    {
        if (matricea_ponderata[i][j]!=0 && matricea_ponderata[i][j]!=999)
        {

            if ((etichete[j]-etichete[i])==matricea_ponderata[i][j])
            {
                drum_minim[aux]=i;
                ++aux;
                drumul_minim_FORD(i,aux);
            }
        }
        if(j==0)
        {
            for(i=aux-1;i>=0;i--)
            {
                printf("%d-->", drum_minim[i]+1);
            }
            return;
        }
    }
}
void Bellman_Kalaba()
{
    int k=1,aux,min,i,j,aux1;
    printf("\n\nIntrodu virful initial din care incepe drumul:");
	scanf("%d",&virf_initial);
	printf("\nIntrodu virful final unde se termina drumul: ");
	scanf("%d",&virf_final);
	virf_initial--;
	virf_final--;
    for(i=0;i<=virf_final;i++)
    {
        vector[0][i]=matricea_ponderata[i][virf_final];
    }
    do
	{
        aux=0;
        for(i=0; i<=virf_final; i++)
        {
            min=1000;
            for(j=0; j<=virf_final; j++)
            {
                if(i==j) continue;
                if(matricea_ponderata[i][j]+vector[k-1][j]<min )
                {
                    min=matricea_ponderata[i][j]+vector[k-1][j];
                }
            }
            vector[k][i]=min;
        }
        vector[k][virf_final]=0;
        for(i=0;i<=virf_final;i++)
        {
           if(vector[k][i]!=vector[k-1][i])
            {
                aux=1;
                break;
            }
        }
    k++;
  } while(aux==1);
    k--;
    aux1=0;
    i=virf_initial;
    j=0;
    drum_minim[aux1++]=i+1;
    for(;i!=virf_final;)
    {
        if (i==j) j++;
        if(vector[k][i]-matricea_ponderata[i][j]==vector[k][j])
        {
            drum_minim[aux1++]=j+1;
            i=j;
            j=0;
        }
        else j++;
     }
    drum_minim[aux1]=vector[k][virf_initial]-vector[k][virf_final];
    printf("\r\n Drumul minim prin algoritmul Bellman-Kalaba este : ");
    for(i=0;drum_minim[i+1]!=0;i++)
    {
        printf("%d-->",drum_minim[i]);
    }
    printf("\r\n Lungimea drumului din %d in %d este egal cu %d unitati  ",virf_initial+1,virf_final+1,drum_minim[i]);

}
int main()
{
    int aux=0,lungimea_drumului=0;
    printf("\nIntrodu numarul de virfuri ale grafului:");
    scanf("%d",&nr_de_virfuri);
    printf("\nIntrodu numarul de arce ale grafului:");
    scanf("%d",&nr_de_arce);
    introducere_matrice_ponderata();//introducem matriecea ponderata a grafului
    afisare_matrice_ponderata();// afisam matricea
    initializare_etichetelor();// initializez etichetele cu valorile respective prima cu 0 restu cu 999
    modificarea_etichetelor();// modificam etichetele pentru a putea afla lungimea drumului din virful 1 in virful X
    //primul element din drum este ultimul varf
    drum_minim[aux]=nr_de_virfuri-1;
    ++aux;// incrementam valoarea varibilei ajutatatoare aux ; acum aux =1;
    lungimea_drumului= etichete[nr_de_virfuri-1];//lungimea drumului din virful 1 in virful X corespunde cu eticheta virfului X
    printf("\nDrumul  din virful 1 in virful %d are valoarea de %d unitati si este urmatorul:\n",nr_de_virfuri,lungimea_drumului);
    drumul_minim_FORD(nr_de_virfuri-1,aux);//apelam functia care ne calculeaza drumu prin metoda ford
    for(int i=0;i<20;i++)
    {
        drum_minim[i]=0;//initializez tabloul cu 0 ca apoi sa insere in el drum minim prin metoda bellman-kalaba
    }
    Bellman_Kalaba();//functia ce calculeaza si afiseaza drumul minim prin metoda Bellman-Kalaba

return 0;
}
