#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
#include <regex>
#include <fstream>
#include <limits>
#include "Track.h"
#include "Album.h"
#include "Persoana.h"
#include "Artist.h"
using namespace std;
void meniu()
{
    cout<<"\n1.Adaugare album al unui artist "<<endl;
    cout<<"2.Stergere album al unui artist "<<endl;
    cout<<"3.Modificare album al unui artist "<<endl;
    cout<<"4.Adaugare track al unui album "<<endl;
    cout<<"5.Stergere track al unui album "<<endl;
    cout<<"6.Modificare track al unui album "<<endl;
    cout<<"7.Afisarea in ordine cronologica albumele unui artist"<<endl;
    cout<<"8.Afisare discografie"<<endl;
    cout<<"9.Sa se afiseze toate albumele intre ani dati"<<endl;
    cout<<"10 Cel mai lung album al unui artist"<<endl;
    cout<<"11.Sa se afiseze cite trackuri sunt mai lungi de x secunde"<<endl;
    cout<<"0. EXIT PROGRAM"<<endl;
}
int validare_nrAlbum(int nrAlbum,int nr_album_total)
{
    while(1)
    {
        if(cin.fail()==0 && nrAlbum>=1 && nrAlbum<=nr_album_total)
        {
            return nrAlbum;
        }
        else
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout<<"\nNumar incorect introdu din nou:"<<endl;
            cin>>nrAlbum;
        }
    }
}
int validare_nrTrack(int nrTrack,int nr_track_total)
{
    while(1)
    {
        if(cin.fail()==0 && nrTrack>=1 && nrTrack<=nr_track_total)
        {
            return nrTrack;
        }
        else
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout<<"\nNumar incorect introdu din nou:"<<endl;
            cin>>nrTrack;
        }
    }
}
int validare_an(int an_aparitie)
{
  while(1)
    {
        if(cin.fail()==0 && an_aparitie>=1800 && an_aparitie<=2022)
        {
            return an_aparitie;
        }
        else
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout<<"\nAn aparitie incorect introdu din nou:"<<endl;
            cin>>an_aparitie;
        }
    }
}
int validare_durata_track(int durata)
{
    while(1)
    {
        if(cin.fail()==0 && durata>=120 && durata<=300)
        {
            return durata;
        }
        else
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout<<"\nDurata incorecta a trackului introdu din nou:"<<endl;
            cin>>durata;
        }
    }
}
int main()
{
    Artist artist;
    artist.readFile();
    artist.afisare();
    int nr_album=artist.return_num_album();
    int nr_track=artist.return_num_track(nr_album);
    int numar,pozitia;
    int optiune;
    do
    {
        meniu();
        cout<<"Introdu optiunea dorita: ";
        cin>>optiune;
        switch(optiune)
        {
        case 1:
            {
                artist.addAlbum();
                artist.saveFile();
                break;
            }
        case 2:
          {
              cout<<"\nNumarul albumului ce vreti sal stergeti:";
              cin>>numar;
              numar=validare_nrAlbum(numar,nr_album);
              artist.deleteAlbum(numar-1);
              artist.saveFile();
              break;
          }
        case 3:
            {
              cout<<"\nNumarul albumului ce vreti sal modificati:";
              cin>>numar;
              numar=validare_nrAlbum(numar,nr_album);
              artist.updateAlbum(numar-1);
              artist.saveFile();
              break;
            }
        case 4:
            {
                cout<<"\nNumarul albumului ce vreti sai adaugati track:";
                cin>>numar;
                numar=validare_nrAlbum(numar,nr_album);
                artist.albume[numar-1].addTrack();
                artist.saveFile();
                break;
            }
        case 5:
            {
                cout<<"\nNumarul albumului ce vreti sai stergeti un track si pozitia trackului:";
                cin>>numar>>pozitia;
                numar=validare_nrAlbum(numar,nr_album);
                pozitia=validare_nrTrack(pozitia,nr_track);
                artist.albume[numar-1].deleteTrack(pozitia);
                artist.saveFile();
                break;
            }
        case 6:
            {
                cout<<"\nNumarul albumului ce vreti sal modificati un track si pozitia trackului:";
                cin>>numar>>pozitia;
                numar=validare_nrAlbum(numar,nr_album);
                pozitia=validare_nrTrack(pozitia,nr_track);
                artist.albume[numar-1].updateTrack(pozitia);
                artist.saveFile();
                break;
            }
        case 7:
            {
                artist.sortAlbum();
                artist.saveFile();
                break;
            }
        case 8:
            {
                artist.afisare();
                artist.saveFile();
                break;
            }
        case 9:
            {
                int an1,an2,schimb;
                cout<<"\nIntroduceti ani intre care doriti sa va fie afisate toate albumele:\n an1=";
                cin>>an1;
                an1=validare_an(an1);
                cout<<"\nan2=";
                cin>>an2;
                an2=validare_an(an2);
                if(an1>an2)
                {
                    schimb=an1;
                    an1=an2;
                    an2=schimb;
                }
                artist.inInterval(an1,an2);
                artist.saveFile();
                break;
            }
        case 10:
            {
                artist.maxDuration();
                artist.saveFile();
                break;
            }
        case 11:
            {
                int durata;
                cout<<"\nNumarul albumului din care doriti sa vedeti care trackuri sunt mia lungi de x secunde:";
                cin>>numar;
                numar=validare_nrAlbum(numar,nr_album);
                cout<<"\nDurata:";
                cin>>durata;
                durata=validare_durata_track(durata);
                artist.albume[numar-1].trackMore(durata);
                artist.saveFile();
                break;
            }
        }
    }while(optiune>=1 &&optiune<=11);
    artist.saveFile();
    return 0;
}
