#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void TABLOU(int a[],int n)
{
 if(n<0)
 return ;
  TABLOU(a,n-1);
 printf("\t%d ",a[n]);
}
int suma(int r[], int s, int j)
{
if(s >= j)
return 0;
return (r[s] + suma(r,s + 1,j));
}
int minimum(int a[],int n,int i)
 {
int min=0;
if(i<n)
{
if(a[min]>a[i])
{
min=i;
minimum(a,n,i++);
}
}
return min;
}
 int maximum(int a[],int n,int i)
 {
int max=0;;
if(i<n)
{
if(a[max]<a[i])
{
max=i;
maximum(a,n,i++);
}
}
return max;
 }
int max_tablou(int a[], int x, int l)//functia pentru a afla valoare maxima dintrun tablou
{
int max;
if(x>=l-2)
{
if(a[x] > a[x + 1])
  return a[x];
    else return a[x + 1];
}
max = max_tablou(a,x + 1,l);
if(a[x] > max)
        return a[x];
    else return max;
}
int min_tablou(int a[], int x, int l)
{
int min;
if(x>=l-2)
{
if(a[x] < a[x + 1])
    return a[x];
    else return a[x + 1];
}
    min = min_tablou(a,x + 1,l);
    if(a[x] < min)
        return a[x];
    else return min;
}
int  duplicat(int G1[],int m1)
{
    int c2;
    for(int x=0; x<m1; x++)
    {
         if(G1[x]!=-1)
		{
		    for(int y=x+1; y<m1; y++)

            {
        	   if(G1[x]==G1[y])
        	    {
			       c2++;
			       G1[y]=-1;

		       }
	       }
 		}
}
     printf("\nNumarul elementelor dublicate din tablou:=%d",c2);
     return 0;
}
     int sterg_duplicat (int a[], int n)
{   if (n == 0 || n == 1)
    return n;
  int a1[n];
  int j = 0;
  int i;
  for (i = 0; i < n - 1; i++)
    if (a[i] != a[i + 1])
      a1[j++] = a[i];
  a1[j++] = a[n - 1];

  for (i = 0; i < j; i++)
    a[i] = a1[i];
return j;
}
 int main ()
{ //Probleme tablouri unidimensionale//
  printf("Lucrare de laborator nr.4\n\n");
  printf("Problema nr.1:\nScrieti un program C pentru a citi si a imprima elementele unui tablou. - folosind recursia.");
  int m=2,i;
  printf("\nNumarul de componente al tabloului nostru este:%d\n",m);
  int a[m];//tablou
  for (int i=0;i<=m-1;i++){
        printf("\nElementele sunt a[%d]=",i);
        scanf("%d",&a[i]);}
 TABLOU(a,m-1);//Apelul functiei Tablou

 printf("\n\nProblema nr.2:\nScrieti un program C pentru a imprima toate elementele negative dintr-un tablou.\n");
 int  b[]={-1,1,-2,2,-3,-4};//masiv initializat
 int s= sizeof b/sizeof b[0];//formula de aflare a numarului de elemente din masiv //s=nr de elemente din masivul b
 for( int i=0;i<=s-1;i++){
    if (b[i]<0)
printf("\nElement negativ din tablou este:\tb[%d]=%d",i,b[i]);
}

 printf("\n\nProblema nr.3:\nScrieti un program C pentru a gasi suma tuturor elementelor tabloului. - folosind recursia.\n");
 int c[]={1,2,3,4};
 int n1=sizeof c/sizeof c[0], Suma_tablou;
Suma_tablou=suma(c,0,n1);
 printf("\nTabloul are %d elemente",n1);
 printf("\nSuma este:%d",Suma_tablou);

 printf("\n\nProblema nr.4:\nScrieti un program C pentru a gasi elementul maxim si minim intr-un tablou. - folosind recursia.");
 int o[]={3,1,20,-3,-323,32233};
 int n2=sizeof o/sizeof o[0], max, min;
    max = max_tablou(o, 0, n2);//valoare maxima din tablou
    min = min_tablou(o, 0, n2);//valoare minima din tablou
    printf("\nMarimea tabloului:%d",n2);
    for(int i=0; i<=n2-1; i++)
        printf("\nElementele tabloului sunt: o[%d]=%d\t",i, o[i]);

    printf("\nElementul minim din tablou este =%d" ,min);
    printf("\nElementul maxim din tablou este =%d ", max);
 printf("\n\nProblema nr.5 Scrieti un program C pentru a gasi al doilea cel mai mare element dintr-un tablou.");
for(int i=0; i<n2; i++){
    printf("\nElementele tabloului sunt :o[%d]=%d\t",i,o[i]);
  }int q=0;
  int max2 = q;
  int e2 = q;
  for(int i=0; i<n2; i++){
    if(o[i]>max2){
      e2=max2;
      max2=o[i];
    }
 else if(o[i]<max2 && o[i]>e2){
      e2 = 0;
      o[i];}
}
printf("\nAl doilea cel mai mare element este :%d\n",e2);
   printf("\n\nProblema nr.6:\nScrieti un program C pentru a numara numarul total de elemente pare si impare dintr-un tablou.");
    int par=0,impar=0;

    printf("\nMarimea tabloului este:%d",n2);
    printf("\nAfisam elementele tabloului:");
    for(int i=0; i<n2; i++)
    {
        printf("\no[%d]=%d",i,o[i]);
    }
     for(int i=0; i<n2; i++)
    {
    if(o[i]%2==0) par++;
    else impar++;
}
printf("\nIn tabloul nostru avem %d elemente pare",par);
printf("\nIn tabloul nostru avem %d elemente impare",impar);

printf("\n\nProblema 7:\nScrieti un program C pentru a numara numarul total de elemente negative dintr-un tablou.");
int negativ=0;
   printf("\n Marimea tabloului este %d:",n2);
   printf("\nElementele tabloului sunt:");
    for(int i=0; i<n2; i++)
    {
    printf("\no[%d]=%d",i,o[i]);
    }
    for(int i=0; i<n2; i++)
    {
        if(o[i] < 0)
         negativ++;
} printf("\nNumarul elementelor negative din tablou este :%d",negativ);

printf("\n\nProblema 8:\nScrieti un program C pentru a copia toate elementele dintr-un tablou in alt tablou.");
int d[]={1,2,3,4,5,6};
int d1=sizeof d/sizeof d[0];
int w=d1,f[w];
    printf("\nMarimea tabloului d[] este :%d",d1);
    printf("\nIntrodu elementele tabloului d : ");
    for(i=0; i<d1; i++)

    printf("\nd[%d]=%d",i,d[i]);

    for(i=0; i<d1; i++)

        f[i] = d[i];

    printf("\nElementele din tabloul f sunt : ");
    for(i=0; i<d1; i++)
    {
    printf("\nf[%d]=%d",i,f[i]);
    }
    printf("\n\nProblema 9:\nScrieti un program C pentru a insera un element intr-un tablou pe o pozitie data de la tastatura.");
   int  poz, val;
   printf("\n Nr de elemente in tablou este :=%d",n2);
   printf("\nIntrodu elemente tabloului\n");
   for (i = 0; i < n2; i++)
      printf("\no[%d]=%d",i,o[i]);

   printf("\nIntroducem pozitia in care vrei sa inserezi noul element\n");
   scanf("%d", &poz);

   printf("\nIntrocem noua valoare in tablou:\n");
   scanf("%d", &val);

   for (i=n2-1;i>=poz-1;i--)
      o[i+1] =o[i];
    o[poz-1] = val;
    printf("Noul tablou este :\n");
    for (i=0; i<=n2;i++)
      printf("\no[%d]=%d",i,o[i]);

printf("\n\nProblema nr.10:\nScrieti un program C pentru a sterge un element dintr-un tablou in pozitia specificata de la tastatura.");
 printf("\nIntrodu %d elementele",d1);
  for ( i=0; i<d1;i++)
      printf("\nd[%d]=%d",i,d[i]);
   int poz1;
   printf("\nIntroducem pozitia de unde vrem sa stergem elementul dat:",poz1);
   scanf("%d",&poz1);
   if (poz1>=d1+1) //pozitia nu trebuie sa depaseasca marimea tabloului adica poz1<=6//
      printf("\nNu putem sterge elementul");
   else
   {
    for (i=poz1-1;i <d1-1;i++)
         d[i] = d[i+1];
     printf("\nNoul tablou obtinut este:\n");
     for (i=0;i<d1-1;i++)
     printf("\nd[%d]=%d",i,d[i]);
   }

   printf("\n\nProblema nr.11:\nScrieti un program C pentru a numara frecventa relativa fiecarui element dintr-un tablou.");
 int g[]={1,2,3,4,1,2,1,2,2,3,40}, frec[100];
    int m1=sizeof g/sizeof g[1], j, r;
    printf("Marimea tabloului este :%d ",m1);
     printf("Elementele tabloului sunt: ");
    for(i=0; i<m1; i++)
    {
    printf("\ng[%d]=%d",i,g[i]);
    frec[i] = -1;
    }
      for(i=0;i<m1;i++)
    {
    r = 1;
     for(j=i+1;j<m1;j++)
    {
    if(g[i]==g[j])
        {
        r++;
        frec[j] = 0;
        }
    }
    if(frec[i])
     {
    frec[i]=r;
     }
    }
    printf("\nFrecventa elementelor din tablou este : \n");
    for(i=0; i<m1; i++)
    {
    if(frec[i])
        {
    printf("%d este de %d ori \n", g[i], frec[i]);
        }
    }

    printf("\n\nProblema nr.12:\nScrieti un program C pentru a imprima toate elementele unice din tablou.");
    printf("\nElementele unice sunt: ");
    for(i=0; i<m1; i++)
    {
    if(frec[i]==1)
    {
    printf("%d ", g[i]);
    }
    }

    printf("\n\nProblema 13:\nScrieti un program C pentru a numara numarul total de elemente duplicate dintr-un tablou.");
    int G1[]={1,2,3,3,2,1,4};
    int m2=sizeof G1/sizeof G1[0];
    int x;
    printf("\nNumarul elementelor din tablou G1 este %d:",m2);
    printf("\nAfisam  %d elemente tabloului :\n",m2);
    for(x=0; x<m2; x++)
    {
        printf("\nG1[%d]=%d",x,G1[x]);
    }
 duplicat(G1,m2);

 printf("\n\nProblema 14:\nScrieti un program C pentru a sterge toate elementele duplicate dintr-un tablou.");
  int a1[]={1,2,2,3,3,3,4,4,4,4};
  int n=sizeof a1/sizeof a1[0];
  printf("\nNr de elemente a tabloului este %d:",n);
  printf("\nCele %d elemente a tabloului sunt:",n);
  for (i = 0; i < n; i++)
  {
    printf("\na1[%d]=%d",i,a1[i]);
  }
  printf("\nTabloul inainte de stergerea elementelor duplicate: ");
  for (i = 0; i < n; i++)
    printf("%d ", a1[i]);
  n = sterg_duplicat(a1, n);
  printf("\nTabloul dupa stergerea elementelor duplicate: ");
  for (i = 0; i < n; i++)
    printf("%d ", a1[i]);

 printf("\n\nProblema 15:\nScrieti un program C pentru a imbina doua tablouri in al treilea tablou.");
   int b1[]={1,2,3},b2[]={4,5,6};
    int x11=sizeof b1/sizeof b1[0],x22=sizeof b2/sizeof b2[0],x33;
    x33=x11+x22;
    int b3[x33];
    printf("\nAfisam cele %d elemente ale tabloului nr1:",x11);
   for(int i=0;i<x11;i++)
    {
       printf("\nb1[%d]=%d",i,b1[i]);
       b3[i]=b1[i];
    }
    int k=x11;
    printf("\nAfisam cele %d elemente ale tabloului nr.2:\n",x22);
    for(int i=0;i<x22;i++)
    {
        printf("\nb2[%d]=%d",i,b2[i]);
        b3[k]=b2[i];
        k++;
    }
    printf("\nNoul tablou obtinut prin imbinarea celorlalte tablouri este:");
    for(int i=0;i<x33;i++)
    printf("\nb3[%d]=%d ",i,b3[i]);

    printf("\n\nProblema 16:\nScrieti un program C pentru a inversa ordinea elementelor unui tablou.");
    printf("\nOrdinea inversa a elementelor tabloului b3[] este :");
    for(int i=0;i<x33;i++)
    {
        int aux;
        for(int j=i+1; j<x33 ;j++)
        {
            if(b3[i]<b3[j])
            {
                aux=b3[i];
                b3[i]=b3[j];
                b3[j]=aux;
            }
        }
    }

    for(int i=0 ; i<x33 ; i++)
    {
        printf("\nb3[%d]=%d ",i,b3[i]);
    }
  printf("\n\nProblema 17:\nScrieti un program C pentru a pune elemente pare si impare ale unui tablou in doua tablouri separate.");
    int Par[100], Impar[100];
    int k1=0, j1=0;

    printf("\nTabloul initial:");
    for (int i = 0; i<x33; i++)
        printf("\nb3[]=%d",b3[i]);

    for (int i=0; i<x33; i++)
    {
        if (b3[i]%2 == 0)
        {
            Par[j1] = b3[i];
            j1++;
        }
        else
        {
          Impar[k1] = b3[i];
          k1++;
        }
    }

    printf("\n\nElementele pare din tabloul b3[] sunt puse in tabloul Par[] j1=%d",j1);
    for (int i = 0; i<j1; i++)
    {
        printf("\nPar[]=%d",Par[i]);
    }
    printf("\nElementele impare din tabloul b3[] sunt puse in tabloul Impar[] k1=%d",k1);
    for (int i = 0; i<k1; i++)
    {
        printf("\nImpar[]=%d",Impar[i]);
    }

    printf("\n\nProblema 18:\nScrieti un program C pentru a cauta un element din tablou si afisa pozitiile gasite.");
    int element;//Am folosit tabloul b3[] folosit la problema 16
    printf("\nIntrodu elementul ce trebuie sal gasim:");
   scanf("\n%d",&element);

   for(i=0; i<x33; i++)
   {
     if(b3[i]==element)
     {
       printf("\nElementul %d se afla pe pozitia %d", element, i+1);
     }
   }
   printf("\n\nProblema 19:\nScrieti un program C pentru a sorta elementele tabloului in ordine crescatoare sau descrescatoare.");
   // Ordine crescatoare
   int cresc[]={5,2,6,78,1,0,324,1000,-1,-34,32,-100};
   int nr_elem=sizeof cresc/ sizeof cresc[0],aux1;
   printf("\nElementele tabloului nostru sunt:");
   for(i=0;i<nr_elem;i++)
   {
       printf("\ncresc[%d]=%d",i,cresc[i]);
   }
   for (i = 0; i <nr_elem; i++) {
        for ( j = i+1; j < nr_elem; j++) {
           if(cresc[i] > cresc[j]) {
               aux1= cresc[i];
               cresc[i] = cresc[j];
               cresc[j] = aux1;
           }
        }
    }
    printf("\nElementele tabloului dupa sortarea in ordine crescatoare sunt:");
    for (int i = 0; i < nr_elem; i++) {
        printf("\ncresc[%d]=%d",i, cresc[i]);
    }
    //ordine descrescatoare
    int aux2;
    for (i = 0; i <nr_elem; i++) {
        for ( j = i+1; j < nr_elem; j++) {
           if(cresc[i] < cresc[j])
            {
               aux2=cresc[i];
               cresc[i] = cresc[j];
               cresc[j] = aux2;
           }
        }
    }
    printf("\nElementele tabloului dupa sortarea in ordine descrescatoare sunt:");
    for (i=0;i<nr_elem;i++)
    {
        printf("\ncresc[%d]=%d",i, cresc[i]);
    }
    printf("\n\nProblema 20:\nScrieti un program C pentru a sorta separat elementele pare si impare ale tabloului.");
    int T[]={0,1,2,3,4,5,6,7,8,9};
    int t1=sizeof T/sizeof T[0],schimb;
    for (i=0;i<t1;i++)
    {
        printf("\nT[%d]=%d",i,T[i]);
    }
    printf("\n");
    for(i =0;i<t1;i++)
    {
       for(j=i+1;j<t1;j++)
       {

           if((T[i] % 2) != 0 && (T[j] % 2)==0)
            {
             schimb = T[j];
             T[j]=T[i];
             T[i] =schimb;
            }
       }
    }
    for(i=0;i<t1;i++)
    {
    printf("%d ", T[i]);
    }


    //Tablouri bidimensionale
    printf("\n\nTablouri bidimensionale");
    printf("\n\nProblema 1:\nScrieti un program C pentru a aduna doua matrice.");
    int M[2][2]=
    {
        {1,1},
        {2,2}};
    int M1[2][2]=
    {
     {2,2},
     {3,3}
    };
    int l,v;
    printf("\nMatricea M:\n");
    for (l=0;l<2;l++)
    {
        for (v=0;v<2;v++)
        {
            printf("%d\t",M[l][v]);
        }
        printf("\n");
    }
    printf("\nMatricea M1:\n");
    for (l=0;l<2;l++)
    {
        for (v=0;v<2;v++)
        {
            printf("%d\t",M1[l][v]);
        }
        printf("\n");
    }
    printf("\nSuma matricelor M+M1 este matricea:\n");
     for (l=0;l<2;l++)
    {
        for (v=0;v<2;v++)
        {
            printf("%d\t",M[l][v]+M1[l][v]);
        }
        printf("\n");
    }
    printf("\n\nProblema 2:\nScrieti un program C pentru a scadea doua matrice.");
    printf("\nDiferenta matricelor M-M1 este matricea:\n");
    for (l=0;l<2;l++)
    {
        for (v=0;v<2;v++)
        {
            printf("%d\t",M[l][v]-M1[l][v]);
        }
        printf("\n");
    }
    printf("\n\nProblema 3:\nScrieti un program C pentru a efectua multiplicarea matricei cu un scalar.");
    printf("\nObtinem matricea M:\n");
    int scalar=3;
       for (l=0;l<2;l++)
    {
        for (v=0;v<2;v++)
        {
            printf("%d\t",M[l][v]*scalar);//am multiplicat matricea M cu scalarul 3
        }
        printf("\n");
    }
    printf("\n\nProblema 4:\nScrieti un program C pentru a multiplica doua matrice.");
    int y,M2[2][2];
    printf("\nMultiplicam matricea M cu M1 si obtinem matricea M2:\n");
    for(l=0;l<2;l++)
      {
        for(v=0;v<2;v++)
            {
                M2[l][v]=0;
               for(y=0;y<2;y++)
                    {
                     M2[l][v]+=M[l][y]*M1[y][v];
                    }
            }
            }
            for(l=0;l<2;l++)
                {
                  for(v=0;v<2;v++)
                     {
                       printf("%d\t",M2[l][v]);
                     }
                     printf("\n");
                }
  printf("\n\nProblema 5:Scrieti un program C pentru a verifica daca doua matrice sunt egale sau nu.");
  int Matrici_egale=1;
  for(l=0;l<2;l++)
  	{
   		for(v=0;v<2;v++)
    	{
      		if(M[2][2]!=M2[2][2]) /* Matricea M are elementele 3 3  si matricea M2 are elementele 5 5
			                                                   6 6                               10 10*/
			  	{
                Matrici_egale=0;
			  	break;
			}
   	 	}
  	}
 	if(Matrici_egale==1)
 	{
 		printf("\nMatricea M este egala cu matricea M2");
	}
	else
	{
		printf("\nMatricea M nu este egala cu matricea M2");
	}

	printf("\n\nProblema 6:\nScrieti un program C pentru a gasi suma elementelor diagonale principale ale unei matrice.");
	int suma_diag_principala=0;//Voi calcula suma elementelor matricei M2
	 for(l=0; l<2; l++)
    {
        suma_diag_principala=suma_diag_principala+M2[l][l];
    }
    printf("\nSuma elementelor diagonalei principale a matricei M2 este=%d", suma_diag_principala);

    printf("\n\nProblema 7:\nScrieti un program C pentru a gasi suma elementelor diagonalei secundare ale unei matrice.");
    int suma_diag_secundara=0;//Variabila care o voi folosi sa calculez suma elementelor diagonalei secundare a matricii//
    int M3[3][3]={{1,2,3},{4,5,6},{10,8,9}};
    int v1=3,l1=3;//Varibila v1 egala cu nr de coloane a matricii M3 iar l1 cu nr de linii//
    for(l1=0;l1<v1;l1++)
    {
      suma_diag_secundara=suma_diag_secundara+M3[l1][v1-1-l1];
    }
    printf("\nSuma elementelor diagonalei secundare a matricii M2 sunt =%d",suma_diag_secundara);

    printf("\n\nProblema 8:\nScrieti un program C pentru a gasi suma fiecarui rand si coloana a unei matrice.\n");
         int x2,y2;  //Voi calcula suma fiecarui rind si coloana a matricii M4//
    int suma_rind,suma_coloana;
    int M4[2][2]=
    {
         {2,3},
         {3,2}
    };
    for(x2=0;x2<2;x2++)
    {

       for(y2=0;y2<2;y2++)
        {
         suma_rind=suma_rind+M4[x2][y2];
        }
        printf("\nSuma elementelor matrici M4 din rindul %d este %d\n",x2,suma_rind);
        suma_rind=0;
    }
    for( y2=0;y2<2;y2++)
    {
        suma_coloana=0;
        for(x2=0;x2<2;x2++)
        {
            suma_coloana=suma_coloana+M4[y2][x2];
        }
        printf("\nSuma elementelor matrici M4 din coloana  %d este %d\n",y2,suma_coloana);
    }

    printf("\n\nProblema 9:\nScrieti un program C pentru a schimba diagonalele unei matrice.");
    int r1=3,c1=3,aux3;//r1=nr de linii c1=nr de coloane ale matricii patratice de ordinul 3 M5;//
    int M5[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(x2=0;x2<r1;x2++)
  		{
  			aux3 =M5[x2][x2];
  			M5[x2][x2] = M5[x2][r1 -x2- 1];
  			M5[x2][r1-x2-1] =aux3;
	   	}

 		printf("\nMatricea dupa schimbarea diagonalelor \n");
 		for(x2=0;x2<c1;x2++)
  		{
   			for(y2=0;y2<r1;y2++)
    		{
      			printf("%d\t ",M5[x2][y2]);
    		}
    		printf("\n");
  		}
     printf("\n\nProblema 10:\nScrieti un program C pentru a gasi matricea triunghiulara superioara.");
     for(x2=0;x2<r1;x2++) // Am folosit matricea M5 dupa schimabrea diagonalelor ei//
  	{
        printf("\n");
   		for(y2=0;y2<c1;y2++)
    	{
    		if(y2>=x2)
    		{
    			printf("%d\t ", M5[x2][y2]);
			}
			else
			{
				printf("0\t");
			}
   	 	}
  	}

  	printf("\n\nProblema 11:\nScrieti un program C pentru a gasi matricea triunghiulara inferioara.");
  	 for(x2=0;x2<r1;x2++) // Am folosit matricea M5 dupa schimabrea diagonalelor ei//
  	{
        printf("\n");
   		for(y2=0;y2<c1;y2++)
    	{
    		if(y2<=x2)
    		{
    			printf("%d\t ", M5[x2][y2]);
			}
			else
			{
				printf("0\t");
			}
   	 	}
  	}

  	printf("\n\nProblema 12:\nScrieti un program C pentru a gasi suma matricei triunghiulare superioare.");
  	int suma_matrice_super=0;
     for(x2=0;x2<r1;x2++)
    {
        for(y2=0;y2<c1;y2++)
        {
            if(y2>x2)
            {
                suma_matrice_super+=M5[x2][y2];
            }
        }
    }
   printf("\nSuma matricei triunghiulare superioare este=%d",suma_matrice_super);

    printf("\n\nProblema 13:\nScrieti un program C pentru a gasi suma matricei triunghiulare inferioare.\n");
    	int suma_matrice_infer=0;
    	int M6[3][3]={{3,0,0},{4,2,0},{5,3,1}};
    	printf("Matricea M6 este :\n");
    	for (x2=0;x2<3;x2++)
        {
            for(y2=0;y2<3;y2++)
            {
                printf("%d\t",M6[x2][y2]);
            }
            printf("\n");
        }
     for(x2=0;x2<3;x2++)
    {
        for(y2=0;y2<3;y2++)
        {
            if(y2<x2)
            {
                suma_matrice_infer+=M6[x2][y2];
            }
        }
    }
    printf("\nSuma matricei triunghiulare inferioare este=%d",suma_matrice_infer);

    printf("\n\nProblema 14:\nScrieti un program C pentru a gasi transpunerea unei matrice.");
    int transpusa[4][4];
     for (x2=0;x2<3;x2++)
      for (y2=0;y2<3;y2++)
         transpusa[y2][x2] = M6[x2][y2];
    printf("\nTranspusa matricei M6 este:\n");
    for (x2=0; x2<3; x2++)
        {
      for (y2=0;y2<3;y2++)
      {
       printf("%d\t", transpusa[x2][y2]);
      }
      printf("\n");
     }
    printf("\n\nProblema 15:\nScrieti un program C pentru a gasi determinantul unei matrice.");
    int determinant;//Voi afla determinantul Matricei M6//
    determinant = M6[0][0]*((M6[1][1]*M6[2][2]) - (M6[2][1]*M6[1][2])) -M6[0][1]*(M6[1][0]*M6[2][2] - M6[2][0]*M6[1][2]) + M6[0][2]*(M6[1][0]*M6[2][1] - M6[2][0]*M6[1][1]);
    printf("\nDeterminantul matricei M6 este :%d",determinant);

    printf("\n\nProblema 16:\nScrieti un program C pentru a verifica daca matricea este unitara.");
    int M7[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    printf("\nMatricea M7 este :\n");
    int adevar=1;
    	for (x2=0;x2<3;x2++)
        {
            for(y2=0;y2<3;y2++)
            {
                printf("%d\t",M7[x2][y2]);
            }
            printf("\n");
        }
        for(x2=0;x2<3;x2++)
           {
             for(y2=0;y2<3;y2++)
              {
                if(x2==y2)
                if(M7[x2][y2]!=1)
               {
                adevar=0 ;
                break;
               }
         if(x2!=y2)
         if(M7[x2][y2]!=0)
            {
         adevar=0 ;
        break;
            }
              }
          }
   if(adevar==1) printf("\nMatricea M7 este unitara");
  else printf("\nMatricea M7 nu este unitara");

    printf("\n\nProblema 17:\nScrieti un program C pentru a verifica daca matricea este rarefiata ");
    int zerouri=0;
    float procent_zerouri;
    printf("\nMatricea M7:\n");
    for(x2=0;x2<3;x2++){
        for(y2=0;y2<3;y2++){
            printf("%d\t",M7[x2][y2]);
        }
         printf("\n");
    }
    for(x2=0;x2<3;x2++)
    {
      for(y2=0;y2<3;y2++)
        if(M7[x2][y2]==0)
            zerouri++;
    }
    procent_zerouri=((float)zerouri/9)*100;

    printf("\nNumar total de 0 in matrice:%d",zerouri);
    printf("\nProcentajul de 0 in matrice:%f", procent_zerouri);

    if(procent_zerouri>=70) printf("\nMatricea este rarefiata");
    else printf("\nMatricea nu este rarefiata");

    printf("\n\nProblema 18:\nScrieti un program C pentru a verifica daca matricea este simetrica.");
    int M8[3][3];//Transpusa matricii// /*Matricea este simetrica daca ea este egala cu transpusa ei */
    int r2=3,c2=3;
    printf("\nMatricea M7 este :\n");
    for(x2=0;x2<r2;x2++){
        for(y2=0;y2<c2;y2++){
            printf("%d\t",M7[x2][y2]);
        }
         printf("\n");
    }
     for(x2=0;x2<r2;x2++)
    for(y2=0;y2<c2;y2++)
      M8[y2][x2]=M7[x2][y2];

  if(r2==c2) //Daca nr de linii si de coloane nu este egal matricea nu poate fi simetrica//
  {
    for(x2=0;x2<r2;x2++)
    {
      for(y2=0;y2<c2;y2++)
      {
        if (M7[x2][y2]!=M8[x2][y2])
          break;
      }
      if (y2!=r2)
        break;
    }
    if (x2==r2)
      printf("Matricea M7 este simetrica\n");
    else
      printf("Matricea M7 nu este simetrica\n");
  }
  else
    printf("Matricea M7 nu este simetrica\n");

     printf("\n\nProblema 19:\nScrieti un program C pentru a roti la stinga o matrice.");
      int M9[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        printf("\nMatricea M9:\n");
        for(x2=0;x2<3;x2++)
            {
        for(y2=0;y2<3;y2++)
        {
            printf("%d\t",M9[x2][y2]);
        }
         printf("\n");
    }
    printf("Rotim Matricea M9 spre stinga\n");
    for(x2=2;x2>=0;x2--)
    {
        for(y2=0;y2<=2;y2++)
        {
            printf("%d\t",M9[y2][x2]);
        }
        printf("\n");
    }
      printf("\n\nProblema 20:\nScrieti un program C pentru a roti la dreapta o matrice.");
      printf("\nRotim matricea M9 spre dreapta\n");
       for(x2=0;x2<3;x2++)
    {
        for(y2=2;y2>=0;y2--)
        {
            printf("%d\t",M9[y2][x2]);
        }
        printf("\n");
    }
      printf("\n\nProblema 21:\nScrieti un program C pentru a roti in sus o matrice.");
      printf("\nMatricea M9 dupa rotirea in sus :\n");
      for(x2=0;x2<3;x2++)
     {
        for(y2=0;y2<3;y2++)
          {
            printf("%d\t",M9[2-x2][2-y2]);
          }
          printf("\n");
    }
    printf("\n\nProblema 22:\nScrieti un program C pentru a roti in jos o matrice");
    printf("\nMatricea M9 dupa rotirea in jos :\n");
      for(x2=2;x2>=0;x2--)
     {
        for(y2=0;y2<=2;y2++)
          {
            printf("%d\t",M9[2-x2][2-y2]);
          }
          printf("\n");
     }
    return 0;
}

