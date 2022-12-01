#include <iostream>
#include <time.h>

#define nr_maxim 15

using namespace std;

const int INF=999 ;
int muchie[3];
int nr_varf[3] = {5, 10, 15};

int parinte[nr_maxim] = { 0 }, vizitat[nr_maxim] = { 0 };
int grafPrim[nr_maxim][nr_maxim],grafKrusk[nr_maxim][nr_maxim];
int it1 = 0, it2 = 0;

void afisare_graf(int nr_varf)
{
    cout<<"Graful reprezentat prin matricea de adiacenta ponderata:"<<endl;
    for(int i = 0; i < nr_varf; i++)
    {
        for(int j = 0; j < nr_varf; j++)
            if(grafPrim[i][j] != 999)
                cout << grafPrim[i][j] << " ";
            else cout << "0 ";
        cout << endl;
    }
}

void initializare()
{
    it1 = it2 = 0;

    for(int i = 0; i < nr_maxim; i++)
    {
       vizitat[i] = 0;
        parinte[i] = 0;
        for(int j = 0; j  < nr_maxim; j++)
        {
            grafPrim[i][j] = 0;
            grafKrusk[i][j] = 0;
        }
    }
}

void creare_graf(int nr_varf,int dens)
{
    int k = 0, i = 0, j = 0;
    cout <<"\nNr de muchii: "<<muchie[dens] << endl;

    for(i = 0; i < nr_varf; i++)
        for(j = i + 1; j < nr_varf; j++)
        {
            if(k < muchie[dens])
            {
                int r = rand() % 80 + 1;
                grafPrim[i][j] = r;
                grafPrim[j][i] = grafPrim[i][j];
                grafKrusk[i][j] = r;
                grafKrusk[j][i] = grafKrusk[i][j];
                k++;
            }
        }

    for(int i = 0; i < nr_varf; i++)
        for(int j = 0; j < nr_varf; j++)
            if(!grafPrim[i][j] && i != j)
            {
                grafPrim[i][j] = INF;
                grafKrusk[i][j] = INF;
            }
}

//============================PRIM==========================
void Prim(int n)
{
    int i, p, min, k,x=0;
    vizitat[x]=1;
    for(i=1; i<=n; i++)
    {
        parinte[i]=x;
        it1++;
    }
   parinte[x]=0;
    for(k=1; k<=n-1; k++)
    {
        min=INF;
        p=0;
        it1++;
        for(i=1; i<=n; i++)
        {
            it1++;
            if(!vizitat[i] && min>grafPrim[i][parinte[i]])
            {
                min=grafPrim[i][parinte[i]];
                p=i;
                it1++;
            }
            vizitat[p]=1;
        }
        for(i=1; i<=n; i++)
        {
            it1++;
            if(!vizitat[i] && grafPrim[i][parinte[i]]>grafPrim[i][p])
               {
                   parinte[i]=p;
                   it1++;
               }
        }
    }
     cout << "Numarul de iteratii(p) : " << it1 << endl;
}
//===============================KRUSKAL==========================
int find(int i)
{
    while(parinte[i])
    {
        i = parinte[i];
        it2++;
    }
    return i;
}

void UNION(int x, int y)
{
    it2++;
    if(x != y)
        parinte[y] = x;
}

void kruskal(int nr_varf)
{
    int u,v,x,y,n=0,minimum;

    while(n < nr_varf - 1)
    {
        it2++;
        minimum = INF;
        for(int i = 0; i < nr_varf; i++)
        {
            it2++;
            for(int j = 0; j < nr_varf; j++)
            {
                it2++;
                if(grafKrusk[i][j] < minimum && i != j)
                {
                    it2++;
                    minimum = grafKrusk[i][j];
                    x = i;
                    y = j;
                }
            }
        }
        u = find(x);
        v = find(y);
        UNION(u,v);
        grafKrusk[x][y] = grafKrusk[y][x] = INF;
        n++;
    }
    cout << "Numarul de iteratii(k) : " << it2 << endl;
}
int main()
{
    srand(time(NULL));
    for(int i = 0; i < 3; i++)
    {
        muchie[0] = nr_varf[i]-1;
        muchie[1] = nr_varf[i] * (nr_varf[i]-1)/4;
        muchie[2] = nr_varf[i] * (nr_varf[i]-1)/2;
        for(int j = 0; j < 3; j++)
        {
            switch(j)
            {
            case 0 :
                cout << "Graf caz favorabil cu " << nr_varf[i] << " varfuri.";
                break;
            case 1 :
                cout << "Graf caz mediu cu " << nr_varf[i] << " varfuri.";
                break;
            case 2 :
                cout << "Graf caz defavorabil cu " << nr_varf[i] << " varfuri.";
                break;
            }

            initializare();
            creare_graf(nr_varf[i],j);
            Prim(nr_varf[i]);
            for(int i=0; i<nr_varf[i];i++)
            {
                parinte[i]=0;
                vizitat[i]=0;
            }
            kruskal(nr_varf[i]);
            cout << endl;
        }
    }

    return 0;
}
