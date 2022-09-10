#include <stdio.h>


int main()
{
    float a,arie,volum;
    printf("Ex.11 pag.14\n");
    printf("Introduceti lungimea laturii ,,a'' a cubului:\n");
    scanf("%f",&a);
    arie=6*pow(a,2);
    volum=pow(a,3);
    printf("\nAria cubului este:=%f",arie);
    printf("\nVolumul cubului este:=%f",volum);


    return 0;
}
