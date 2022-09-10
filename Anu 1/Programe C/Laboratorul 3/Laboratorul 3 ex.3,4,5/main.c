
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<conio.h>
double max(double a,double b)
{
    double max=0;
    if (a>b) max=a;
  else max=b;
  return max;
}
double min(double c,double d)
{
    double min=0;
    if(c>d) min=d;
    else min=c;
    return min;
}
int par(x1)
{
    if (x1%2==0) printf("\nNumarul %d este par",x1);
    else printf("\nNumarul %d nu este par",x1);
   return x1;
}
int impar(x2)

{
    if (x2!=0) printf("\nNumarul %d este impar",x2);
else printf ("\nNumarul %d nu este impar",x2);
return x2;

}
int numar_perfect(int numar)
{
    int d,s=1;
    for(d=2;d<=numar/2;d++)
        if(numar%d==0)
            s=s+d;
    if(numar==s) printf("\nNumarul %d este numar perfect",numar);
    else printf("\nNumarul %d nu este numar perfect",numar);
}

int main()
{
    printf("Problema 3:\nScrieti un program C pentru a gasi maxim si minim intre doua numere folosind functii.");
    double a1,x=10,y=11;
    a1=max(x,y);
    printf("\nMaximul dintre numerele %lf si %lf  este %lf ",x,y,a1);

    double a2,b2=10,c2=5;
    a2=min(b2,c2);
    printf("\nMinimul dintre numerele %lf si %lf este %lf",b2,c2,a2);

    printf("\nProblema 4:\nScrieti un program C pentru a verifica daca un numar este par sau impar folosind functiile.");
    int n,n1=222;//numar par//
    n=par(n1);

    int m,m1=5;//numar impar//
    m=impar(m1);

    printf("\nProblema 5:\nScrieti un program C pentru a verifica daca un numar este prim, Armstrong sau un numar perfect folosind functii. ");
   int numar1=6,perfect;
   perfect=numar_perfect(numar1);

 return 0;
}

