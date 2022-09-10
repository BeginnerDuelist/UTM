#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
long factorial(int n)
{
    int factoral_n=1;
  for(int i=1;i<=n;i++)
  {
      factoral_n*=i;
  }
  return factoral_n;
}
int cel_mai_mare_divizor(int m,int n)
{
        int p;//p pastreaza valorii restului impartiree lui m la n
        while(n!=0)
        {
                p=m%n;
                m=n;
                n=p;
        }
        return(m);
}
void suma_seriei(double termen_general)
{
    double suma=0;
    for(int i=0;i<=8;i++)
    {
        if(i%2==0)
        {
            suma+=pow(termen_general,i);
        }
    }
    printf("\nSuma seriei este %lf",suma);
}
void confirmare_triunghi_aflare_periemtru_si_arie(int a,int b,int c)
{
    double perimetru=0,arie=0,semiperimetru;
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        printf("\nExista un triunghi cu laturile %d %d %d",a,b,c);
        perimetru=a+b+c;
        printf("\na)Perimetrul acestui triunghi este %.2lf",perimetru);
        semiperimetru=perimetru/2;
        arie=sqrt(semiperimetru*(semiperimetru-a)*(semiperimetru-b)*(semiperimetru-c));
        printf("\nb)Aria acestui triunghi este %.2lf\n",arie);
    }
    else
        {
          printf("\nNu exista un triunghi cu laturile %d %d %d\n",a,b,c);
        }
}
void lungime_mediane(int a,int b,int c)
{
    double ma=0,mb=0,mc=0;
    ma=0.5*sqrt(2*(b*b+c*c)-a*a);
    printf("\nLungimea medianei corespunzatoare laturi a=%d este ma=%.2lf",a,ma);
    mb=0.5*sqrt(2*(a*a+c*c)-b*b);
    printf("\nLungimea medianei corespunzatoare laturi b=%d este mb=%.2lf",b,mb);
    mc=0.5*sqrt(2*(b*b+a*a)-c*c);
    printf("\nLungimea medianei corespunzatoare laturi c=%d este mc=%.2lf",c,mc);
}
void lungime_inaltimi(int a,int b,int c)
{
    double ha=0,hb=0,hc=0,semiperimetru=0,arie;
    semiperimetru=(a+b+c)/2;
    arie=sqrt(semiperimetru*(semiperimetru-a)*(semiperimetru-b)*(semiperimetru-c));
    ha=2*arie/a;
    printf("\nLungimea inaltimei duse pe latura a=%d este ha=%.2lf",a,ha);
    hb=2*arie/b;
    printf("\nLungimea inaltimei duse pe latura b=%d este hb=%.2lf",b,hb);
    hc=2*arie/c;
    printf("\nLungimea inaltimei duse pe latura c=%d este hc=%.2lf",c,hc);
}
void distanta_dintre_2_puncte(int x,int y,int x1,int y1)
{
    double MM1=0;
    printf("\nFie punctul M cu coordonatele x=%d si y=%d",x,y);
    printf("\nFie punctul M1 cu coordonatele x1=%d si y1=%d",x1,y1);
    MM1=sqrt(pow(x1-x,2)+pow(y1-y,2));
    printf("\nDistanta dintre punctele M si M1 este MM1=%.2lf",MM1);
}
void patrat_perfect(int numar)
{
   int var;
   double var1;
   var1=sqrt(numar);
   var=var1;
   if(var==var1)
   {
       printf("\nNumarul %d este patrat perfect",numar);
   }
   else
   {
       printf("\nNumarul %d nu e patrat perfect",numar);
   }
}
void fractii(int a,int b,int c,int d)
{
    printf("\nPrima fracitie este %d/%d",a,b);
    printf("\nA doua fractie este %d/%d",c,d);
    printf("\na)Suma celor 2 fracti este: %d/%d",a*d+b*c,b*d);
    printf("\nb)Diferenta celor 2 fracti este: %d/%d",a*d-b*c,b*d);
    int e;
    e=cel_mai_mare_divizor(a,b);
    double numarator_nor=a/e,numitor_nou=b/e;
    printf("\nc)Fractia %d/%d dupa ce a fost simplificata pina la una ireductibila:%.0lf/%.0lf",a,b,numarator_nor,numitor_nou);
    printf("\nd)Comparam fractia %d/%d si fractia %d/%d",a,b,c,d);
    if(a*d>b*c)
    {
        printf("\nFractia %d/%d este mai mare",a,b);
    }
    else
    {
        printf("\nFractia %d/%d este mai mare",c,d);
    }
}
void numere_complexe(int a,int b,int c,int d)
{
    printf("\nPrimul numar complex este %d+%di",a,b);
    printf("\nAl doilea numar complex este %d+%di",c,d);
    printf("\na)Suma celor 2 numere complexe este %d+%di",a+c,b+d);
    printf("\nb)Produsul dintre cele 2 numere complexe este %d+%di",a*c-b*d,a*d+c*b);
    printf("\nc)Impartirea primului nr complex cu al doilea obtinem nr complex:%d/%d+(%d)i/%d",a*c+b*d,c*c+d*d,-a*d+c*b,c*c+d*d);
    printf("\nd)Modulul primului numar complex este %.0lf",sqrt(a*a+b*b));
    double complex z1=a+b*I;
    double complex z2=cpow(z1,2);
    printf("\ne)Numarul complex %d+%di ridicat la puterea 2 este :%.0lf+%.0lfi",a,b,creal(z2),cimag(z2));
}
void afisare_matrice( int a[2][2])
{
    printf("\nAfisam matricea obtinuta:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void adunare_matrici(int a[2][2],int b[2][2])
{
    int i=0,j=0;
    printf("\nSuma celor 2 matrici:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}
void inmultire_matrici(int a[2][2],int b[2][2])
{
    printf("\nInmultimi cele 2 matrici intre ele");
    int i=0,j=0,k=0,m[2][2];
    for(i=0;i<2;i++)
      {
          for(j=0;j<2;j++)
          {
              m[i][j]=0;
              for(k=0;k<2;k++)
              {
                  m[i][j]+=a[i][k]*b[k][j];
              }
          }
       }
        afisare_matrice(m);
}
void transpusa_matricii(int a[2][2])
{
    int i=0,j=0,transpusa[2][2];
    printf("\nTranspusa matricii:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            transpusa[j][i]=a[i][j];
        }
    }
    afisare_matrice(transpusa);
}
void inversa_matricii(int a[2][2],int b[2][2])
{
    int i=0,j=0;
    double determinant, a1[2][2];//a1 inversa matricei a//
    determinant=a[0][0]*a[1][1]-a[0][1]*a[1][0];//determinantul unei matrici patrate de oridnul 2
    printf("\nDeterminantul matricii este %lf",determinant);
    if(determinant==0)
    {
        printf("\nNu se poate de determinat inversa matricei");
    }
    else
    {
        printf("\nInversa matricii este:\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                a1[i][j]=(1/determinant)*b[i][j];
            }
        }
    }
     for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
               printf("%.2lf\t",a1[i][j]);
            }
            printf("\n");
        }
}
void ecuatie_matriciala(int a[2][2],int b[2][2],int adjuncta[2][2])
{
    int i=0,j=0,k=0,X[2][2];
    double determinant, a1[2][2];//a1 inversa matricei a//
    determinant=a[0][0]*a[1][1]-a[0][1]*a[1][0];//determinantul unei matrici patrate de oridnul 2
    if(determinant==0)
    {
        printf("\nNu se poate de determinat inversa matricei");
    }
    else
    {
       for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                a1[i][j]=(1/determinant)*adjuncta[i][j];
            }
        }
    }
     for(i=0;i<2;i++)
      {
          for(j=0;j<2;j++)
          {
              X[i][j]=0;
              for(k=0;k<2;k++)
              {
                  X[i][j]+=a1[i][k]*b[k][j];
              }
          }
       }
        afisare_matrice(X);
}
void afisare_vector(int vector[3])
{
    for (int i=0;i<3;i++)
    {
        printf(" %d ",vector[i]);
    }
}
void vector (int v[3],int v1[3])
{
    int vector_suma[3];
   printf("\na)Suma celor 2 vectorii este vectorul");
   for(int i=0;i<3;i++)
   {
       vector_suma[i]=v[i]+v1[i];
   }
   afisare_vector(vector_suma);
   printf("\nb)Produsul scalar al celor 2 vecorii este:");
   int produs_scalar=0;//produsul scalar al 2 vectorii e un nr//
    for(int i=0;i<3;i++)
   {
       produs_scalar+=v[i]*v1[i];
   }
   printf("%d",produs_scalar);
   printf("\nc)");
   int scalar=4,vector_nou[3];
   for(int i=0;i<3;i++)
   {
       vector_nou[i]=v[i]*scalar;
   }
   printf("Vecorul1 dupa ce a fost inmultit cu scalarul %d este:",scalar);
   afisare_vector(vector_nou);
   printf("\nd)Lungimea vectorului2 este:");
   double lungime_vector=0;
   lungime_vector=sqrt(v1[0]*v1[0]+v1[1]*v1[1]+v1[2]*v1[2]);
   printf("%.2lf",lungime_vector);
}
void termenul_n_fibonacci(int fibonacci[100],int n)
{
    fibonacci[1]=1;
    fibonacci[2]=1;
    for(int i=3;i<=n;i++)
    {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }
    printf("\nTermenul %d al sirului fibonacci este %d",n,fibonacci[n]);
}
int main()
{
   printf("\nEx.2 pag. 126");
   int n=6 ,m=3;
   printf("\nFactorialul numarului %d este %ld",n,factorial(n));
   printf("\nFactorialul numarului %d este %ld",m,factorial(m));
   double Combinari=0;
   Combinari=factorial(n)/(factorial(m)*(factorial(n-m)));
   printf("\nRezultatul combinarilor din %d elemente luate cite %d este %.0lf",n,m,Combinari);

   printf("\n\nEx.4 pag.126");
   int a=10,b=20,c=30,d,e;
   d=cel_mai_mare_divizor(a,b);//d=cel mai mare divizor al numerelor a si b
   e=cel_mai_mare_divizor(c,d);//e cel mai mare divizor dintre numarul c si cel mai mare divizor al numerelor a si b//
   printf("\nCel mai mare divizor al numerelor %d %d %d este %d",a,b,c,e);

   printf("\n\nEx.5 pag.126");
   double termen=0.5;
   suma_seriei(termen);

   printf("\n\nEx.6 pag.127");
   a=3,b=4,c=5,d=9;
   confirmare_triunghi_aflare_periemtru_si_arie(a,b,c);
   confirmare_triunghi_aflare_periemtru_si_arie(a,b,d);
   confirmare_triunghi_aflare_periemtru_si_arie(b,c,d);
   confirmare_triunghi_aflare_periemtru_si_arie(a,c,d);

   printf("\n\nEx.8 pag.127");
   a=6,b=8,c=10;
   lungime_mediane(a,b,c);

   printf("\n\nEx.9 pag.127");
   a=9,b=12,c=15;
   lungime_inaltimi(a,b,c);

   printf("\n\nEx.10 pag.127");
   int x=3,y=7,x1=-1,y1=4;
   distanta_dintre_2_puncte(x,y,x1,y1);

   printf("\n\nEx.14 pag.127");
   int numar=144;
   patrat_perfect(numar);
   int numere_aleatoare[8]={0,2,3,16,25,36,23,100};
   int marime=sizeof numere_aleatoare/sizeof numere_aleatoare[0];
   for (int i=0;i<marime;i++)
   {
       patrat_perfect(numere_aleatoare[i]);
   }

   printf("\n\nEx.15 pag.128");
   int numarator_1=3,numitor_1=12,numarator_2=1,numitor_2=2;
   fractii(numarator_1,numitor_1,numarator_2,numitor_2);

   printf("\n\nEx.16 pag.128");
   a=3,b=4,c=9,d=5;
   numere_complexe(a,b,c,d);

   printf("\n\nEx.17 pag.128");
   int m1[2][2]={{1,2},{2,1}},m2[2][2]={{2,3},{4,5}};
   printf("\na)");
   afisare_matrice(m1);
   afisare_matrice(m2);
   adunare_matrici(m1,m2);
   printf("\nb)");
   inmultire_matrici(m1,m2);
   printf("\nc)");
   transpusa_matricii(m2);
   printf("\nd)");
   int adjuncta[2][2]={{5,-3},{-4,2}},h;//adjuncta matricii m2
   inversa_matricii(m2,adjuncta);
    ///AX=B sa se rezolve ecuatia data
    ///A=m2;B=m1; X matricea ce trebuie aflata
    ///AX=B =>X=A^-1*B;A^-1 inversa matricii m2;
   int X[2][2];
   printf("\nMatricea X este :");
   ecuatie_matriciala(m2,m1,adjuncta);

   printf("\n\nEx.18 pag.128");
   int vector1[3]={0,3,1},vector2[3]={5,-2,3};
   vector(vector1,vector2);

   printf("\n\nEx.28 pag.129");
   int fibonacci[100],n1=8;
   termenul_n_fibonacci(fibonacci,n1);
    return 0;
    ///13 exercitii
}
