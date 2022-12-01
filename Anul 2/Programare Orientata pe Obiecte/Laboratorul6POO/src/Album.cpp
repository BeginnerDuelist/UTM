#include "Album.h"
#include <regex>
#include <limits>
string validare_nume_trackAlbum1(string nume)
{
    regex reg("[A-Za-z0-9 -:(){}%$^+=*]*$");
    while(1)
    {
        // cout<<"regex_match(str,reg)="<<regex_match(str,reg)<<endl;
        if(nume.length()>=2 && nume.length()<=40 && regex_match(nume,reg))
        {
            return nume;
        }
        else
        {
            cout<<"\nNume track nu este valid introdu din nou: ";
            cout<<"\n-->";
            getline(cin, nume);
        }
    }
}
int validare_durata1(int durata)
{
    while(1)
        {
         if(cin.fail()==0 && durata>=100 && durata<=300)
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
Album:: Album()
{
    this -> an_aparitia = 0;
    this -> nume_album = "";
    this -> num_trackuri = 0;
    //this -> trackuri = NULL;
}
Album::Album(int an_aparitia,string nume_album,int num_trackuri,Track trackuri[])
{
    this->an_aparitia=an_aparitia;
    this->num_trackuri=num_trackuri;
    this->nume_album=nume_album;
    for(int i=0; i<num_trackuri; i++)
    {
        this->trackuri[i]=trackuri[i];
    }
}
void Album::afisare_album()
{
    cout << "Nume album: " << this -> nume_album << endl;
    cout << "An aparitie: " << this -> an_aparitia << endl;

    for(int i = 0; i < this -> num_trackuri; i++)
    {
        cout << endl;

        this -> trackuri[i].afisare_track();
    }
}
void Album::trackMore(int time)
{
    cout << "\nTrackurile mai lungi de " << time << " secunde sunt:\n";
    for(int i = 0; i < this -> num_trackuri; i++)
    {
        if(this -> trackuri[i].durata > time)
        {
            cout << this -> trackuri[i].nume_track << ", ";
        }
    }

    cout << endl;
}
int Album::albumDuration()
{
    int durata = 0;

    for(int i = 0; i < this -> num_trackuri; i++)
    {
        durata += this -> trackuri[i].durata;
    }

    return durata;
}
void Album::addTrack()
{
    string nume_track;
    int durata;

    cout << "Dati numele trackului: ";
    cin >> nume_track;
    nume_track=validare_nume_trackAlbum1(nume_track);

    cout << "Dati durata trackului: ";
    cin >> durata;

    durata=validare_durata1(durata);
    int num_total_trackuri = this -> num_trackuri;
    this -> num_trackuri++;
    this -> trackuri[num_total_trackuri] = Track(num_total_trackuri+1, durata, nume_track);
}
void Album::deleteTrack(int num_track)
{
    int numt_total_track = this -> num_trackuri;

    for(int i = num_track - 1; i < numt_total_track - 1; i++)
    {
        this -> trackuri[i] = this -> trackuri[i+1];
    }

    this -> num_trackuri--;
}

void Album::updateTrack(int num_track)
{
    string newName;

    cout << "Dati numele nou al trackului: ";
    cin >> newName;
    newName=validare_nume_trackAlbum1(newName);
    this -> trackuri[num_track - 1].nume_track= newName;
}


