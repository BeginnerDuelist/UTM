#include "Persoana.h"

Persoana::Persoana()
{
    this -> nume_persoana = "";
    this -> varsta = 0;
}

Persoana::Persoana(string nume, int varsta)
{
    this -> nume_persoana = nume;
    this -> varsta = varsta;
}

void Persoana::afisare_persoana()
{
    cout << "Nume: " << this -> nume_persoana << endl;
    cout << "Varsta: " << this -> varsta << endl;
}
