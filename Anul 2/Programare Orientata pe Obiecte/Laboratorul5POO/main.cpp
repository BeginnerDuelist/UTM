#include <iostream>
#include <cstring>
#include <time.h>
using namespace std;
class Biblioteca
{
public:
    virtual void mesaj()
    {
        cout<<"\nClasa Biblioteca"<<endl;
    }
};
class Coperta: virtual public Biblioteca
{
protected:
    char denumire[50];
    void get_coperta(char denumire[])
    {
        strcpy(this->denumire,denumire);
    }
public:
    void mesaj()
    {
        cout<<"Clasa Coperta"<<endl;
    }
};
class Autor:virtual public Biblioteca
{
protected:
    char nume[20],prenume[20];
    void get_autor(char nume[],char prenume[])
    {
        strcpy(this->nume,nume);
        strcpy(this->prenume,prenume);
    }
    void mesaj()
    {
        cout<<"Clasa Autor"<<endl;
    }
};
class NrCapitole: virtual public Biblioteca
{
protected:
    int nr_capitole;
    void get_capitole(int nr_capitole)
    {
        this->nr_capitole=nr_capitole;
    }
    void mesaj()
    {
        cout<<"Clasa NrCapitole"<<endl;
    }
};
class FisaCarte:public Coperta,public Autor,public NrCapitole
{
    char editura[15],genul[25];
    int numarul_de_paginii;
    double pretul;
public:
    void initializare(char denumire[],char nume[],char prenume[],int nr_capitole,char editura[],char genul[],int numarul_de_paginii,double pretul)
    {
        get_coperta(denumire);
        get_autor(nume,prenume);
        get_capitole(nr_capitole);
        strcpy(this->editura,editura);
        strcpy(this->genul,genul);
        this->numarul_de_paginii=numarul_de_paginii;
        this->pretul=pretul;
    }
    void afisare()
    {
        cout<<"Denumirea carti: "<<denumire<<endl;
        cout<<"Autorul: "<<nume<<" "<<prenume<<endl;
        cout<<"Numarul de capitole: "<<nr_capitole<<endl;
        cout<<"Editura: "<<editura<<endl;
        cout<<"Genul : "<<genul<<endl;
        cout<<"Numarul de paginii: "<<numarul_de_paginii<<endl;
        cout<<"Pretul: "<<pretul<<endl;
    }
    void mesaj()
    {
        cout<<"Clasa FisaCarte"<<endl;
    }
};
int main()
{
    int n;
    cout<<"Introdu numarul de carti: ";cin>>n;
    FisaCarte f[n];
    char denumire[50],nume[20],prenume[20],editura[15],genul[25];
    int nr_capitole,nr_pagini;
    double pretul;
    for(int i=0;i<n;i++)
    {
        cout<<"Introdu informatia despre cartea "<<i+1<<endl;
        cout<<"Denumirea carti: ";cin>>denumire;
        cout<<"Autorul: ";cin>>nume>>prenume;
        cout<<"Numarul de capitole: "; cin>>nr_capitole;
        cout<<"Editura: ";cin>>editura;
        cout<<"Genul : ";cin>>genul;
        cout<<"Numarul de paginii: ";cin>>nr_pagini;
        cout<<"Pretul: ";cin>>pretul;
        cout<<endl;
       f[i].initializare(denumire,nume,prenume,nr_capitole,editura,genul,nr_pagini,pretul);
    }
    cout<<"===================================================================";
    cout<<"\nAfisam Cartile din libraria noastra:";
    for(int i=0;i<n;i++)
    {
        cout<<"\nCartea "<<i+1<<endl;
        f[i].afisare();
    }
    Biblioteca *b1[5];
    b1[0]=new Biblioteca;
    b1[1]=new Coperta;
    b1[2]=new Autor;
    b1[3]=new NrCapitole;
    b1[4]=new FisaCarte;
    cout<<"\n\nClasele folosite:";
    for(int j=0;j<=4;j++)
    {
        b1[j]->mesaj();
    }
    return 0;
}
