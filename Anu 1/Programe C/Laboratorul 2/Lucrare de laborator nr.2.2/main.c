#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Laboratorul nr.2 partea 3 din 3//
   printf("\nProblema nr.12 \nScrieti un program C pentru a gasi suma primei si ultimei cifre a unui numar. ");
   int o=4234567,o1,prima_cifra,ultima_cifra,sum;
o1=o;
ultima_cifra=o1%10;
while(o1>10){
    o1/=10;
   }
  prima_cifra = o1;
  sum= prima_cifra+ultima_cifra;
  printf("\nPrima cifra a nr %d este %d",o,prima_cifra);
printf("\nUltima cifra a nr %d este %d",o,ultima_cifra);
printf("\nSuma dintre prima si ultima cifra a nr %d est=%d",o,sum);

printf("\nProblema nr.14\nScrieti un program C pentru a calcula suma cifrelor unui numar. ");
int n=123,s=0,z=n;
	while(n!=0)
	{
    s=s+n%10;
    n=n/10;
	}
	printf("\nSuma cifrelor nr %d este: %d",z,s);

	printf("\nProblema nr.15\nScrieti un program C pentru a calcula produsul cifrelor unui numar. ");
int n1=4232,p=1,z1=n1;
	while(n1!=0)
	{
        p=p*(n1%10);
		n1=n1/10;
	}
	printf("\nProdusul cifrelor nr %d este: %d",z1,p);

printf("\nProblema nr.23\nScrieti un program C pentru a calcula factorialul unui numar. ");
int i,n2=5,facto=1;
for (i=1;i<=n2;i++)
{
    facto=facto*i;
}
   printf("\nFactorialul nr %d este %d",n2,facto);
printf("\nProblema nr.26\n Scrieti un program C pentru a verifica daca un numar este sau nu numar prim. ");
int numar=4,i1=2,nr;
for (i1=2;i1<=numar/2;i1++)
{
    if (numar%i1==0)
        nr++;
}
if (nr==0) printf("\nNumarul %d este prim",numar);
else printf("\nNumarul %d nu este prim",numar);


return 0;
}
