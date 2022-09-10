#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=123481,n1=n,n2=n;
    float r,c;
    printf("Ex16 punctu a)");
    n=n%10;
    printf("\nUltima cifra e %d",n);
    printf("\nPunctu b)");
    n1=n1/10;
    n1=n1%10;
    printf("\nPenultima cifra e %d",n1);
    printf("\nPunctu c)");
    c=n2/9;
    printf("\nCitul impartire nr %d la 9 este %.2f",n2,c);
    r=n2%9;
    printf("\nRestul impartirii nr %d la 9 este %.2f",n2,r);
    printf("\nEx.17 pag.14");
    int m,d;
    double r1,c1;
    m=1234;
    d=10;
    r1=m%d;
    c1=m/d;
    printf("\nRestul imparitii lui %d la %d este %2.1f",m,d,r1);
    printf("\nCitul impartirii lui %d la %d este %.2f",m,d,c1);
    printf("\nEx.19 pag.15");
    double a,f;
    int e,x;
    a=123.499999999999;
    e=(int)a;
    printf("\nPartea intreaga a lui %.12lf este %d",a,e);
    f=a-e;
    printf("\nPartea zecimala a lui %.12lf este %.12f",a,f);
    x=round(a);
    printf("\nNumarul %.12lf rotunjit este %d",a,x);
    return 0;
}
