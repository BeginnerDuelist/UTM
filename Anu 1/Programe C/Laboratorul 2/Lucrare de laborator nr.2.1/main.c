#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Laboratorul nr.2 parte 2 din 3//
 printf("Problema nr.11:\nScrieti un program C pentru a introduce numarul saptaminii și a imprima ziua saptaminii. ");
 int zi=7;
 switch (zi)
 {
 case 1:printf("\nLuni");break;
 case 2:printf("\nMarti");break;
 case 3:printf("\nMiercuri");break;
 case 4:printf("\nJoi");break;
 case 5:printf("\nVineri");break;
 case 6:printf("\nSimbata");break;
 case 7:printf("\nDuminica");break;
 default:
    printf("\nNu exista saptamina cu %d zile",zi);
}
printf("\nProblema nr.12:\nScrieți un program C pentru a introduce numărul lunii și a imprima numărul de zile din luna respectivă. ");
int luna=1;
if (luna==1 || luna==3 || luna==5 || luna==7 || luna==8 || luna==10 || luna==12) printf("\nLuna %d are 31 zile",luna);
else if (luna==4 || luna==6 || luna==9 || luna==11) printf("\nLuna %d are 30 de zile",luna);
else if (luna==2) printf("\nLuna %d are 28 sau 29 de zile"); else printf("\nNu exista luna cu %d zile",luna);


printf("\nProblema nr.14\nScrieti un program C pentru a introduce unghiurile unui triunghi și verificati daca triunghiul este valid sau nu. :");
printf("\nIntroducem masura unghiurilor triunghiului nostru:");
double a=55,b=45,c=80;
if (a+b+c==180) printf("\nAcest triunghi este valid");
else printf("\nAcest triunghi nu exista");

printf("\nProblema nr.15:\nScrieti un program C pentru a introduce toate laturile unui triunghi și verificati daca triunghiul este valid sau nu. ");
double d=3,e=4,f=5;
if((d+e>f)&&(d+f>e)&&(e+f>d)) printf("\nTriunghiul cu laturile %lf %lf %lf este valid",d,e,f);
else printf("\nTriunghiul cu laturile %lf %lf %lf nu exista",d,e,f);

printf("\nProblema nr.16:\nScrieti un program C pentru a verifica daca triunghiul este echilateral, isoscel sau triunghi scalen. ");
double x=3,y=4,z=5;
if ((x==y)&&(y==z)) printf("\nTriunghiul este echilateral");
else if ((x==y)&&(y!=z)) printf("\nTriunghiul este isoscel");
    else printf("\nTriunghiul este scalen");

printf("\nProblema nr.17:\nScrieti un program C pentru a gasi toate radacinile unei ecuatii patratice.");
printf("\nEcuatia de gradul 2 are forma ax^2+bx+c");
double a1=1,b1=-2,c1=1,delta,x1,x2,s;
	delta=pow(b1,2)-4*a1*c1;
		printf("Ecuatie de gradul 2.\nDelta: b1^2-4*a1*c1:= %lf\n",delta);
		if(delta>0)
			{
				x1=(-b1+sqrt(delta))/(2*a1);
				x2=(-b1-sqrt(delta))/(2*a1);
				printf("Delta > 0. Avem 2 solutii reale: x1= %lf si x2= %lf.",x1,x2);}
		else
			if(delta==0)
			{
			s=(-b1/(2*a1));
				printf("Delta = 0. Avem o singura radacina: s= %lf",s);}
		 	else
				printf("Delta < 0. Ecuatia are nu are radacini reale");

printf("\nProbleme pentru instructii ciclice");

printf("\nProblema nr.1\nScrieti un program C pentru a imprima toate numerele naturale de la 1 la n. - folosind bucla while.");
unsigned int i=1,n=10;
while(i<=n) {
        printf("\n%u ",i);
        i++;}
printf("\nProblema nr.2:\nScrieti un program C pentru a imprima toate numerele naturale invers (de la n la 1). - folosind bucla while.");
unsigned int i1=9,n1=1;

while(i1>=n1) {
        printf("\n%u",i1);
        i1--;}
printf("\nProblema nr.3\nScrieti un program C pentru a imprima toate alfabetele de la a la z. - folosind bucla while");
char m='a',n0='z';
while (m<=n0) {printf("\n%c",m);
              m++;}
printf("\nProblema nr.4\nScrieti un program C pentru a imprima toate numerele pare ntre 1 și 100. - utilizind bucla while ");
printf("\nSi problema nr.5\nScrieti un program C pentru a imprima toate numerele impare intre 1 și 100. ");
 int i2=1,numar=100;
while (i2<=numar) {if (i2%2==0) printf("\nNumarul %d este par ",i2);
                  else printf("\nNumarul %d este impar",i2);
                  i2++;}
printf("\nProblema nr.6\nScrieti un program C pentru a gasi suma tuturor numerelor naturale cuprinse intre 1 și n. ");
 int i4=1,sum=0,w=10;
while (i4<=w) {
        sum=sum+i4;
        i4++;}
        printf("\n%d",sum);
printf("\nProblema nr.7:\nScrieti un program C pentru a gasi suma tuturor numerelor pare intre 1 și n.");
printf("\nSi problema nr.8:\nScrieti un program C pentru a gasi suma tuturor numerelor impare cuprinse intre 1 și n.");
int sum1=0,sum2=0,ij,nr=10;
for(ij=1;ij<=nr;ij++)
{
if (ij%2==0) sum1=sum1+ij;
else sum2=sum2+ij;
}
printf("\nSuma numerelor pare de la 1 la %d este:=%d",nr,sum1);
printf("\nSuma numerelor impare de la 1 la %d este:=%d",nr,sum2);
printf("\nProblema nr.9:\nScrieti un program C pentru a imprima tabelul de inmultire a oricarui numar. ");
int k=8,l,prod;
for(l=1;l<=10;l++)
{
    prod=k*l;
    printf("\n %dx%d=%d",k,l,prod);
    }
printf("\nProblema nr.10:\nScrieti un program C pentru a numara numarul de cifre dintr-un numar. ");
int n2=123456789,n3,n4=n2;
while (n2)
{n2=n2/10;
n3++;
}
printf("\nNr %d are %d cifre",n4,n3);
printf("\nProblema nr.11\nScrieai un program C pentru a gasi prima și ultima cifra a unui numar. ");
int o=4234567,o1,prima_cifra,ultima_cifra;
o1=o;
ultima_cifra=o1%10;
while(o1>10){
    o1/=10;
   }
  prima_cifra = o1;
  printf("\nPrima cifra este %d",prima_cifra);
printf("\nUltima cifra este %d",ultima_cifra);

return 0;
}
