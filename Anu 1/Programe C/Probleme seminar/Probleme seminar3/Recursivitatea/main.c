#include <stdio.h>
#include <stdlib.h>

int Cmmdc(int m, int n)
{
    int r = m % n;
    if(r != 0)
    {
        Cmmdc(n, r);
    }
    else
    return n;
}
int Fibonaci(int n)
{

    if(n <= 0)
    {
        return 0;
    }
    else if(n == 1)
        {
            return 1;
        }
    else
        {
            return (Fibonaci(n - 2) + Fibonaci(n - 1));
        }
}
int suma(int n)
{
    if(n <= 0)
    {
        return 0;
    }
    int sum = 0;
    sum += n * 2 * (n - 1) + suma(--n);
    return sum;
}
int suma1(int n)
{
    if(n <= 0)
    {
        return 0;
    }
    int sum = n;
    sum += suma1(--n);
    return sum;
}
double suma2(double n)
{
    double sum = 0;
    if(n<=0)
        return 0;
    else if(n > 0)
        sum = n/((2*n-1)*(2*n+1))+suma2(--n);
    return sum;
}
int f(int n)
{
    if(n > 10)
    {
        return --n;
    }
   else f(f(n + 2));
}
int main()
{
    printf("Ex.1 pag.137");
    int m=12,n=4,rezultatul;
    if(m>n)
    {
        rezultatul=Cmmdc(m - n, n);
    }
    else
    {
        rezultatul=Cmmdc(m, n);
    }

    printf("\nCel mai mare divizor comun pentru %d si %d este %d",m,n,rezultatul);

    printf("\n\nEx.2 pag.137");
    n=8;
    printf("\nNumarul %d din sirul lui Fibonaci este %d", n, Fibonaci(n));

    printf("\n\nEx.4 pag.138");
    printf("\na)");
    n=6;
    printf("\nSuma seriei pina la numarul %d este %d",n,suma(n));
    printf("\nb)");
    double n1=3;
    printf("\nRezulatatul este: %lf",suma2(n1));

    printf("\n\nEx.5 pag.138");
    n=10;
    printf("\nSuma numerelor naturale pina la numarul %d este %d",n,suma1(n));

    printf("\n\nEx.6 pag.138");
    n=1;
    printf("\nRezultatul functiei este %d",f(n));
    ///5 exercitii
    return 0;
}
