#include <stdio.h>
#include <stdlib.h>
int putere(int m,int m3)
{
 return m3*pow(m3,m-1);
    }
int afisare (int n)
{
    if(n == 0)
        return 0;
    else
    {
        printf("\n%d",n);
        return afisare(n-1);
    }
}
 int par(int x,int y)
{

    if(x > y) return 0;

    printf("\n%d, ", x);
    par(x+2, y);
}

int main()
{  // recursivitatea //
   printf("Problema nr.1\nScrieti un program C pentru a gasi puterea oricarui numar folosind recursivitatea");
   int m1=2,o,m2=5;
   o=putere(m1,m2);
   printf("\nPuterea lui %d la %d este %d",m2,m1,o);
   printf("\nProblema nr.2\nScrieti un program C pentru a imprima toate numerele naturale cuprinse intre 1 si n folosind recursivitatea");
    int n1=5,n2;
    n2=afisare(n1);
   printf("\nProblema nr.3\nScrieti un program C pentru a imprima toate numerele pare sau impare in intervalul dat folosind recursivitatea.  ");
   int x1=2,y1=10;
   par(x1,y1);

return 0;}
