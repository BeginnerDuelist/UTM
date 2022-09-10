#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("Ex.16 pag.23");
    int x=2,y=-2;
    if ((x>0) &&(y>0)) printf("\nPunctu P cu coordonatele (%d,%d) apartine cadranului I",x,y);
    else  if ((x<0) &&(y>0)) printf("\nPunctu P cu coordonatele (%d,%d) apartine cadranului II",x,y);
    else  if ((x<0) &&(y<0)) printf("\nPunctu P cu coordonatele (%d,%d) apartine cadranului III",x,y);
    else printf("\nPunctu P cu coordonatele (%d,%d) apartine cadranului IV",x,y);
printf("\nEx.18 pag.23");
    int n=18;
    printf("\na)");
    if (n%2==0) printf(" Numarul %d este par",n);
    else printf("Numarul %d este impar",n);
    printf("\nb)");
    if ((n%2==0)&&(n%3==0)) printf("Numarul este divizibil cu 2 si 3");
    else printf("Numarul nu e divizibil cu 2 si 3");
    printf("\nc)");
    if ((n%4==0)||(n%3==0)) printf("Numarul este divizibil cu 3 sau cu 4");
    else printf("Numarul nu e divizibil cu 3 sau 4");
    printf("\nd)");
    if ((n%3==0)&&(n%4!=0)) printf("Numarul este divizibil cu 3 dar nu e divizibil cu 4");
    else printf("Numarul nu e divizibil cu 3 sau e divizibil cu 4");
    printf("\ne)");
    if ((n%3!=0)&&(n%4!=0)) printf("Numarul  nu este divizibil cu 3 si 4");
    else printf("Numarul este divizibil cu 3 sau cu 4\n sau Numarul este divizibil cu 3 dar nu e divizibil cu 4\n sau Numarul nu e divizibil cu 3 dar e divizibil cu 4");
printf("\nEx.20 pag.24");
int a=2,b=0,c=4;
printf("\na)");
if ((a<b) && (b<c)) printf("Ordinea crescatoare este %d,%d,%d",a,b,c);
else if ((a<b) && (c<b)) printf("Ordinea crescatoare este %d,%d,%d",a,c,b);
else if ((a>b) && (b<c)) printf("Ordinea crescatoare este %d,%d,%d",b,a,c);
else if ((a>b) && (b>c)) printf("Ordinea crescatoare este %d,%d,%d",c,b,a);
else if ((a>c) && (a<b)) printf("Ordinea crescatoare este %d,%d,%d",c,a,b);
else if ((a>c) && (b<c)) printf("Ordinea crescatoare este %d,%d,%d",b,c,a);
printf("\nb)");
if ((a<b) && (b<c)) printf("Ordinea decrescatoare este %d,%d,%d",c,b,a);
else if ((a<b) && (a>c)) printf("Ordinea decrescatoare este %d,%d,%d",b,a,c);
else if ((a>b) && (a<c)) printf("Ordinea decrescatoare este %d,%d,%d",c,a,b);
else if ((a>b) && (b>c)) printf("Ordinea decrescatoare este %d,%d,%d",a,b,c);
else if ((a<c) && (c<b)) printf("Ordinea decrescatoare este %d,%d,%d",b,c,a);
else if ((a>c) && (b<c)) printf("Ordinea decrescatoare este %d,%d,%d",a,c,b);

return 0;
}
