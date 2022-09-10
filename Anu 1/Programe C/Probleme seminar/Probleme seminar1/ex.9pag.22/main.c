#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=7,n=8;
    if(m==n+1) printf("\n Numerele %d si %d sunt consecutive",n,m);
    else if (n==m+1) printf("\n Numerele %d si %d sunt consecutive",m,n);
    else printf("\nNumerele %d si %d nu sunt consecutive",m,n);
    return 0;
}
