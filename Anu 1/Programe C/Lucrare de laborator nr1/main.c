#include <stdio.h>
#include<math.h>

int main()
{
   int a,b,c;
   float a1,b1,c1;
   double x,med,produs;
   char m='D',n='A';
   long int putere;
   printf("\n Lucrare de laborator nr.1 la disciplina programarea calculatoarelor");
   printf("\nIntroducem 2 numere intregi:\n");
   scanf("%d %d",&a,&b);
   c=a+b;
   printf("Valoarea lui c este:%d",c);
   printf("\nIntroducem 2 numere reale:\n");
   scanf("%f %f",&a1,&b1);
   c1=a1/b1;
   printf("\nRezultatul impartirii este:%f\n",c1);
   if ((b>b1) || (a<=a1)) printf("\nCel putin una e adevarata\n");
   else printf("\nAmbele is false\n");
   if ((c>=c1)&&(c<c1)) printf("\nAmbele is adevarate ");
   else printf("\nCel putin una e falsa\n");
   putere=pow(a,c);
   printf("\nRezulatul a la puterea c este:%ld\n",putere);
   x=log(putere);
   printf("\nRezultatul ln(putere) este:%f\n",x);
   med=sqrt(putere);
   printf("\nRadical din putere este:%f\n",med);
   produs=((a*b*c)-(a1*b1*c1))/(putere*x*med);
   printf("\nProd var int - produsul var float totul / la prod var double este:%f\n",produs);
   printf("%c %c",m,n);
return 0;
}
