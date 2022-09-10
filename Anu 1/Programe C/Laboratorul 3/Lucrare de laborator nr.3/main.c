#include <stdio.h>
#include <stdlib.h>
#include<math.h>
 int cub(int a)
{
    return pow(a,3);
        }
 double diametru (double r)
 {
    const double pi=3.14159262;

return 2*r;
 }
double circumferinta (double r)
 {
    const double pi=3.14159262;

return 2*r*pi;
 }
 double arie (double r)
 {
    const double pi=3.14159262;

return r*r*pi;
 }

int main()
 {
    printf("Probleme pentru utilizarea functiilor:\n");
    printf("Problema nr.1:\nScrieti un program C pentru a gasi cubul oricarui numar folosind functia.");
     int a1,c1;
     a1=cub(2);
    printf("\nCubul numarului este %d ",a1);
    printf("\nProblema nr.2:\nScrieti un program C pentru a gasi diametrul, circumferinta si aria cercului folosind functiile.");
    double d1,l1,a2;
    d1=diametru(4);
    l1=circumferinta(4);
    a2=arie(4);
    printf("\n\tDiametrul cercului = %f", d1);
	 printf("\n\tCircumferinta cercului = %f", l1);
	 printf("\n\tAria cercului = %f",a2);

    return 0;
}
