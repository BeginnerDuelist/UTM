#ifndef ARTIST_H
#define ARTIST_H
#include <Persoana.h>
#include <iostream>
#include <cstring>
#include <Album.h>
#include <vector>
using namespace std;
int validare_nrTrackAlbum(int nrTrackAlbum);
int validare_an_aparitie(int an_aparitie);
int validare_durata(int durata);
int validare_virsta(int virsta);
string validare_nume(string nume_artist);
string validare_nume_trackAlbum(string str);
class Artist : public Persoana
{
    public:
        Artist();
        Artist(string nume, int varsta, int num_albume, Album albume[]);
     void afisare();
     void maxDuration();
     void sortAlbum();
      void inInterval(int ageStart, int ageFinish);
      void addAlbum();
      void deleteAlbum(int num_album);
      void updateAlbum(int num_album);
      int return_num_album();
      int return_num_track(int num_album);
      void readFile();
      void saveFile();
        int num_albume,num_track;
        Album *albume;
    ;
};

#endif // ARTIST_H
