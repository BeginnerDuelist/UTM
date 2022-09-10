#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("\nEx.26 pag.15");
  double a=5,s=1000,p=0.1,d;
  d=s*a*p;printf("\nDobinda anuala pe %.0lf ani va fi %lf",a,d);
printf("\nEx.27pag.15");
int b=1,c=4,aux;
aux=b;
b=c;
c=aux;
 printf("\nValorile lui b si c dupa schimbare sunt b=%d si c=%d",b,c);
 printf("\nEx.28pag.15");
 double e=4,f=1,g=3,aux1;
 aux1=e; e=f; f=g; g=aux1;
 printf("\nValorile lui e f g dupa schimabare sunt e=%lf f=%lf g=%lf",e,f,g);
 printf("\nEx.33pag.15");
 int sum=0,n=1234;
 while(n!=0)
	{
        sum=sum+n%10;
		n=n/10;
	}
	printf("\nSuma cifrelor este: %d",sum);



    return 0;
}
