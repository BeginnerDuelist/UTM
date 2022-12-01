#include <iostream>

using namespace std;
class Magazin_electrocasnice
{
    public:
    string nume;
    int nr_angajati;
    long int nr_de_electrocasnice;
    Magazin_electrocasnice()
    {

        cout<<"\nIntrodu Numele:";
        cin>>nume;
        cout<<"\nIntrodu Numarul de angajati:";
        cin>>nr_angajati;
        cout<<"\nIntrodu Numarul de electrocasnice:";
        cin>>nr_de_electrocasnice;
    }
    Magazin_electrocasnice(string nume1,int no1,long int no2)
    {
        nume=nume1;
        nr_angajati=no1;
        nr_de_electrocasnice=no2;
    }
    Magazin_electrocasnice(const Magazin_electrocasnice &ex)
    {
        nume=ex.nume;
        nr_angajati=ex.nr_angajati+100;
        nr_de_electrocasnice=ex.nr_de_electrocasnice-100;
    }
   ~Magazin_electrocasnice()
    {
        cout<<"\n\nAm folosit destructorul!!!";
    }
    void print_info();
};
void Magazin_electrocasnice::print_info()
{
    cout<<"\n\nNumele:"<<nume;
    cout<<"\nNumarul de angajati:"<<nr_angajati;
    cout<<"\nNumarul de electrocasnice:"<<nr_de_electrocasnice;
}
int main()
{
    Magazin_electrocasnice nr1;
    Magazin_electrocasnice nr2("Maximum",1000,10000);
    Magazin_electrocasnice nr3(nr1);
    cout<<"\nInformatia despre magazinul nr.1:";
    nr1.print_info();
    cout<<"\nInformatia despre magazinul nr.2:";
    nr2.print_info();
    cout<<"\nInformatia despre magazinul nr.3:";
    nr3.print_info();
    return 0;
}
