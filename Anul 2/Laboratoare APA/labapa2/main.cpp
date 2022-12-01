#include <iostream>
#include <time.h>
#define maxim 10000
using namespace std;
int it1,it2,it3;
void print_array(int t[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<t[i]<<" ";
    }
}
void adauga_elemente_crescator(int t[],int n)
{
    for(int i=0;i<n;i++)
    {
        t[i]=i;
    }
}
void adauga_elemente_descrescator(int t[],int n)
{
    int nr=0;
    for(int i=n;i>=0;i--)
    {
        t[i]=nr++;
    }
}
void adauga_elemente_random(int t[],int n)
{
    for(int i=0;i<n;i++)
    {
        t[i]=rand()%n;
    }
}
void bubble_sort(int t[], int n)
{
    bool flag;
	do{
		flag = true;
		for(int i = 0; i < n-1; i++){
			if(t[i] > t[i+1]){
				flag = false;
				int temp = t[i];
				t[i] = t[i+1];
				t[i+1] = temp;
			}
			it1++;
		}
		it1++;
	}while(!flag);
}
void merge_array(int inceput,int mijloc,int sfirsit,int tablou[])
{
    int temp[maxim];
    int i=inceput,k=inceput,j=mijloc+1;
    while((i<=mijloc)&&(j<=sfirsit))
    {
        if(tablou[i]<=tablou[j]) temp[k++]=tablou[i++];
            else temp[k++]=tablou[j++];
            it2++;
    }
    while(i<=mijloc)
    {
        temp[k++]=tablou[i++];
        it2++;
    }
    while(j<=sfirsit)
    {
        temp[k++]=tablou[j++];
        it2++;
    }
    for(i=inceput;i<=sfirsit;i++)
    {
        tablou[i]=temp[i];
        it2++;
    }
}
void merge_sort(int inceput,int sfirsit,int tablou[])
{
    if(inceput!=sfirsit)
    {
        it2++;
        int mijloc=(inceput+sfirsit)/2;
        merge_sort(inceput,mijloc,tablou);
        merge_sort(mijloc+1,sfirsit,tablou);
        merge_array(inceput,mijloc,sfirsit,tablou);
    }
}
// QUICK SORT
void schimb(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partitie(int tablou[], int inceput, int sfirsit){
    int pivot = tablou[sfirsit];
    int i = (inceput-1);

    for (int j = inceput; j <= sfirsit - 1; j++){
        if (tablou[j] <= pivot) {
                i++;
            schimb(&tablou[i], &tablou[j]);
        }
		it3++;
    }
    schimb(&tablou[i + 1], &tablou[sfirsit]);
    return (i + 1);
}

void quickSort(int tablou[], int inceput, int sfirsit){
    if (inceput < sfirsit) {
		it3++;
        int pi = partitie(tablou, inceput, sfirsit);
        quickSort(tablou, inceput, pi - 1);
        quickSort(tablou, pi + 1, sfirsit);
    }
}
int main()
{
    int numere[]={10,100,300,500,800,1000};
    int n=sizeof numere/ sizeof numere[0],t1[1000];
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
    cout<<"\n--------------------------------------------------------------------";
    cout<<"\n\nAlgoritmul Bubble Sort pentru "<<numere[i]<<" elemente";
    adauga_elemente_crescator(t1,numere[i]);
    bubble_sort(t1,numere[i]);
    cout<<"\nTabloul cu elemente adaugate crescator: "<<it1<<" iteratii";
    it1=0;

    adauga_elemente_random(t1,numere[i]);
    bubble_sort(t1,numere[i]);
    cout<<"\nTabloul cu elemente adaugate random:"<<it1<<" iteratii";
    it1=0;

    adauga_elemente_descrescator(t1,numere[i]);
    bubble_sort(t1,numere[i]);
    cout<<"\nTabloul cu elemente adaugate descrescator:"<<it1<<" iteratii";;
    it1=0;

    cout<<"\n-----------------------------------------------------------";
    cout<<"\nAlgorimul Merge sort pentru  "<<numere[i]<<" elemente";
    adauga_elemente_crescator(t1,numere[i]);
    merge_sort(0,numere[i]-1,t1);
    cout<<"\nTabloul cu elemente adaugate crescator: "<<it2<<" iteratii";
    it2=0;

    adauga_elemente_random(t1,n);
    merge_sort(0,numere[i]-1,t1);
    cout<<"\nTabloul cu elemente adaugate random: "<<it2<<" iteratii";
    it2=0;

    adauga_elemente_descrescator(t1,n);
    merge_sort(0,numere[i]-1,t1);
    cout<<"\nTabloul cu elemente adaugate descrescator: "<<it2<<" iteratii";
    it2=0;

    cout<<"\n-----------------------------------------------------";
    cout<<"\nAlgorimul Quick sort pentru "<<numere[i]<<" elemente";
    adauga_elemente_crescator(t1,numere[i]);
    quickSort(t1,0,numere[i]-1);
    cout<<"\nTabloul cu elemente adaugate crescator: "<<it3<<" iteratii";
    it3=0;

    adauga_elemente_random(t1,numere[i]);
    quickSort(t1,0,numere[i]-1);
    cout<<"\nTabloul cu elemente adaugate random: "<<it3<<" iteratii";
    it3=0;

    adauga_elemente_descrescator(t1,numere[i]);
    quickSort(t1,0,numere[i]-1);
    cout<<"\nTabloul cu elemente adaugate descrescator: "<<it3<<" iteratii";
    it3=0;
    }

    return 0;
}

