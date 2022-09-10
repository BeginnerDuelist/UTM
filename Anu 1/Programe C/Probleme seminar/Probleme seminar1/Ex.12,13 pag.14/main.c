#include <stdio.h>


int main()
{
    printf("Ex.12 pag.14\n");
    float r,lungimea, aria;
    const double PI=3.14159;
    printf("Introduceti lungimea razei cercului:");
    scanf("%f",&r);
    lungimea=2*PI*r;
    printf("\nLungimea cercului este:=%f",lungimea);
    aria=PI*pow(r,2);
    printf("\nAria cercului este:=%f",aria);
    printf("\n\nEx.13 pag.14");
    float lungimea1,r1,arie1;
    printf("\nIntroduceti lungimea cercului:");
    scanf("%f",&lungimea1);
    r1=(lungimea1)/(2*PI);
    printf("\nRaza cercului este:=%f",r1);
    arie1=PI*pow(r1,2);
    printf("\nAria este:=%f",arie1);

,return 0;
}
