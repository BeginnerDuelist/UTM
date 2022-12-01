#ifndef PERSOANA_H
#define PERSOANA_H
#include <iostream>
#include <cstring>
using namespace std;
class Persoana
{
    public:
        Persoana();
        Persoana(string nume, int varsta);
        void afisare_persoana();
    protected:
     string nume_persoana;
     int varsta;

};

#endif // PERSOANA_H
