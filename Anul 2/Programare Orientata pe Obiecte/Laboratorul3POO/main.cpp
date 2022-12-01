#include <iostream>
#include <math.h>
using namespace std;


class Banii
{
  float venit_total,mincare,transport,curatenie,venit_lunar,venit_saptaminal,diferenta,venit_zilnic;
  public:
  Banii()
  {
      transport=0;
      curatenie=0;
      mincare=0;
  }
  Banii(float transport,float curatenie,float mincare)
  {
      this->transport=transport;
      this->curatenie=curatenie;
      this->mincare=mincare;
  }
  Banii operator+(Banii& b)
  {
      Banii temp;
      temp.curatenie=b.curatenie;
      temp.mincare=b.mincare;
      temp.transport=b.transport;
      temp.venit_saptaminal=float(temp.transport+temp.mincare+temp.curatenie);
      b.venit_saptaminal=temp.venit_saptaminal;
      cout<<"\nVenit_saptaminal : "<<temp.venit_saptaminal;
      return temp;
  }
  Banii operator *(int n)
  {
      Banii temp;
      temp.venit_saptaminal=venit_saptaminal;
      temp.venit_lunar=n*temp.venit_saptaminal;
      temp.venit_total=(n+8)*temp.venit_lunar;
      cout<<"\nVenit lunar: "<<temp.venit_lunar;
      cout<<"\nVenit total anual: "<<temp.venit_total;
      return temp;
  }
  Banii operator-(Banii& b)
  {
      Banii temp;
      temp.curatenie=curatenie-b.curatenie;
      temp.mincare=mincare-b.mincare;
      temp.transport=transport-b.transport;
      temp.diferenta=abs(float(temp.transport+temp.mincare+temp.curatenie));
      cout<<"\nDiferenta de venit dintre saptamina 1 si 2 este: "<<temp.diferenta;
      return temp;
  }
  Banii operator /(int n)
  {
      Banii temp;
      temp.venit_zilnic=float(venit_saptaminal/n);
      cout<<"\nVenitul aproximativ ce miar trebui pe o zi: "<<temp.venit_zilnic;
      return temp;
  }
  Banii operator>(Banii& b)
  {
      Banii temp;
      if (venit_saptaminal>b.venit_saptaminal)
      {
          cout<<"\nVenitul din prima saptamina e mai mare si este: "<<venit_saptaminal<<endl;
          temp.venit_saptaminal=venit_saptaminal;
          return temp;
      }
      else
      {
          cout<<"\nVenitul din a doua saptamina e mai mare: "<<b.venit_saptaminal<<endl;
          temp.venit_saptaminal=b.venit_saptaminal;
          return temp;
      }
  }
};
int main()
{
    Banii sapt1(120,50,200),sum=sapt1+sapt1,prod=sum*4,
    sapt2(100,80,250),sum1=sapt2+sapt2,raport=sapt1/7,dif=sapt1-sapt2,comp=sapt1>sapt2;
    return 0;
}
