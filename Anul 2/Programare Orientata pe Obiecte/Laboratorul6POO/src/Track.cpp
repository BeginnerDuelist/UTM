#include "Track.h"

Track::Track()
    {
        this->durata=0;
        this->pozitia=0;
        this->nume_track="";
    }
    Track::Track(int pozitia, int durata, string nume_track)
    {
        this->pozitia=pozitia;
        this->durata=durata;
        this->nume_track=nume_track;
    }
    void Track::afisare_track(){
            cout << "Nume track: " << this -> nume_track << endl;
            cout << "Durata: " << this -> durata << endl;
            cout << "Pozitia: " << this -> pozitia << endl;
        }
