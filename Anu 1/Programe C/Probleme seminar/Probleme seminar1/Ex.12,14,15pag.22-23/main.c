#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    printf("Ex.12 pag.22");
    int a=3,b=4,c=5;
    double d,e,f;
    d=pow(a,2);
    e=pow(b,2);
    f=pow(c,2);
    if (d==e+f) printf("\nNumerele %lf %lf %lf sunt numere pitagorice",d,e,f);
    else if(e==d+f) printf("\nNumerel %lf %lf %lf sunt numere pitagorice",e,d,f);
    else if(f==d+e) printf("\nNumerel %lf %lf %lf sunt numere pitagorice",f,d,e);
    else printf("\nNumerel %lf %lf %lf nu sunt numere pitagorice",e,d,f);
    printf("\nEx.14 pag.23");
    printf("\na)");
    double g=2,h=-2,x;
    printf("Ecuatia de gradul I are forma %lfx+%lf=0",g,h);
    x=-h/g;
    printf("\nSolutia ecuatie de gradul I este %lf",x);
    printf("\nb)");
    printf("Ecuatia de gradul 2 are forma a1x*x+b1+c1");

     double a1=1,b1=-3,c1=2,delta,x1,x2,s;

	delta=pow(b1,2)-4*a1*c1;
		printf("Ecuatie de gradul 2.\nDelta: b1^2-4*a1*c1:= %lf\n",delta);
		if(delta>0)
			{
				x1=(-b1-sqrt(delta))/(2*a1);
				x2=(-b1+sqrt(delta))/(2*a1);
				printf("Delta > 0. Avem 2 solutii reale: x1= %lf si x2= %lf.",x1,x2);}
		else
			if(delta==0)
			{
			s=(-b1/(2*a1));
				printf("Delta = 0. Avem o singura radacina: s= %lf",s);}
		 	else
				printf("Delta < 0. Ecuatia are nu are radacini reale");
    printf("\nEx.15 pag.23");
    printf("\na)");
    double g1=2,h1=-2,s1;
    printf("Inecuatia de gradul I are forma %lfx+%lf<0",g1,h1);
    s1=-h1/g1;
    printf("\nSolutia inecuatie de gradul I este s1<%lf",s1);
    printf("\nb)");
    printf("Inecuatia de gradul I are forma %lfx+%lf>=0",g1,h1);
    s=-h1/g1;
    printf("\nSolutia inecuatie de gradul I este s1>=%lf",s1);
    printf("\nc)");

printf("\nInecuatie de gradul 2 are forma %lf*x*x+%lf*x+%lf<=0");
printf("\nDelta: b1^2-4*a1*c1:= %lf\n",delta);
		if(delta>0)
			{
				x1=(-b1-sqrt(delta))/(2*a1);
				x2=(-b1+sqrt(delta))/(2*a1);
				printf("Delta > 0. Avem 2 solutii reale: x1= %lf si x2= %lf.",x1,x2);
				printf("\nIntervalul solutiilor inecuatiei este [%lf;%lf]",x1,x2);
				}
		else
			if(delta==0)
			{
			s=(-b1/(2*a1));
				printf("Delta = 0. Inecuatia are o singura solutie: s= %lf",s);}
		 	else
				printf("Delta < 0. Ecuatia are nu are radacini reale deci nu putem rezolva inecuatia");
			printf("\nd)");
			printf("\nInecuatie de gradul 2 are forma %lf*x*x+%lf*x+%lf>0");
printf("\nDelta: b1^2-4*a1*c1:= %lf\n",delta);
		if(delta>0)
			{
				x1=(-b1-sqrt(delta))/(2*a1);
				x2=(-b1+sqrt(delta))/(2*a1);
				printf("Delta > 0. Avem 2 solutii reale: x1= %lf si x2= %lf.",x1,x2);
				printf("\nIntervalul solutiilor inecuatiei este x<%lf si x>%lf",x1,x2);
				}
		else
			if(delta==0)
			{
			s=(-b1/(2*a1));
				printf("Delta = 0. Inecuatia are o singura solutie: s= %lf",s);}
		 	else
				printf("Delta < 0. Ecuatia are nu are radacini reale deci nu putem rezolva inecuatia");


    return 0;
}
