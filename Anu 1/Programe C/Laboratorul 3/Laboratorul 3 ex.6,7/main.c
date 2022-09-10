#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int interv_numar_prim(int a,int b)
{
    int c,i;
    bool q;
    for(i=a;i<=b;i++){
        q=true;
         for(c = 2; c * c <= i; c++)
        if(i % c == 0)
         {
        q = false;
            break;
         }
        if(q) printf("\nNumerele prime sunt :%d",i);
    }
}
int interv_numar_puternic(int n1,int n2)
{
     for(int i=n1;i<=n2;i++)
    {
        int k=i,fact=1,sum=0,r;
        while(k!=0)
        {
            r=k%10;
            fact=factorial(r);
            k=k/10;
            sum=sum+fact;
        }
        if(sum==i){
        printf("\n%d, ",i);
        }
           sum=0;
    }
   return 0;
}
int factorial(int f)
 {
        int mul=1;
        for(int i=1; i<=f;i++)
        {
            mul=mul*i;
        }
        return mul;
}


int main()
{
    printf("Problema 6:\nScrieti un program C pentru a gasi toate numerele prime intre intervalul dat folosind functiile. ");
    int a1=3,b1=7,c1;
    c1=interv_numar_prim(a1,b1);
    printf("\nProblema 7:\nScrieti un program C pentru a imprima toate numerele puternice intre intervalul dat folosind functiile");
    int d1=1,d2=300,d3;
    d3=interv_numar_puternic(d1,d2);
    return 0;
}
