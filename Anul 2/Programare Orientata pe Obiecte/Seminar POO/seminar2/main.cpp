#include <iostream>
//3 clase cu o clasa prietenim din alta clasa o sa prietenim cu o metoda
using namespace std;
class Electrocasnice
{
    int numar;
    public:
        double banii;
    Electrocasnice()
    {
        numar=100;
        banii=113234;
    }
    friend class Afiseaza;
    friend class Calculeaza;

};
class Afiseaza
{
    public:
    void afiseaza(double x)
    {
        cout<<"NUMARUL: "<<x;
    }
};
class Calculeaza
{
    public:
    Electrocasnice e1;
    double pret_pe_unitate=e1.banii/e1.numar;
    friend void Afiseaza::afiseaza(double pret_pe_unitate);
};
int main()
{
    Electrocasnice e1;
    Afiseaza a1;
    a1.afiseaza(e1.banii);
    Calculeaza c1;


    return 0;
}
