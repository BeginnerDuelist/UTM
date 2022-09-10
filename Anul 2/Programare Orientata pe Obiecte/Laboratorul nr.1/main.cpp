#include <iostream>

using namespace std;

class Magazin{
	public:
		float vin_pret,vin_suma,vin;
		float banane_pret,banane_suma,banane;
		float mere_pret,mere_suma,mere;
		float salam_pret,salam_suma,salam;
		float cascaval_pret,cascaval_suma,cascaval;
		float cipsuri_pret,cipsuri_suma,cipsuri;
		float pepene_verde_pret,pepene_verde_suma,pepene_verde;
		float piine_pret,piine_suma,piine;
		float apa_pret,apa_suma,apa;
		float bere_pret,bere_suma,bere;
		void Alegere_produse()
		{
        cout<<"Bine ati venit la magazinu Linnela azi avem oferte speciale la :"<<endl;
        cout<<"1. Vin"<<endl;
        cout<<"2.Banane"<<endl;
        cout<<"3.Mere"<<endl;
        cout<<"4 Salam"<<endl;
        cout<<"5.Cascaval"<<endl;
        cout<<"6.Cipsuri"<<endl;
        cout<<"7.Pepene verde"<<endl;
        cout<<"8.Bere"<<endl;
        cout<<"9.Piine"<<endl;
        cout<<"10.Apa"<<endl;

		}
};

int main()
{
    Magazin linnela;
    linnela.apa_pret=10;
    linnela.banane_pret=30.99;
    linnela.bere_pret=45;
    linnela.cascaval_pret=156.78;
    linnela.cipsuri_pret=67.89;
    linnela.mere_pret=17.45;
    linnela.pepene_verde_pret=8.90;
    linnela.piine_pret=7.80;
    linnela.salam_pret=345.99;
    linnela.vin_pret=500.12;
    linnela.Alegere_produse();
    int c;
    double suma_totala;
    cout<<endl<<"Introdu numarul produsului dorit:";
    cin>>c;
    do{
    switch(c)
    {
    case 1:
    {
      cout<<"Pretu unei sticle de vin este: "<<linnela.vin_pret<<" cite sticle doriti: ";
      cin>>linnela.vin;
      linnela.vin_suma=linnela.vin_pret*linnela.vin;
      suma_totala+=linnela.vin_suma;
      cout<<"Introdu numarul produsului dorit:";
      cin>>c;
      break;
    }
    case 2:
    {
      cout<<"Pretu unui kg de banane este: "<<linnela.banane_pret<<" cite kg doriti: ";
      cin>>linnela.banane;
      linnela.banane_suma=linnela.banane_pret*linnela.banane;
      suma_totala+=linnela.banane_suma;
      cout<<"Introdu numarul produsului dorit:";
      cin>>c;
      break;
    }
     case 3:
    {
      cout<<"Pretu unui kg de mere este: "<<linnela.mere_pret<<" cite kg doriti: ";
      cin>>linnela.mere;
      linnela.mere_suma=linnela.mere_pret*linnela.mere;
      suma_totala+=linnela.mere_suma;
      cout<<"Introdu numarul produsului dorit:";
      cin>>c;
      break;
    }
     case 4:
    {
      cout<<"Pretu unui kg de salam este: "<<linnela.salam_pret<<" cite kg doriti: ";
      cin>>linnela.salam;
      linnela.salam_suma=linnela.salam_pret*linnela.salam;
      suma_totala+=linnela.salam_suma;
      cout<<"Introdu numarul produsului dorit:";
      cin>>c;
      break;
    }
     case 5:
    {
      cout<<"Pretu unui kg de cascaval este: "<<linnela.cascaval_pret<<" cite kg doriti: ";
      cin>>linnela.cascaval;
      linnela.cascaval_suma=linnela.cascaval_pret*linnela.cascaval;
      suma_totala+=linnela.cascaval_suma;
      cout<<"Introdu numarul produsului dorit:";
      cin>>c;
      break;
    }
     case 6:
    {
      cout<<"Pretu unei pungi de cipsuri este: "<<linnela.cipsuri_pret<<" cite pungi doriti: ";
      cin>>linnela.cipsuri;
      linnela.cipsuri_suma=linnela.cipsuri_pret*linnela.cipsuri;
      suma_totala+=linnela.cipsuri_suma;
      cout<<"Introdu numarul produsului dorit:";
      cin>>c;
      break;
    }
     case 7:
    {
      cout<<"Pretu unui kg de pepene verde este: "<<linnela.pepene_verde_pret<<" cite kg doriti: ";
      cin>>linnela.pepene_verde;
      linnela.pepene_verde_suma=linnela.pepene_verde_pret*linnela.pepene_verde;
      suma_totala+=linnela.pepene_verde_suma;
      cout<<"Introdu numarul produsului dorit:";
      cin>>c;
      break;
    }
     case 8:
    {
      cout<<"Pretu unui bere este: "<<linnela.bere_pret<<" cite sticle doriti: ";
      cin>>linnela.bere;
      linnela.bere_suma=linnela.bere_pret*linnela.bere;
      suma_totala+=linnela.bere_suma;
      cout<<"Introdu numarul produsului dorit:";
      cin>>c;
      break;
    }
    case 9:
    {
      cout<<"Pretu unui piini este: "<<linnela.piine_pret<<" cite kg doriti: ";
      cin>>linnela.piine;
      linnela.piine_suma=linnela.piine_pret*linnela.piine;
      suma_totala+=linnela.piine_suma;
      cout<<"Introdu numarul produsului dorit:";
      cin>>c;
      break;
    }
    case 10:
    {
      cout<<"Pretu unui sticle de apa este: "<<linnela.apa_pret<<" cite kg doriti: ";
      cin>>linnela.apa;
      linnela.apa_suma=linnela.apa_pret*linnela.apa;
      suma_totala+=linnela.apa_suma;
      cout<<"Introdu numarul produsului dorit:";
      cin>>c;
      break;
    }
    }
    } while(c!=0);
   cout<<"Suma totala: "<<suma_totala;
    return 0;
}




