#ifndef TRACK_H
#define TRACK_H
#include <cstring>
#include <iostream>
using namespace std;

class Track
{
    public:
        Track();
        Track(int pozitia,int durata,string nume_track);
        void afisare_track();
    int pozitia;
    int durata;
    string nume_track;
};

#endif // TRACK_H
