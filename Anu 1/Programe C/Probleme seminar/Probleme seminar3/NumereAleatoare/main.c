#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   srand(time(NULL));///functia ce apartini biblioteci time.h care face ca numerele generate de rand sa fie diferite de fiecare data
   printf("Ex.1 pag.87");
   int n=8;
   printf("\nUn numar generat aleatoriu mai mic decit %d este %d ",n,rand()%n);//rand()%n genereaza nr aleatoare din intervalul 0..n-1

   printf("\n\nEx.2 pag.87");
   n=10; int m=100;
   printf("\nUn numar generat aleatoriu mai mare de %d si mai mic de %d este %d",n,m,n+rand()%m);

   printf("\n\nEx.3 pag.87");
   printf("\nUn numar real pozitiv generat aleatoriu mai mic decit 1 este %.2lf",0.01+rand()%1);

   printf("\n\nEx.5 pag.87");
    int divizori=0;
    while(divizori<3)
    {
        double numar=((float)rand()/(float)(RAND_MAX)) * -2;
        if(numar>(double)-2 && numar < 0)
        {
            printf("\n%lf ",numar);
            divizori++;
        }
    }

    printf("\n\nEx.6 pag.87");
    divizori=0;
    while(divizori<3)
    {
        double numar=((double)rand()/(double)(RAND_MAX)) * 2 + 0.4;

        if(numar>2.0 && numar < 4.0)
        {
            printf("\n%lf ",numar);
            divizori++;
        }
    }

   printf("\n\nEx.7 pag.87");
   divizori=0;
    while(divizori<5)
    {
        double numar=((double)rand()/(double)(RAND_MAX)) * 2 + 0.4;

        if(numar>-3.0 && numar < 2.0)
        {
            printf("\n%lf ",numar);
            divizori++;
        }
    }
   printf("\n\nEx.8 pag.87\n");
   printf(" %c ",'a'+rand()%26);

   printf("\n\nEx.9 pag.87\n");
   printf(" %c ",'A'+rand()%26);

   printf("\n\nEx.12 pag.87\n");
   int n1=12,a[n1];
   for(int i=0;i<n1;i++)
   {
       a[i]=rand()%100;
   }
   for(int i=0;i<n1;i++)
   {
       printf(" %d ",a[i]);
   }

///9 exercitii
    return 0;
}
