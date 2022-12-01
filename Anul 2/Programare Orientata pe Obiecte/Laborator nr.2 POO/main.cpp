#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Patrat
{
private:
    double perimetru,arie;
public:
    double *latura= new double;
    Patrat(double *a)
    {
        latura=a;
    }
    double calculeaza_arie(double latura)
    {
        arie=latura*latura;
        return arie;
    }
    double calculeaza_perimetru(double latura)
    {
        perimetru=4*latura;
        return perimetru;
    }
    ~Patrat()
    {
        delete latura;
    }
};

class Student
{
public:
    char *nume=new char[30],*prenume=new char[30];
    double nota1,nota2,nota3;
    double media;
    Student()
    {
       cout<<"\nIntrodu numele:";
       cin>>nume;
       cout<<"Introdu prenumele:";
       cin>>prenume;
       cout<<"Introdu notele:";
       cin>>nota1>>nota2>>nota3;
    }

    Student(double n1,double n2,double n3,char* nume1,char* prenume1)
    {
        nota1=n1;
        nota2=n2;
        nota3=n3;
        this->nume=nume1;
        this->prenume=prenume1;
        media=double((nota1+nota2+nota3)/3);

    }
   Student (const Student &p)
   {
       nota1=p.nota1-1;
       if(nota1<1) nota1=5;
       nota2=p.nota2-1;
       if(nota2<1 ) nota2=5;
       nota3=p.nota3-1;
       if(nota3<1) nota3=5;
   }
   ~Student()
    {
        cout<<"\nStudentul a fost eliminat!!!";
        delete nume;
        delete prenume;
    }
    void print();
};

void Student::print()
   {
        cout<<"Numele: "<<nume<<endl;
        cout<<"Prenumele: "<<prenume<<endl;
        cout<<"Notele: "<<nota1<<" "<<nota2<<" "<<nota3<<endl;
        media=double((nota1+nota2+nota3)/3);
        cout<<"Media este: "<<double(media)<<endl;
   }
int main()
{
    cout<<"Sarcina 1:";
    double *latura1=new double;
    cout<<"\nIntrodu latura patratului: ";
    cin>>*latura1;
    Patrat ABCD(latura1);
    double arie1=ABCD.calculeaza_arie(*ABCD.latura);
    double perimetru1=ABCD.calculeaza_perimetru(*ABCD.latura);
    cout<<"Arie: "<<arie1<<endl;
    cout<<"Perimetru: "<<perimetru1;

//-----------------------------------------------------------------
cout<<"\nSarcina 2:";
cout<<"\nIntrodu informatia despre studentul 1:";
Student utm1;
char nume1[30],prenume1[30];
double n1,n2,n3;
cout<<"\nIntrodu informatia despre studentul 2:";
cout<<"\nIntrodu numele:";
cin>>nume1;
cout<<"Introdu prenumele:";
cin>>prenume1;
cout<<"Introdu notele:";
cin>>n1>>n2>>n3;
Student utm2(n1,n2,n3,nume1,prenume1);

Student utm3(utm2);
cout<<"\nIntrodu informatia despre studentul 3:";
cout<<"\nIntrodu numele:";
cin>>utm3.nume;
cout<<"Introdu prenumele:";
cin>>utm3.prenume;
cout<<"Studentul nr.3 are deja note!!!"<<endl;
cout<<"\nAfisam informatia despre studenti nostri:"<<endl;
cout<<"\nStudentul 1:";
utm1.print();
cout<<"\nStudentul 2:";
utm2.print();
cout<<"\nStudentul 3:";
utm3.print();

if(utm1.media>utm2.media && utm1.media>utm3.media) cout<<"\nStudentul "<<utm1.nume<<" "<<utm1.prenume<<" are media cea mai mare si este: "<<utm1.media;
else  if(utm2.media>utm1.media && utm2.media>utm3.media) cout<<"\nStudentul "<<utm2.nume<<" "<<utm2.prenume<<" are media cea mai mare si este:"<<utm2.media;
else  if(utm3.media>utm1.media && utm3.media>utm2.media) cout<<"\nStudentul "<<utm1.nume<<" "<<utm1.prenume<<" are media cea mai mare si este:"<<utm3.media;
return 0;
}
