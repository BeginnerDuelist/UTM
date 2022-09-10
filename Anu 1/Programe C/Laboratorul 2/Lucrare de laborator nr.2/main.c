#include <stdio.h>

int main()
{
    //Laboratorul nr.2  partea 1 din 3//
    printf("Lucrare de laborator nr.2\n");
    printf("\nProbleme pentru instructiuni de ramificare:");

    printf("\nProblema nr.1:\nScrieti un program C pentru a gasi maxim intre doua numere.");
    double a=2.2,b=3.123;
    if(a>b) printf("\n%f este maxim",a);
    else printf("\n%f este maxim",b);

    printf("\nProblema nr.2:\nScrieti un program C pentru a gasi maxim intre trei numere. ");
    double x=123,y=123.4,z=123.6,max=0;
    if (x>y) printf("\nMaximul primelor 2 numere este:=%f",max=x);
    else printf("\nMaximul primelor 2 numere este:=%f",max=y);
    if(max>z) printf("\nMaximul maximului primelor 2 numere si al 3 este:=%f",max=max);
    else printf("\nMaximul maximului primelor 2 numere si al 3 este:=%f",max=z);

    printf("\nProblema nr.3:\nScrieti un program C pentru a verifica daca un numar este negativ, pozitiv sau zero");
    int c=-3;
    if (c>0)  printf("\nNr %d este pozitiv",c);
        else if(c<0) printf("\nNr %d este negativ",c);
        else printf("\nNr %d este egal cu 0",c);

     printf("\nProblema nr.4:\nScrieti un program C pentru a verifica daca un numar este divizibil cu 5 și 11 sau nu. ");
     int a1=55;
     printf("\nNumarul nostru este:=%d",a1);
     if ((a1%5==0)&&(a1%11==0)) printf("\nNumarul nostru e divizibil cu 5 si 11");
     else printf("\nNumarul nostru nu e divizibil cu 5 si 11");
     printf("\nProblema nr.5:\nScrieti un program C pentru a verifica daca un numar este par sau impar. ");

     int b1=12345678;
     if(b1%2==0) printf("\nNumarul %d este par",b1);
     else printf("\nNumarul %d este impar",b1);

     printf("\nProblema nr.6:\nScrieti un program C pentru a verifica daca un an este bisect sau nu. ");
     int an=2021;
     if ((an%4==0)&&(an%100!=0)||an%400==0) printf("\nAnul %d este bisect!",an);
     else printf("\nAnul %d nu e bisect!",an);

     printf("\nProblema nr.7:\nScrieti un program C pentru a verifica daca un caracter este sau nu alfabet. ");
     char c1='B';
     if((c1>='a')&&(c1<='z')) printf("\nCaracterul %c este din alfabet si este o litera mica",c1);
     else if((c1>='A')&&(c1<='Z')) printf("\nCaracterul %c este o litera mare din alfabet",c1);
     else printf("\nCaracterul %c nu este din alfabet",c1);

     printf("\nProblema nr.8:\nScrieti un program C pentru a introduce orice alfabet si verificati dacă este vocala sau consoana. ");
     char litera='u';
     if((litera=='a')||(litera=='e')||(litera=='i')||(litera=='o')||(litera=='u')) printf("\nLitera ,,%c'' este o vocala ",litera);
     else printf("\nLitera ,,%c'' este o consoana",litera);

     printf("\nProblema nr.9:\nScrieti un program C pentru a introduce orice caracter si verificati daca este alfabet, cifra sau caracter special. ");
     char v1='*';
     if (((v1>='a')&&(v1<='z'))||((v1>='A')&&(v1<='Z'))) printf("\nCaracterul ,,%c'' este alfabet",v1);
     else if ((v1>='0')&&(v1<='9')) printf("\nCaracterul ,,%c'' este cifra",v1);
     else printf("\nCaracterul ,,%c'' este un caracter special",v1);

     printf("\nProblema nr.10:\nScrieti un program C pentru a verifica daca un caracter este cu majuscule sau minuscule. ");
     char m='y';
     if ((m>='A') && (m<='Z')) printf("\nCaracterul ,,%c'' este scris cu majuscula",m);
     else printf("\nCaracterul ,,%c'' este scris cu minuscula",m);
return 0;
}
