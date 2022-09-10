#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
struct Numar_complex
{
    double Re;
    double Im;
};
struct Fractii
{
    int Numarator;
    int Numitor;
};
struct Prieten
{
    char Nume[30];
    int Ziua;
    int Luna;
    int Anul;
};
 struct data
{
    int ziua;
    int luna;
    int anul;
}data1,data2;

struct paralelograme
{
  char Denumire[20];
  double Lungime;
  double Latime;
  double Unghi;
  char Diagonala1[5];//denumirea primei diagonale a paralelogramului//
  char Diagonala2[5];//denumirea diagonalei a 2 a paralelogramului//
};
struct triunghiuri
{
   char Denumire[4];
   double Latura1;
   double Latura2;
   double Latura3;
   double Unghi1;
   double Unghi2;
   double Unghi3;
};
struct grupa
{
    char Nume[15],Prenume[15];
    char Sex[15];
    int Ziua_nasterii;
    int Luna_nasterii;
    int Anul_nasterii;
    int Nota_sesiune;
};


int main()
{
    printf("Ex.1 pag.101");
    struct Numar_complex nrc1,nrc2;//nrc1=numar complex 1//
    nrc1.Re=3;//Partea reala a primului nr complex//
    nrc1.Im=4;//Partea imaginara a primului nr complex//
    nrc2.Re=4;
    nrc2.Im=3;
    printf("\n\nAdunarea a 2 numere complexe:");
    printf("\nPrimul nr complex este: %.0lf + %.0lfi",nrc1.Re,nrc1.Im);
    printf("\nAl doilea nr complex este: %.0lf + %.0lfi",nrc2.Re,nrc2.Im);
    printf("\nSuma a primului nr complex cu al doilea este numar complex  : ");
    printf("%.0lf + %.0lfi",nrc1.Re+nrc2.Re,nrc1.Im+nrc2.Im);

    printf("\n\nScaderea a 2 numere complexe:");//voi folosi aceleasi numere complexe de la primul ex//
    printf("\nDiferenta dintre  primul nr complex cu al doilea este numarul complex  : ");
    printf("%.0lf +%.0lfi",nrc1.Re-nrc2.Re,nrc1.Im-nrc2.Im);

    printf("\n\nInmultirea a 2 numere complexe");
    printf("\nInmultirea dintre  primul nr complex cu al doilea este numarul complex  : ");
    printf("%.0lf +%.0lfi", (nrc1.Re*nrc2.Re) - (nrc1.Im*nrc2.Im),(nrc1.Re*nrc2.Im) + (nrc1.Im*nrc2.Re));//inmultirea a doua numere complexe

    printf("\n\nImpartirea a 2 nr complexe:");
    printf("\nImpartirea dintre  primul nr complex cu al doilea este numarul complex  : ");
    printf("%.2lf +%.2lfi", ((nrc1.Re*nrc2.Re) + (nrc1.Im*nrc2.Im))/(pow(nrc2.Re,2)+pow(nrc2.Im,2)),-((nrc1.Re*nrc2.Im) - (nrc1.Im*nrc2.Re))/(pow(nrc2.Re,2)+pow(nrc2.Im,2)));//inmultirea a doua numere complexe

    printf("\n\nEx.2 pag.101");
    struct Fractii fr1,fr2;//fr1 = fractie 1 , fr2 fractie 2//
    fr1.Numarator=1;fr1.Numitor=2;
    fr2.Numarator=3;fr2.Numitor=4;

    printf("\n\nAfisam cele 2 fractii:");
    printf("\nPrima fractie este: %d/%d",fr1.Numarator,fr1.Numitor);
    printf("\nA doua fractie este : %d/%d",fr2.Numarator,fr2.Numitor);

    printf("\n\nAdunarea celor 2 fractii:");
    printf("%d/%d",(fr1.Numarator*fr2.Numitor+fr2.Numarator*fr1.Numitor),(fr1.Numitor*fr2.Numitor));

    printf("\n\nScaderea celor 2 fractii:");
    printf("%d/%d",(fr1.Numarator*fr2.Numitor-fr2.Numarator*fr1.Numitor),(fr1.Numitor*fr2.Numitor));

    printf("\n\nInmultirea celor 2 fractii:");
    printf("%d/%d",(fr1.Numarator*fr2.Numarator),(fr1.Numitor*fr2.Numitor));

    printf("\n\nImpartirea a celor fractii:");
    printf("%d/%d",(fr1.Numarator*fr2.Numitor),(fr1.Numitor*fr2.Numarator));

    printf("\n\nEx.3 pag.101\n");
    struct Prieten prieten1,prieten2,prieten3;
    strcpy(prieten1.Nume,"Sergiu");
    strcpy(prieten2.Nume,"Ion");
    strcpy(prieten3.Nume,"Andrei");
    prieten1.Ziua=12; prieten1.Luna=10; prieten1.Anul=2005;
    prieten2.Ziua=23; prieten2.Luna=2; prieten2.Anul=2001;
    prieten3.Ziua=31; prieten3.Luna=3; prieten3.Anul=2004;

    if((prieten1.Anul<prieten2.Anul) && (prieten1.Anul<prieten3.Anul))
    {
        printf("\nPritenul mai mare este %s",prieten1.Nume);
    }
    else if ((prieten1.Anul<prieten2.Anul) && (prieten3.Anul<prieten1.Anul))
    {
        printf("\nPritenul mai mare este %s",prieten3.Nume);
    }
    else if ((prieten2.Anul<prieten1.Anul) && (prieten2.Anul<prieten3.Anul))
    {
        printf("\nPritenul mai mare este %s",prieten2.Nume);
    }

    printf("\n\nEx.4 pag.101");
    data1.ziua=9;data1.luna=12;data1.anul=2021;// data curenta//
    printf("\nVirsta lui Sergiu  in ani este %d",data1.anul-prieten1.Anul);

    printf("\n\nEx.8 pag.101-102");
    struct data data3;
    int numarul_de_zile_a_lunii[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("\na)");
    data3.ziua=17;data3.luna=12;data3.anul=2021;

    if((data3.anul % 4 == 0) && !(data3.anul % 100 == 0)|| (data3.anul % 400 == 0))
    numarul_de_zile_a_lunii[1] = 29; //an bisect
    else
    numarul_de_zile_a_lunii[1] = 28; //an nebisect
    int n=20;
    data3.ziua=data3.ziua+n;
    while (data3.ziua>numarul_de_zile_a_lunii[data3.luna-1])
    {
        data3.ziua=data3.ziua-numarul_de_zile_a_lunii[data3.luna-1];
        data3.luna=data3.luna+1;
        if(data3.luna>12)
        {
            data3.luna=1;
            data3.anul=data3.anul+1;
        }
    }
    printf("\nData dupa %d zile este:%d %d %d",n,data3.ziua,data3.luna,data3.anul);


    printf("\n\nEx.9 pag 102");
    if((prieten1.Anul<prieten2.Anul) && (prieten1.Anul<prieten3.Anul)&&(prieten2.Anul<prieten3.Anul))
    {
        printf("\nPritenul mijlociu este %s",prieten2.Nume);
    }
    else if ((prieten1.Anul<prieten2.Anul) && (prieten3.Anul<prieten1.Anul))
    {
        printf("\nPritenul mijlociu este %s",prieten1.Nume);
    }
    else if ((prieten2.Anul<prieten1.Anul) && (prieten2.Anul<prieten3.Anul))
    {
        printf("\nPritenul mijlociu este %s",prieten3.Nume);
    }

    printf("\n\nEx.12 pag.103");
    struct paralelograme paralelogram1,paralelogram2;
    strcpy(paralelogram1.Denumire,"ABCD");
    strcpy(paralelogram2.Denumire,"PQRS");
    paralelogram1.Latime=2; paralelogram1.Lungime=4;paralelogram1.Unghi=1.0471975;//60 de grade in radiani este 1,0471975//
    paralelogram2.Latime=12; paralelogram2.Lungime=14;paralelogram2.Unghi=1.5707963;
    printf("\na)");//1.5707963 ==90 d egrade in radiani//
    if ((paralelogram1.Latime!=paralelogram1.Lungime)&&(paralelogram1.Unghi!=1.5707963))
    {
        printf("\nParalelogramul %s e unul arbitrar!",paralelogram1.Denumire);
    }
    else if ((paralelogram1.Latime!=paralelogram1.Lungime)&&(paralelogram1.Unghi==1.5707963))
    {
        printf("\nParalelogramul %s e si un dreptunghi !",paralelogram1.Denumire);
    }
    else if ((paralelogram1.Latime==paralelogram1.Lungime)&&(paralelogram1.Unghi!=1.5707963))
    {
        printf("\nParalelogramul %s e si un romb !",paralelogram1.Denumire);
    }
    else
    {
        printf("\nParalelogramul %s e si un patrat !",paralelogram1.Denumire);
    }
    if ((paralelogram2.Latime!=paralelogram2.Lungime)&&(paralelogram2.Unghi!=1.5707963))
    {
        printf("\nParalelogramul %s e unul arbitrar!",paralelogram2.Denumire);
    }
    else if ((paralelogram2.Latime!=paralelogram2.Lungime)&&(paralelogram2.Unghi==1.5707963))
    {
        printf("\nParalelogramul %s e si un dreptunghi !",paralelogram2.Denumire);
    }
    else if ((paralelogram2.Latime==paralelogram2.Lungime)&&(paralelogram2.Unghi!=1.5707963))
    {
        printf("\nParalelogramul %s e si un romb !",paralelogram2.Denumire);
    }
    else
    {
        printf("\nParalelogramul %s e si un patrat !",paralelogram2.Denumire);
    }
    printf("\n\nb)");
    double Perimetru,Arie;
    Perimetru=2*(paralelogram1.Latime+paralelogram1.Lungime);
    Arie=paralelogram1.Latime*paralelogram1.Lungime*sin(paralelogram1.Unghi);
    printf("\nParalelogramul %s are perimetrul=%lf si aria=%lf",paralelogram1.Denumire,Perimetru,Arie);

    Perimetru=0; Arie=0;
    Perimetru=2*(paralelogram2.Latime+paralelogram2.Lungime);
    Arie=paralelogram2.Latime*paralelogram2.Lungime*sin(paralelogram2.Unghi);
    printf("\nParalelogramul %s are perimetrul=%lf si aria=%lf",paralelogram2.Denumire,Perimetru,Arie);

    printf("\n\nc)");
    strcpy(paralelogram1.Diagonala1,"AC");strcpy(paralelogram1.Diagonala2,"BD");
    strcpy(paralelogram2.Diagonala1,"PR");strcpy(paralelogram2.Diagonala2,"QS");
    printf("\nParalelogramul %s are diagonalele %s si %s",paralelogram1.Denumire,paralelogram1.Diagonala1,paralelogram1.Diagonala2);
    printf("\nParalelogramul %s are diagonalele %s si %s",paralelogram2.Denumire,paralelogram2.Diagonala1,paralelogram2.Diagonala2);

    printf("\n\nEx.13 pag.102");
    struct triunghiuri triunghi1,triunghi2;
    strcpy(triunghi1.Denumire,"ABC");strcpy(triunghi2.Denumire,"MNP");
    triunghi1.Latura1=6;triunghi1.Latura2=8;triunghi1.Latura3=12;
    triunghi2.Latura1=2;triunghi2.Latura2=2;triunghi2.Latura3=3;
    triunghi1.Unghi1=0.785398;triunghi1.Unghi2=1.0471975;//45 si 60 de grade//
    triunghi2.Unghi1=2.09439510; triunghi2.Unghi2=0.5235987;//120 si 30 de grade

    triunghi1.Unghi3=3.14159265-triunghi1.Unghi1-triunghi1.Unghi2;
    printf("\nUnghiul al 3 a triunghiului %s este %lf",triunghi1.Denumire,triunghi1.Unghi3);

    triunghi2.Unghi3=3.14159265-triunghi2.Unghi1-triunghi2.Unghi2;
    printf("\nUnghiul al 3 a triunghiului %s este %lf",triunghi2.Denumire,triunghi2.Unghi3);

    printf("\na)");
    if((triunghi1.Latura1==triunghi1.Latura2)&&(triunghi1.Latura2==triunghi1.Latura3))
    {
        printf("\nTriunghiul %s e echilateral",triunghi1.Denumire);
    }
    else if((triunghi1.Latura1==triunghi1.Latura2)&&(triunghi1.Latura2!=triunghi1.Latura3))
    {
        printf("\nTriunghiul %s e isoscel",triunghi1.Denumire);
    }
    else
    {
        printf("\nTriunghiul %s e scalen",triunghi1.Denumire);
    }

    if ((triunghi1.Unghi1==1.5707963)||(triunghi1.Unghi2==1.5707963)||(triunghi1.Unghi3==1.5707963))
    {
        printf("\nTriunghiul %s este dreptunghic",triunghi1.Denumire);
    }
    else if ((triunghi1.Unghi1>1.5707963)||(triunghi1.Unghi2>1.5707963)||(triunghi1.Unghi3>1.5707963))
    {
        printf("\nTriunghiul %s este obtuzunghic",triunghi1.Denumire);
    }
    else  if ((triunghi1.Unghi1<1.5707963)&&(triunghi1.Unghi2<1.5707963)&&(triunghi1.Unghi3<1.5707963))
    {
        printf("\nTriunghiul %s este ascutitunghic",triunghi1.Denumire);
    }
    printf("\n");
    if((triunghi2.Latura1==triunghi2.Latura2)&&(triunghi2.Latura2==triunghi2.Latura3))
    {
        printf("\nTriunghiul %s e echilateral",triunghi2.Denumire);
    }
    else if((triunghi2.Latura1==triunghi2.Latura2)&&(triunghi2.Latura2!=triunghi2.Latura3))
    {
        printf("\nTriunghiul %s e isoscel",triunghi2.Denumire);
    }
    else
    {
        printf("\nTriunghiul %s e scalen",triunghi2.Denumire);
    }

    if ((triunghi2.Unghi1==1.5707963)||(triunghi2.Unghi2==1.5707963)||(triunghi2.Unghi3==1.5707963))
    {
        printf("\nTriunghiul %s este dreptunghic",triunghi2.Denumire);
    }
    else if ((triunghi2.Unghi1>1.5707963)||(triunghi2.Unghi2>1.5707963)||(triunghi2.Unghi3>1.5707963))
    {
        printf("\nTriunghiul %s este obtuzunghic",triunghi2.Denumire);
    }
    else  if ((triunghi2.Unghi1<1.5707963)&&(triunghi2.Unghi2<1.5707963)&&(triunghi2.Unghi3<1.5707963))
    {
        printf("\nTriunghiul %s este ascutitunghic",triunghi2.Denumire);
    }
    printf("\nb)");
    double semiperimetru;
    Perimetru=0;
    Arie=0;

    Perimetru=triunghi1.Latura1+triunghi1.Latura2+triunghi1.Latura3;
    semiperimetru=Perimetru/2;
    Arie=sqrt(semiperimetru*(semiperimetru-triunghi1.Latura1)*(semiperimetru-triunghi1.Latura2)*(semiperimetru-triunghi1.Latura3));
    printf("\nTriunghiul %s are perimetrul=%lf si aria=%lf",triunghi1.Denumire,Perimetru,Arie);

    semiperimetru=0;Perimetru=0;Arie=0;
    Perimetru=triunghi2.Latura1+triunghi2.Latura2+triunghi2.Latura3;
    semiperimetru=Perimetru/2;
    Arie=sqrt(semiperimetru*(semiperimetru-triunghi2.Latura1)*(semiperimetru-triunghi2.Latura2)*(semiperimetru-triunghi2.Latura3));
    printf("\nTriunghiul %s are perimetrul=%lf si aria=%lf",triunghi2.Denumire,Perimetru,Arie);

    printf("\n\nEx.6 pag.101");
    struct data data4,data5;
    data4.ziua=12; data4.luna=12; data4.anul=2021;
    data5.ziua=31; data5.luna=12; data5.anul=2021;
    if ((data4.luna==data5.luna)&&(data4.anul==data5.anul))
    {
        printf("\nDiferenta de zile dintre prima data si a doua este de %d zile",data5.ziua-data4.ziua);
    }

    printf("\n\nEx.5 pag.101");
    struct data data6;
    char ziua[10]="Duminica";
    int nr_zile[12]={31,28,31,30,31,30,31,31,30,31,30,31},zi,zile_totale;//nr de zile de la inceputul anului//
    data6.ziua=31;data6.luna=12;data6.anul=2021;
    if((data6.anul % 4 == 0) && !(data6.anul % 100 == 0)|| (data6.anul % 400 == 0))
    nr_zile[1] = 29; //an bisect
    else
    nr_zile[1] = 28; //an nebisect
    if(strcmp(ziua,"Luni")==0) zi=1;
    else if(strcmp(ziua,"Marti")==0) zi=2;
    else if(strcmp(ziua,"Miercuri")==0) zi=3;
    else if(strcmp(ziua,"Joi")==0) zi=4;
    else if(strcmp(ziua,"Vineri")==0) zi=5;
    else if(strcmp(ziua,"Simbata")==0) zi=6;
    else if(strcmp(ziua,"Duminica")==0) zi=7;

    switch(data6.luna)
    {
        case 1:zile_totale=data6.ziua;break;
        case 2:zile_totale=nr_zile[0]+data6.ziua;break;
        case 3:zile_totale=nr_zile[1]+nr_zile[0]+data6.ziua;break;
        case 4:zile_totale=nr_zile[2]+nr_zile[1]+nr_zile[0]+data6.ziua;break;
        case 5:zile_totale=nr_zile[3]+nr_zile[2]+nr_zile[1]+nr_zile[0]+data6.ziua;break;
        case 6:zile_totale=nr_zile[4]+nr_zile[3]+nr_zile[2]+nr_zile[1]+nr_zile[0]+data6.ziua;break;
        case 7:zile_totale=nr_zile[5]+nr_zile[4]+nr_zile[3]+nr_zile[2]+nr_zile[1]+nr_zile[0]+data6.ziua;break;
        case 8:zile_totale=nr_zile[6]+nr_zile[5]+nr_zile[4]+nr_zile[3]+nr_zile[2]+nr_zile[1]+nr_zile[0]+data6.ziua;break;
        case 9:zile_totale=nr_zile[7]+nr_zile[6]+nr_zile[5]+nr_zile[4]+nr_zile[3]+nr_zile[2]+nr_zile[1]+nr_zile[0]+data6.ziua;break;
        case 10:zile_totale=nr_zile[8]+nr_zile[7]+nr_zile[6]+nr_zile[5]+nr_zile[4]+nr_zile[3]+nr_zile[2]+nr_zile[1]+nr_zile[0]+data6.ziua;break;
        case 11:zile_totale=nr_zile[9]+nr_zile[8]+nr_zile[7]+nr_zile[6]+nr_zile[5]+nr_zile[4]+nr_zile[3]+nr_zile[2]+nr_zile[1]+nr_zile[0]+data6.ziua;break;
        case 12:zile_totale=nr_zile[10]+nr_zile[9]+nr_zile[8]+nr_zile[7]+nr_zile[6]+nr_zile[5]+nr_zile[4]+nr_zile[3]+nr_zile[2]+nr_zile[1]+nr_zile[0]+data6.ziua;break;
    }
     printf("\nZile totale de la inceputul anului:%d",zile_totale);
     int nr_aparitii_zi=0;
     while(zi<=zile_totale)
     {
         nr_aparitii_zi++;
         zi+=7;
     }
    printf("\nDe la inceputul anului au fost %d zile de %s ",nr_aparitii_zi,ziua);

///10 exercitii


    return 0;
}

