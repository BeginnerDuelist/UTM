#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=1,n=3,max;
printf("Ex.41 pag.16");
printf("\nNumarul cel mai mic:%d",(m+n-abs(m-n))/2);

printf("\nEx.42 pag.16");
printf("\nNumarul cel mai mare:%d",(m+n+abs(m-n))/2);

printf("\nEx.1 pag.21");
printf("\na)");
int x=1,y=4,a=0;
if (x>y) printf("\nLui a i se atribuie x+y=%d",a=x+y);
else printf("\nLui a i se atribuie x-y=%d",a=x-y);
printf("\nb)");
if(x<=y) printf("\nLui a i se atribuie pow(x,2)+pow(y,2)=%d",a=pow(x,2)+pow(y,2));
else  printf("\nLui a i se atribuie sqrt(x)+sqrt(y)=%d",a=sqrt(x)+sqrt(y));
printf("\nc)");
if(x+y<x*y) printf("\nLui a i se atribuie x+y=%d",a=x+y);
else printf("\nLui a i se atribuie x-y=%d",a=x-y);
printf("\nd)");
if (!(x+1>y))printf("\nLui a i se atribuie a=x=%d",a=x);
printf("\ne)");
if(a>=1 && a<=10) printf("a=1");
    else printf("a=2");

printf("\nEx.7 pag.22");
double b=12.2,c=12.3;
printf("\na)");
if (a>b) printf("\n%lf",b);
else printf("\n%lf",c);
printf("\nb)");
if (c-b>b-c) printf("\n%lf",c);
else printf("\n%lf",a-b);
printf("\nc)");
if(b==c) printf("\n%lf",b+c);
else printf("\n%lf",c-b);
printf("\nd)");
if(b!=c)printf("\n %lf si %lf ",b,c);
else printf("\n%lf",b);

return 0;
}
