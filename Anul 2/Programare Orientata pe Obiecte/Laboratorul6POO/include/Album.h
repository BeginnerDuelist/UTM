#ifndef ALBUM_H
#define ALBUM_H
#include <fstream>
#include <iostream>
#include <cstring>
#include "Track.h"
using namespace std;
string validare_nume_trackAlbum1(string nume);
int validare_durata1(int durata);
class Album
{
    public:
        Album();
        Album(int an_aparitia, string nume_album, int num_trackuri, Track trackuri[]);
        void afisare_album();
        void trackMore(int time);
        int albumDuration();
        void addTrack();
        void deleteTrack(int num_track);
        void updateTrack(int num_track);
    int an_aparitia;
    string nume_album;
    int num_trackuri,time;
    Track trackuri[100];
};

#endif // ALBUM_H
