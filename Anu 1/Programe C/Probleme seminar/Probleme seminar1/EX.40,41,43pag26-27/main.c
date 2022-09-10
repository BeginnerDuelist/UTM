#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=1, n=2, p=3;
    printf("\nEx.40 pag.26\n");

    if ((m - 1 == n) && (m + 1 == p) || (m + 1 == n) && (m - 1 == p))printf("\Nnumerele sunt consecutive");
    else if ((n - 1 == m) && (n + 1 == p) || (n + 1 == m) && (n - 1 == p)) printf("\nNumerele sunt consecutive");
    else if ((p - 1 == n) && (p + 1 == m) || (p + 1 == n) && (p - 1 == m)) printf("\nNumerele sunt consecutive");
    else printf("\nNumerele nu sunt consecutive");

    printf("\nEx.41 pag.26");
    int m1=4,n1=3,p1=5,q1=2;


    if ((m1 - 1 == n1) && (m1 + 1 == p1) && (m1 - 2== q1) || (m1 + 1 == n1) && (m1 - 1 == p1) && (m1 + 2 == q1))printf("\nNumerele sunt consecutive");
    else if ((n1 - 1 == m1) && (n1 + 1 == p1) &&(n1-2==q1) || (n1 + 1 == m1) && (n1 - 1 == p1)&& (n1 + 2 == q1)) printf("\nNumerele sunt consecutive");
    else if (((p1 - 1 == n1) && (p1 + 1 == m1)&&(p1-2==q1) || (p1 + 1 == n1) && (p1 - 1 == m1)&& (p1+ 2 == q1))) printf("\nNumerele sunt consecutive");
    else if  (((q1 - 1== m1) && (q1 + 1 == n1) && (q1 - 2 == p1)||(q1 + 1 == m1) && (q1 - 1 == n1) && (q1 + 2 == p1))) printf("\nNumerele  sunt consecutive");
    else printf("\nNumerele nu sunt consecutive");

    printf("\nEx.43 pag.27");
    printf("\na)");
    double a=2,b=1,c=3,d=1.5,aux;
    if(a>b) { aux=a;a=b;b=aux;}
    if(a>c){ aux=a;a=c;c=aux;}
    if (a>d){ aux=a;a=d;d=aux;}
    if(b>c) {aux=b;b=c;c=aux;}
    if (b>d){ aux=b;b=d;d=aux;}
    if (c>d){aux=c;c=d;d=aux;}
    printf("\n a=%lf,b=%lf,c=%lf,d=%lf",a,b,c,d);
    printf("\nb)");
    if(a<b) { aux=b;b=a;a=aux;}
    if(a<c){ aux=c;c=a;a=aux;}
    if (a<d){ aux=d;d=a;a=aux;}
    if(b<c) {aux=c;c=b;b=aux;}
    if (b<d){ aux=d;d=b;b=aux;}
    if (c<d){aux=d;d=c;c=aux;}
    printf("\n a=%lf,b=%lf,c=%lf,d=%lf",a,b,c,d);
return 0;
}
