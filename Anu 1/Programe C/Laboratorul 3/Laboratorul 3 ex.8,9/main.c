#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int interv_num_armstrong(int x,int y)
{
     int i1,rem,sum=0,entr,nr,i,m=1,z=0;

for(i1=x; i1<=y; i1++){
entr = i1;
nr=i1;
while(nr>0){
nr = nr / 10;
z+=1;
}
nr=i1;
while(nr!=0){
rem = nr % 10;
nr = nr / 10;
for(i=1;i<=z;i++){
m = m*rem;
}
sum +=m;
m=1;
}
if(sum == entr)
printf("%d ",sum);
sum=0;
z=0;
}

}
int interv_num_perfecte(int m,int n )
{
    int num,i,Sum;
   for(num = m;num <= n; num++)
{
    for(i = 1, Sum = 0; i < num; i++)
{
  if(num %i == 0)
 Sum = Sum + i;
}
if(Sum == num)
printf("\n%d", num);
}
}
int main()
{
    printf("Problema 8:\nScrieti un program C pentru a imprima toate numerele Armstrong intre intervalul dat folosind functiile.");
     int x1=1,x2=200;
     printf("\Numerele Armstrong din intervalu %d si %d sunt:",x1,x2,interv_num_armstrong(x1,x2));
    printf("\nProblema 9:\nScrieti un program C pentru a imprima toate numerele perfecte intre intervalul dat folosind functiile.");
   int m1=1,n1=100,a;
   a=interv_num_perfecte(m1,n1);
    return 0;
}
