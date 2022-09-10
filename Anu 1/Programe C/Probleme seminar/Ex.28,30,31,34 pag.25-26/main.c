#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("Ex.28 pag.25");
   double nota_medie=10;
   if (nota_medie<5) printf("\nBursa este egala cu 0 lei");
   else if((nota_medie>=5)&&(nota_medie<7)) printf("\nBursa este egala cu 100 lei");
   else if((nota_medie>=7)&&(nota_medie<8)) printf("\nBursa este egala cu B=nota_medie*20lei=%lf",nota_medie*20);
   else if((nota_medie>=8)&&(nota_medie<10)) printf("\nBursa este egala cu B=nota_medie*25lei=%lf",nota_medie*25);
   else if (nota_medie==10) printf("\nBursa este egala cu 300lei");
   printf("\nEx.30 pag.25");
   int zile=31;
 if ((zile==28)||(zile==29)) printf("\nLuna cu %d zile este Februarie",zile);
 else if (zile==30) printf("\nLunile cu %d zile sunt Aprilie Iunie Septembrie Noiembrie",zile);
 else if (zile==31) printf("\nLunile cu %d zile sunt Ianuarie Martie Mai Iulie August Octombrie Decembrie",zile);
 else printf ("\nNu exista luni cu nr de zile egal cu %d",zile);
 printf("\nEx.31 pag.26");
 double a=2,b=1,c=4;
 if ((a>b) &&(b>c)) printf("\nNumarul %lf este situat intre %lf si %lf pe axa numerica",c,b,a);
 else  if ((a>c) &&(b<c)) printf("\nNumarul %lf este situat intre %lf si %lf pe axa numerica",b,c,a);
 else  if ((a<b) &&(a>c)) printf("\nNumarul %lf este situat intre %lf si %lf pe axa numerica",c,a,b);
 else  if ((c>a) &&(b>c)) printf("\nNumarul %lf este situat intre %lf si %lf pe axa numerica",a,c,b);
 else  if ((a<b) &&(b<c)) printf("\nNumarul %lf este situat intre %lf si %lf pe axa numerica",a,b,c);
 else  if ((a<c) &&(a>b)) printf("\nNumarul %lf este situat intre %lf si %lf pe axa numerica",b,a,c);
 printf("\nEx.34 pag.26");
 double d=3,e=2,f=3,g=2;
 if ((d==e)&&(f==g)) printf("\nNumerele %lf %lf %lf %lf sunt laturile unui paralelogram",d,e,f,g);
 else if ((d==f)&&(e==g)) printf("\nNumerele %lf %lf %lf %lf sunt laturile unui paralelogram",d,e,f,g);
 else if ((d==g)&&(e==f)) printf("\nNumerele %lf %lf %lf %lf sunt laturile unui paralelogram",d,e,f,g);
 else printf("\nNumerele %lf %lf %lf %lf  nu sunt laturile unui paralelogram",d,e,f,g);

    return 0;
}
