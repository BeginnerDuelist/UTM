#include <stdio.h>
#include <stdlib.h>
int suma(int n)
{
   if(n==0) return 0;
   else return (n+(suma(n-1)));
}
int factorial(int n2)
{
   if (n2==0) return 1;
   else return n2*factorial(n2-1);
   }
int fibonacci (int m)
{
if (m==0)  return 0;
else if (m == 1) return 1;
else return fibonacci(m-1)+fibonacci(m-2);
    }

int main()
{
    printf("\nEx.4:\nScrieti un program C pentru a gasi suma tuturor numerelor naturale cuprinse intre 1 si n folosind recursivitatea");
    int a1=1,n1=10;
    suma (n1);
    printf("\nSuma numerelor de la %d la %d este %d",a1,n1,suma(n1));
    printf("\nEx.9:\nScrieti un program C pentru a gasi factorialul oricarui numar folosind recursivitatea.");
    int n3=5;
    factorial(n3);
    printf("\nFactorialul %d este %d",n3,factorial(n3));
    printf("\nEx.10:\nScrieti un program C pentru a genera al n-lea termen Fibonacci folosind recursivitate");
    int m1=6;
    fibonacci(m1);
    printf("\nTermenul %d a sirului fibonacci este %d",m1,fibonacci(m1));
    return 0;
}
