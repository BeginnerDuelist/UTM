#include <stdio.h>


int main()
{
    int a,b,c,v;
    printf("Ex.7 pag. 14:\n");
    printf("Introdu 2 numere intregi:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("\nSuma este :=");
    printf("%d",c);
    v=a-b;
    printf("\nDiferenta este:=");
    printf("%d",v);
    float d,e,f,g;
    printf("\nEx.8 pag. 14:");
    printf("\nIntrodu 2 numere reale:");
    scanf("%f %f",&d,&e);
    f=d*e;
    printf("\nProdusul este:=");
    printf("%f",f);
    g=d/e;
    printf("\nCitul este:=");
    printf("%f",g);
    unsigned int h,i;
    float med,k;
    printf("\nEx.9 pag.14:");
    printf("\nIntrodu 2 numere naturale:");
    scanf("%u %u",&h,&i);
     med=(float)(h+i)/2;
    printf("\nMedia aritmetica este:= %lf",med);
    k=sqrt(h*i);
    printf("\nMedia geometrica:= %lf",k);
    return 0;
}
