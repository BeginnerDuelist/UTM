#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n=6,d;
    double r=1,p,x,arie,result ;
    const float
     pi=3.141592653589793;
    printf("Ex.14 pag 14\n");
    printf("a)");
    p=n*2*r*sin(pi/n);
    printf("\nPerimetrul este %.2lf",p);
    arie=n*pow(r,2)*sin(pi/n)*cos(pi/n);
    printf("\nAria poligonului este %lf",arie);
    printf("\nb)");
    x=(180*(n-2))/n;
    printf("\nMasura unui unghi este %.2lf",x);
    d=n*(n-3)/2;printf("\nNumarul de diagonale este %d",d);


return 0;
}
