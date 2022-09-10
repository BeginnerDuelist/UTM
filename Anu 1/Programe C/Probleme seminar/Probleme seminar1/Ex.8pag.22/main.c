#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    double x=1.5707963268,f,f1; // x=1,5707963268 este masura in radiani care este egala cu 90 de grade//
    const double pi=3.141592653589793;

    printf("a)");

    if (x<-5) printf("\nLui f(x)=pow(x,2)=%lf",pow(x,2));
    else if ((x>=-5) && (x<2)) printf("\nLui f(x)=x+1=%lf",x+1);
    else if (x>=2) printf("\nLui f(x)=pow(x,3)=%lf",pow(x,3));

    printf("\nb)");

    f=cos(x);f1=sin(x);
    if (x<0) printf("\n f(x)=cos(x)=%lf",f);
    else if (x==0) printf("\n f(x)=4");
    else printf("\nf(x)=sin(x)=%lf",f1);

    printf("\nc)");

    if (x<1) printf("\n f(x)=3*x+abs(x-1)=%lf",3*x+abs(x-1));
    else if ((x>=1) && (x<6)) printf("\n f(x)=2");
    else if(x>=6) printf("\n f(x)=log3(x)=%lf",log(x)/log(3));

    printf("\nd)");

    if (x<=0) printf("\n f(x)=1");
    else if ((x>0) && (x<=2)) printf("\n f(x)=x*x+x=%lf",x*x+x);
    else if (x>2) printf("\n f(x)=sin(pi*x)=%lf",sin(pi*x));
return 0;
}
