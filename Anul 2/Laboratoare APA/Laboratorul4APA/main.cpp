#include<iostream>
#include<iomanip>
using namespace std;
#define INF 999
#define MAX 15
int nod_start, cost[MAX][MAX];
int distanta[MAX];
bool vizitat[MAX]= { 0 };
int parent[MAX];
int it1,it2;
int virfuri[3]={5,10,15},muchii[3];
void initializare(int n)
{
    it1=it2=0;
    for(int i=0 ; i < n ; i++)
    {
        distanta[i] = INF ;
        parent[i]=i;
    }
    distanta[nod_start] = 0 ;
}
void creare_graf(int n,int dens){
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(j > i){
				int r = rand() % 10 + 1;
				if(r <= muchii[dens]){
					r = rand() % 20 + 1;
					cost[i][j] = r;
				}
			} else if(i > j){
				cost[i][j] = cost[j][i];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
          if(i!=j && cost[i][j]==0)
          {
              cost[i][j]=INF;
          }
        }
}
}
void printGraf(int nrVarf){
	for(int i = 0; i < nrVarf; i++){
		for(int j = 0; j < nrVarf; j++)
			cout <<setw(4)<<cost[i][j] << " ";
		cout << endl;
	}
}
int getNearest(int n)
{
    int minvalue =INF ;
    int minnode=0;
    for(int i =0 ; i<n; i++)
    {
        it1++;
        if(!vizitat[i] && distanta[i] < minvalue)
        {
            minvalue = distanta[i] ;
            minnode = i;
           it1++;
        }
    }
    return minnode ;
}
void dijkstra(int n)
{
    for(int i=0; i<n; i++)
    {
        int k = getNearest(n) ;
        vizitat[k]=true ;
        it1++;
        for(int j=0; j < n ; j++)
        {
            it1++;
            if(cost[k][j]!=INF && distanta[j]>distanta[k]+cost[k][j] )
            {
                it1++;
                distanta[j]=distanta[k]+cost[k][j];
                parent[j]=k ;
            }
        }
    }
    //afisare_drum_dijkstra(n);
    cout<<"\nNumarul de iteratii Dijkstra: "<<it1<<endl;
}
void afisare_drum_dijkstra(int n)
{
    cout<<"Node:\t\t\tCost :\t\t\tPath \n";

    for(int i=0; i<n; i++)
    {
        cout<<i+1<<"\t\t\t"<<distanta[i]<<"\t\t\t"<<" ";

        cout<<i+1<<" ";
        int parnode=parent[i];
        while(parnode!=nod_start)
        {
            cout<<" <-- "<<parnode+1<<" ";
            parnode=parent[parnode];
        }
        cout<<" <-- "<<nod_start+1;
        cout<<endl;
    }
}
void afisare_drum_floyd(int n,int D[][MAX]);
void floyd(int n)
{
    int D[n][n], i, j, k;

    for (i = 0; i < n; i++)
    {
        it2++;
        for (j = 0; j < n; j++)
        {
            D[i][j] = cost[i][j];
            it2++;
        }
    }

    for (k = 0; k < n; k++)
    {
        it2++;
        for (i = 0; i < n; i++)
        {
            it2++;
            for (j = 0; j < n; j++)
            {
                D[i][j]=min(D[i][j],D[i][k]+D[k][j]);//Dacă vârful k se află pe calea cea mai scurtă de la i la j,
                it2++;                               //atunci se actualizeaza valoarea lui D[i][j]
            }
        }
    }
    cout<<"Numarul de iteratii Floyd: "<<it2<<endl;
    //afisare_drum_floyd(D);

}
void afisare_drum_floyd(int n,int D[][MAX])
{
    cout<<"\n------------------------Algoritmul floyd-----------------------------";
    cout<<endl<<"Matricea distantelor minime:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (D[i][j] == INF)
                cout<<setw(4)<<"INF";
            else
                cout<<setw(4)<<D[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    for(int i = 0; i < 3; i++){
        muchii[0]=virfuri[i]-1;
        muchii[1]=virfuri[i]*(virfuri[i]-1)/4;
        muchii[2]=virfuri[i]*(virfuri[i]-1)/2;
        for(int j = 0; j < 3; j++)
        {
            switch(j)
            {
            case 0 :
                cout << "\nCaz favorabil  " << virfuri[i] << " varfuri." << endl;
                break;
            case 1 :
                cout << "\nCaz mediu  " << virfuri[i] << " varfuri." << endl;
                break;
            case 2 :
                cout << "\nCaz defavorabil  " << virfuri[i] << " varfuri." << endl;
                break;
            }
            initializare(virfuri[i]);
            creare_graf(virfuri[i],j);
            //printGraf(virfuri[i]);
            dijkstra(virfuri[i]);
            floyd(virfuri[i]);
        }
    }
    return 0;
}
