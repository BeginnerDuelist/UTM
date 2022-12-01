#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;
class CompanieImobiliara
{
  public:
  char nume[20];
  int an_fondare,apartamente_disponibile,virsta;
  void get_info(char nume[],int an_fondare,int apartamente_disponibile)
  {
      strcpy(this->nume,nume);
      this->an_fondare=an_fondare;
      this->apartamente_disponibile=apartamente_disponibile;
  }
  void change_name(char nume[])
  {
      strcpy(this->nume,nume);
  }
  void print_info()
  {
    cout<<"Compania Imobiliara ,, "<<nume<<" '' fondata in anul "<<an_fondare;
    cout<<" are disponibile la moment "<<apartamente_disponibile<<" de apartamente"<<endl;
  }
};
class Adresa:public CompanieImobiliara
{
    public:
    char tara[20],orasul[20],sectorul[20],strada[20];
    int nr_strazii;
    void get_info_adresa(char tara[],char orasul[],char sectorul[],char strada[],int nr_strazii)
    {
        get_info(nume,an_fondare,apartamente_disponibile);
        strcpy(this->tara,tara);
        strcpy(this->orasul,orasul);
        strcpy(this->sectorul,sectorul);
        strcpy(this->strada,strada);
        this->nr_strazii=nr_strazii;
    }
    void change_sector(char sectorul[],char strada[],int nr_strazii)
    {
        strcpy(this->sectorul,sectorul);
        strcpy(this->strada,strada);
        this->nr_strazii=nr_strazii;
    }
    void print_info_adresa()
    {
        print_info();
        cout<<"La moment compania dispune de apartamente in tara ,, "<<tara<<" '' orasul ,, "<<orasul;
        cout<<" '' sectorul ,, "<<sectorul<<" ''strada ,, "<<strada<<" '' numarul strazii ,, "<<nr_strazii<<"''";
    }

};
class Apartament:public Adresa
{
    double suprafata_totala=0,suprafata[5],pretul=1000,pretul_total;
    public:
    int etaj,blocul,nr_apartament;
    void get_info_apartament(int blocul,int etaj,int nr_apartament)
    {
        get_info_adresa(tara,orasul,sectorul,strada,nr_strazii);
        this->blocul=blocul;
        this->etaj=etaj;
        this->nr_apartament=nr_apartament;
    }
    void change_apartament(int etaj,int nr_apartament)
    {
        this->etaj=etaj;
        this->nr_apartament=nr_apartament;
    }
    void metraj_apartament()
    {
        for(int i=0;i<5;i++)
        {
            suprafata[i]=rand()%20;
            if (suprafata[i]<=6) suprafata[i]+=8;
            suprafata_totala+=suprafata[i];
        }
        cout<<"\nBucataria are "<<suprafata[0]<<" metri patrati";
        cout<<"\nBaia are "<<suprafata[1]<<" metri patrati";
        cout<<"\nLiving are "<<suprafata[2]<<" metri patrati";
        cout<<"\nDormitor are "<<suprafata[3]<<" metri patrati";
        cout<<"\nDormitor copii are "<<suprafata[4]<<" metri patrati";
        cout<<"\nSuprafata totala a apartamentului este: "<<suprafata_totala<<" metri patrati";
    }
    void pretul_apartament()
    {
        if (strcmp(orasul,"Chisinau")==0)
        {
          pretul_total=suprafata_totala*pretul;
          cout<<"\nUn apartament in orasul "<<orasul<<" costa "<<pretul<<" euro metrul patrat";
          cout<<"\nApartamentul ales de dvs costa: "<<pretul_total<<" de euro";
        }else if (strcmp(orasul,"Ialoveni")==0)
        {
            pretul_total=suprafata_totala*(pretul-150);
            cout<<"\nUn apartament in orasul "<<orasul<<" costa "<<pretul-150<<" euro metrul patrat";
            cout<<"\nApartamentul ales de dvs costa: "<<pretul_total<<" de euro";
        }else if (strcmp(orasul,"Comrat")==0)
        {
            pretul_total=suprafata_totala*(pretul-250);
            cout<<"\nUn apartament in orasul "<<orasul<<" costa "<<pretul-250<<" euro metrul patrat";
            cout<<"\nApartamentul ales de dvs costa: "<<pretul_total<<" de euro";
        }else if(strcmp(orasul,"Balti")==0)
        {
           pretul_total=suprafata_totala*(pretul-350);
           cout<<"\nUn apartament in orasul "<<orasul<<" costa "<<pretul-350<<" euro metrul patrat";
           cout<<"\nApartamentul ales de dvs costa: "<<pretul_total<<" de euro";
        }
    }
    void print_info_apartament()
    {
        print_info_adresa();
        cout<<"\nApartamentul ales este situat in blocul "<<blocul<<" etajul "<<etaj<<" numarul apartamentului "<<nr_apartament;
    }

};
int main()
{
    srand(time(NULL));
    Apartament ciocana;
    ciocana.get_info("MPT",1992,1000);
    ciocana.change_name("CATALIN MOBIL");
    ciocana.get_info_adresa("Moldova","Comrat","Riscani","Studentilor",3);
    ciocana.change_sector("Buiucani","Florilor",32);
    ciocana.get_info_apartament(3,6,45);
    ciocana.change_apartament(5,67);
    ciocana.print_info_apartament();
    ciocana.metraj_apartament();
    ciocana.pretul_apartament();
    return 0;
}
