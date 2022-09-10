#include <stdio.h>
#include <stdlib.h>

int main()
{
 printf("Ex.21 pag.24");
  printf("\nProblema nr.14:");
int a=55,b=45,c=81;
if (a+b+c==180) printf("\nAcest triunghi este valid");
else printf("\nAcest triunghi nu exista");
if ((a==b)&&(b==c)) printf("\nTriunghiul este echilateral");
else if(((a==b)&&(b!=c))||((a!=b)&&(b==c))) printf("\nTriunghiul este isoscel");
else if ((a!=b) &&(b!=c)&&(a+b+c==180))  printf("\nTriunghiul este scalen");
else printf("\nTriunghiul nu exista");
printf("\nEx.22 pag.24");
printf("Problema nr.11:");
 int n=8;
 switch (n)
 {
 case 1:printf("\nLuni");break;
 case 2:printf("\nMarti");break;
 case 3:printf("\nMiercuri");break;
 case 4:printf("\nJoi");break;
 case 5:printf("\nVineri");break;
 case 6:printf("\nSimbata");break;
 case 7:printf("\nDuminica");break;
 default:
    printf("\nNu exista saptamina cu %d zile",n);}
    printf("\nEx.23 pag.24");
     char litera='d';
     if((litera=='a')||(litera=='e')||(litera=='i')||(litera=='o')||(litera=='u')) printf("\nLitera ,,%c'' este o vocala ",litera);
     else printf("\nLitera ,,%c'' este o consoana",litera);
     printf("\nEx.24 pag.24");
     int P=1,n1=4,P1;
	for(int i=1; i<=n1; i++)
		P=P*i;
	printf("\nAfiseaza produsul P=%d",P);
	P1=P;
	P1=P1%10;
	printf("\nUltima cifra a produsului P este %d",P1);
return 0;
}

