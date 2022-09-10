#include <stdio.h>
int main()
{
    float a,perimetru,arie;
    printf("\nLungimea laturii patratului este:");
    scanf("%f",&a);
    perimetru=4*a;
    arie=pow(a,2);
    printf("\nPerimetrul patratului este:=%f",perimetru);
    printf("\nAria patratului este:=%f",arie);
    return 0;
    }
