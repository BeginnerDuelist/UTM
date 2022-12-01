#include <iostream>
#include <cmath>
#include <time.h>
#include <iomanip>
using namespace std;
long int it1=0;
long int it2=0;
long int it3=0;
long long fibonacci_recursiv(int n)
{
    if (n>=0 && n<=1)
    {
       it1++;
       return n;
    }
    return fibonacci_recursiv(n-1)+fibonacci_recursiv(n-2);
}
long long fibonacci_iterativ(int n)
{
    int a=0,b=1;
    it2+=2;
  for(int i=0;i<=n;i++)
  {
          b=a+b;
          a=b-a;
          it2+=4;
  }
  return b;
}
long long fibonacci_formula(int n)
{
    int i,j,k,h,t;
    i=1;
    j=0;
    k=0;
    h=1;
    it3+=4;
    while(n>0)
    {
        if(n%2!=0)
        {
            t=j*h;
            j=i*h+j*k+t;
            i=i*k+t;
            it3+=11;
        }
        t=h*h;
        h=2*k*h+t;
        k+k*k+t;
        n=n/2;
        it3+=11;
    }
    return j;
}
int main()
{
    int tablou[7]={5,7,8,9,10,12,14};
    for(int i=0;i<7;i++)
    {
        fibonacci_formula(tablou[i]);
        cout<<endl<<"Fibonacci formula iterati:"<<it3;
        fibonacci_recursiv(tablou[i]);
        cout<<endl<<"Fibonacci recursiv iterati:"<<it1;
        fibonacci_iterativ(tablou[i]);
        cout<<endl<<"Fibonacci iterativ iterati:"<<it2<<endl;
}
    return 0;
}
