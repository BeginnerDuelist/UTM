#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nEx.30pag.16");
   int a=10,b=20,c=30,d=40,aux,aux1;
   aux=b ; aux1=c; c=b; b=a; a=d; d=aux1;
   printf("\n a=%d b=%d c=%d d=%d",a,b,c,d);
   printf("\nEx.5pag.21");
   double  a1=2,b1=4,max,min;

   printf("\na)");
   if(a1>b1) max=a1;
   else max=b1;
   printf("max(a1;b1)=%lf",max);

   printf("\nb)");
   if (a1>b1) min=b1;
   else min=a1;
   printf("min(a1;b1)=%lf",min);

   printf("\nc)");
   printf("max(a1;b1)+min(a1;b1)=%lf",max+min);

   printf("\nd)");
   if(a1-b1>b1) max=a1-b1;
   else max=b1;
   printf("max(a1-b1;b1)=%lf",max);

   printf("\ne)");
   if(a1+b1<a1) min=a1+b1;
   else min=a1;
   printf("min(a1+b1;a1=%lf",min);

   printf("\nf)");
   if(2*a1>3*b1) max=2*a1;
   else max=3*b1;
   printf("max(2*a1;3*b1)=%lf",max);


    return 0;
}
