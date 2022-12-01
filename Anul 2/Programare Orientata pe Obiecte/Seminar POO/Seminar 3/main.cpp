#include <iostream>
using namespace std;
using namespace std;
class Grade
{
    double grad_C,grad_F;
public:
    Grade()
    {
        this->grad_C=0;
        this->grad_F=0;
    }
    Grade(double grad_C,double grad_F)
    {
        this->grad_C=grad_C;
        this->grad_F=grad_F;
    }
    Grade operator*(Grade gr)
    {
        Grade F;
        F.grad_C=gr.grad_C;
        F.grad_F=grad_F+((gr.grad_C*1.8)+32);
        return F;
    }
    Grade operator-(Grade gr)
    {
        Grade F;
        F.grad_F=gr.grad_F;
        F.grad_C=float((gr.grad_F-32)/1.8);
        return F;
    }
    void print_grade()
    {
        cout<<"\nCelsius:"<<grad_C;
        cout<<"\nFahrenheit:"<<grad_F;
    }

};
int main()
{
    double c,f;
    cout<<"Temperatura in celsius:";
    cin>>c;
    Grade grad1(c,0),grad2(c,0),
    grad3=grad1*grad2;
    grad3.print_grade();
    cout<<"\nTemperatura in Fahrenheit:";
    cin>>f;
    Grade grad4(0,f),grad5(0,f),
    grad6=grad4-grad5;
    grad6.print_grade();
    return 0;
}
