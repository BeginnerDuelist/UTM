#include "Artist.h"
#include <regex>
#include <limits>
int validare_durata(int durata)
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
int validare_virsta(int virsta)
{
    while(1)
    {
        if(cin.fail()==0 && virsta>=12 && virsta<=90)
        {
            return virsta;
        }
        else
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout<<"Virsta incorecta introdu din nou:"<<endl;
            cin>>virsta;
        }
    }
}
int validare_nrTrackAlbum(int nrTrackAlbum)
{
    while(1)
    {
        if(cin.fail()==0 && nrTrackAlbum>=1 && nrTrackAlbum<=10)
        {
            return nrTrackAlbum;
        }
        else
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout<<"\nNumar incorect introdu din nou:"<<endl;
            cin>>nrTrackAlbum;
        }
    }
}
string validare_nume_trackAlbum(string nume_trackAlbum)
{
    regex reg("[A-Za-z0-9 -:(){}%$^+=*]*$");
    while(1)
    {
        // cout<<"regex_match(str,reg)="<<regex_match(str,reg)<<endl;
        if(nume_trackAlbum.length()>=2 && nume_trackAlbum.length()<=40 && regex_match(nume_trackAlbum,reg))
        {
            return nume_trackAlbum;
        }
        else
        {
            cout<<"\nNume track nu este valid introdu din nou: ";
            cout<<"\n-->";
            getline(cin, nume_trackAlbum);
        }
    }
}
int validare_an_aparitie(int an_aparitie)
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
string validare_nume(string nume_artist)
{
    regex reg("([A-Z][a-z]*)([\\s\\\'-][A-Z][a-z]*)*");
    while(1)
    {
        if(nume_artist.length()>=2 && nume_artist.length()<=40 && regex_match(nume_artist,reg))
        {
            return nume_artist;
        }
        else
        {
            cout << "\n" << nume_artist;
            cout<<"\nNu este valid introdu din nou: ";
            cout<<"\nConditiile de validare:";
            cout<<"\n\t-->nu mai scurt de 2 caractere";
            cout<<"\n\t-->nu mai mare de 40 caractere";
            cout<<"\n\t!!!simbulori interzise: :: () {} % $ ^ - + = *";
            cout<<"\n-->";
            getline(cin, nume_artist);
        }
    }
}
Artist::Artist():Persoana()
{
    this -> num_albume = 0;
    this -> albume = NULL;
}

Artist::Artist(string nume, int varsta, int num_albume, Album albume[]):Persoana(nume, varsta)
{
    this -> num_albume = num_albume;
    this -> albume = new Album[num_albume];
    for(int i = 0; i < num_albume; i++)
    {
        this -> albume[i] = albume[i];
    }
}
void Artist:: maxDuration()
{
    int max = this -> albume[0].albumDuration();
    int pos = 0;

    for(int i = 1; i < this -> num_albume; i++)
    {
        if(max < this -> albume[i].albumDuration())
        {
            max = this -> albume[i].albumDuration();
            pos = i;
        }
    }
    cout << "Cel mai lung album este: ";
    cout << this -> albume[pos].nume_album << endl;
}

void Artist::afisare()
{
    Persoana::afisare_persoana();

    for(int i = 0; i < this -> num_albume; i++)
    {
        cout << endl;

        this -> albume[i].afisare_album();
    }
}

void Artist::sortAlbum()
{
    for(int i = 0; i < this -> num_albume; i++)
    {
        for(int j = 0; j < this -> num_albume - i - 1; j++)
        {
            if(this -> albume[j].an_aparitia > this -> albume[j + 1].an_aparitia)
                swap(this -> albume[j], this -> albume[j+1]);
        }
    }
}

void Artist::inInterval(int ageStart, int ageFinish)
{
    for(int i = 0; i < this -> num_albume; i++)
    {
        if(this -> albume[i].an_aparitia > ageStart && this -> albume[i].an_aparitia < ageFinish)
        {
            this -> albume[i].afisare_album();
        }
    }
}

void Artist::addAlbum()
{
    string nume_album,nume_track;
    int an_aparitie, nr_track,durata;

    cout << "Dati numele albumului: ";
    cin >> nume_album;
    nume_album=validare_nume_trackAlbum(nume_album);
    cout << "Dati anul aparitiei albumului: ";
    cin >> an_aparitie;
    an_aparitie=validare_an_aparitie(an_aparitie);
    cout << "Dati numarul de tracuri: ";
    cin >> nr_track;
    nr_track=validare_nrTrackAlbum(nr_track);
    Track tempTrack[nr_track];

    for(int i = 0; i < nr_track; i++)
    {
        cout << "Dati durata trackului " << i+1 << ": ";
        cin >> durata;
        durata=validare_durata(durata);
        cout << "Dati numele trackului: ";
        cin >> nume_track;
        nume_track=validare_nume_trackAlbum(nume_track);
        tempTrack[i] = Track(i+1, durata, nume_track);
    }

    Album tempAlbum(an_aparitie, nume_album, nr_track, tempTrack);

    int num_total_albume =  this -> num_albume;
    this -> num_albume++;

    this -> albume[num_total_albume] = tempAlbum;
}

void Artist::deleteAlbum(int num_album)
{
    int num_total_albume = this -> num_albume;

    for(int i = num_album - 1; i < num_total_albume - 1; i++)
    {
        this -> albume[i] = this -> albume[i+1];
    }

    this -> num_albume--;
}

void Artist::updateAlbum(int num_album)
{
    string newName;

    cout << "Dati numele nou al albumului: ";
    cin >> newName;
    newName=validare_nume_trackAlbum(newName);
    this -> albume[num_album - 1].nume_album = newName;
}

void Artist::readFile()
{
    Track tempTrack[100];
    Album tempAlbum[100];

    int nr_track, nr_album,pozitie, durata,an_aparitie,varsta;
    string nume_track,nume_album,nume;

    ifstream f("test.in");

    f >> nr_album;
    nr_album=validare_nrTrackAlbum(nr_album);
    for(int i = 0; i < nr_album; i++)
    {
        f >> nr_track;
        nr_track=validare_nrTrackAlbum(nr_track);
        for(int j = 0; j < nr_track; j++)
        {
            f >> pozitie >> durata >> nume_track;
            durata=validare_durata(durata);
            nume_track=validare_nume_trackAlbum(nume_track);
            tempTrack[j] = Track(pozitie, durata, nume_track);
        }
        f >> an_aparitie >> nume_album;
        an_aparitie=validare_an_aparitie(an_aparitie);
        nume_album=validare_nume_trackAlbum(nume_album);
        tempAlbum[i] = Album(an_aparitie, nume_album, nr_track, tempTrack);
    }

    this -> albume = tempAlbum;

    f >> nume >> varsta;
    nume=validare_nume(nume);
    varsta=validare_virsta(varsta);
    this -> nume_persoana = nume;
    this -> varsta = varsta;

    this -> num_albume = nr_album;
}
int Artist::return_num_album()
{
    return num_albume;
}
int Artist::return_num_track(int num_album)
{
    return albume[num_album-1].num_trackuri;
}
void Artist::saveFile()
{
    ofstream f("test.out");

    f << this -> num_albume << endl;
    for(int i = 0; i < this -> num_albume; i++)
    {
        f << this -> albume[i].num_trackuri << endl;

        for(int j = 0; j < this -> albume[i].num_trackuri; j++)
        {
            f << this -> albume[i].trackuri[j].pozitia+1 << " " << this -> albume[i].trackuri[j].durata << " " << this -> albume[i].trackuri[j].nume_track << endl;
        }
        f << this -> albume[i].an_aparitia << " " << this -> albume[i].nume_album << endl;
    }

    f << this -> nume_persoana << " " << this -> varsta << endl;
}
