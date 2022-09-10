#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    printf("\nEx.20 pag.15");
    double x=-1.2121,y=-1.2021;
    if (x>y) printf("\nTrue");
    else printf("\nFalse");
    printf("\nEx.22 pag.15");
    int m=30;
    const double pi=3.14159265358979323846;
    double m0;
    m0=(m*pi)/180;
    printf("\nValoare lui %d in radiani este %.10lf",m,m0);
    printf("\nEx.23 pag.15");
    double r=0.5235987755,g;
    g=(r*180)/pi;
    printf("\nValoarea lui %.10lf in grade este %.2lf",r,g);
    printf("\nEx.24pag.15");
    printf("\na)");
    int n=10,o,m1,s;
    o=n*24;printf("\nNr de ore in %d zile sunt %d",n,o);
    m1=o*60; printf("\nNr de minute in %d zile sunt %d",n,m1);
    s=m1*60;printf("\nNr de secunde in %d zile sunt %d",n,s);
    printf("\nb)");
    int n1=2,o1,m2,s1;
    o1=n1*7*24;printf("\nNumarul de ore in %d saptamini este %d",n1,o1);
    m2=o1*60;printf("\nNumarul de minute in %d saptamini este %d",n1,m2);
    s1=m2*60;printf("\nNumarul de secunde in %d saptamini este %d",n1,s1);
    printf("\nc)");
    int mai=31,o2,m3,s2;
    o2=mai*24;printf("\nNumarul de ore in luna mai este %d",o2);
    m3=o2*60;printf("\nNumarul de minute in luna mai este %d",m3);
    s2=m3*60;printf("\nNumarul de secunde in luna mai este %d",s2);
    printf("\nEx.25pag.15");
    int nr=100;
    double c1,g1,t,l,S,z;
    printf("\na)");
    c1=nr*100;printf("\n%d metri egal cu %.2lf cm",nr,c1);
    printf("\nb)");
    g1=nr*100; printf("\n%d kg egal cu %.2lf grame",nr,g1);
    printf("\nc)");
    t=nr*0.001; printf("%d kg egal cu %2.lf tone",nr,t);
    printf("\nd)");
    l=nr*12; printf("\nNr de luni in %d ani este %.0lf",nr,l);
    S=nr*52; printf("\nNr de saptamini in %d ani este %.0lf",nr,S);
    z=nr*365; printf("\nNr de zile in %d ani este %.0lf",nr,z);
return 0;
}
