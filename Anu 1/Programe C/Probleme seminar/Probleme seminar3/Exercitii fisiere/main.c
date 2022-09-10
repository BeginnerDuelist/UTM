#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f=fopen("text.txt","w+");
    fprintf(f,"Ex.1 pag.114\n");
    char c='a',C='A';
    for(int i=0;i<26;i++)
    {
        fprintf(f,"%c",c+i);
        fprintf(f,"%c",C+i);
        fprintf(f,"\n");
    }

    fprintf(f,"\nEx.2 pag.114\n");
    int numar=0;
    for(int i=1;i<1000;i++)
    {
        fprintf(f," %d ",numar+i);
        if (i%3==0)
        {
            fprintf(f,"\n");
        }
    }

    fprintf(f,"\nEx.3 pag.114\n");
    numar=-200;
    int i=1;
    for(i=1;i<abs(numar);i++)
    {
        fprintf(f," %d ",numar+i);
        if (i%4==0)
        {
            fprintf(f,"\n");
        }
    }
    fprintf(f,"\nEx.4 pag.115\n");
    i=0;int j=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            fprintf(f," %d ",i);
        }
        fprintf(f,"\n");
    }
    fprintf(f,"\nEx.5 pag.115\n");
    i=0;j=0;
    char a='A';
    for(i=0;i<26;i++)
    {
        for(j=0;j<10;j++)
        {
            fprintf(f," %c ",a+i);
        }
        fprintf(f,"\n");
    }
     fprintf(f,"\nEx.6 pag.115\n");
    i=0;j=0;
    a='a';
    double numaru=0;
    for(i=0;i<20;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i%2==0)
                {
                    fprintf(f," %.0lf ",(numaru+i)/2);
                }
              else
              {
                 fprintf(f," %c ",(2*a+i)/2);
              }
         }
       fprintf(f,"\n");
    }
    fclose(f);
    printf("\nEx.7 pag.115");
    printf("\nInformatia din fisier e afisata mai jos!!!\n\n");
    f=fopen("text.txt","r");
    char linie[255];
    while (fgets(linie,sizeof(linie),f))
    {
        puts(linie);
    }
    fclose(f);
//fgets
    // 1 parametru - destinatia stocarii//in cazul nostru linie
    // 2 paramatru - numar maxim de caracter de a fi citite(in conditia problemei se indica 255)
    // 3 parametru - fisierul sursa, de unde sunt este citita informatia,in cazul nostru f

    printf("\nEx.8 pag.115\n");
    FILE *f1=fopen("TEXT1.txt","r");
    strcpy(linie,"");
    fflush(stdin);
     while (fgets(linie,sizeof(linie),f1))
    {
        if(strlen(linie) < 30)
        {
          puts(linie);
        }
    }
    fclose(f1);

    printf("\n\nEx.9 pag.115");
    FILE *dublura;
     f1=fopen("TEXT1.txt","r");
    dublura=fopen("TEXT_COPIAT.txt","w");

    strcpy(linie,"");

    while (fgets(linie, sizeof(linie),f1))
    {
        for(int i=0;i<strlen(linie); i++)
        {
          if(linie[i]=='e')
            {
                linie[i]='i';
            }
        }
        fprintf(dublura,"%s",linie);
    }
    printf("\nContinut fisierului TEXT1 sa transcris in fisierul TEXT_COPIAT modificat ");
    fclose(dublura);
    fclose(f1);

    printf("\n\nEx.10 pag.115");
     f1= fopen("TEXT1.txt","r");
    strcpy(linie,"");
    int rinduri=0;
    while (fgets(linie,sizeof(linie),f1))
    {
        rinduri++;
    }

    printf("\nFisierul TEXT1.txt are %d rinduri",rinduri);
    fclose(f1);

    printf("\n\nEx.12 pag.115");
    FILE *f2;
    f1=fopen("TEXT1.txt","r");
    f2= fopen("TEXT_MODIFICAT.txt","w");
    strcpy(linie,"");
    while (fgets(linie,sizeof(linie),f1))
    {
        fprintf(f2,"  %s",linie);
    }

    printf("\nFisierul TEXT1.txt sa transcris in fisierul TEXT_MODIFICAT.txt cu modificarile cerute:");
    fclose(f2);
    fclose(f1);

    printf("\n\nEx.14 pag.116");
    f=fopen("text.txt","r");
    strcpy(linie,"");
    int numarul_de_cifre=0,numarul_de_litere=0;//variabilele care numarul de cite ori apare o cifra sau o litera in fisier//
    while (fgets(linie,sizeof(linie),f))
        {
        for(int i=0;i<strlen(linie);i++)
        {
            if(linie[i]>=48&&linie[i]<=57)
            {
                numarul_de_cifre++;
            }
            else if((linie[i]>=97&&linie[i]<=122)||(linie[i]>=65&&linie[i]<=90))
            {
                numarul_de_litere++;
            }
        }
    }
    printf("\nNumarul de litere in fiserul text.txt este %d",numarul_de_litere);
    printf("\nNumarul de cifre in fisierul text.txt este %d",numarul_de_cifre);
    fclose(f);

    printf("\n\nEx.15 pag.116");
    FILE *f3=fopen("TEXT2.txt","r");
    fgets(linie, sizeof(linie),f3);
    int lungime_linie_minima=strlen(linie);//lungime_linie_minima variabila careia ii atribuim lungimea primei linii pentru a o compara cu lungimea celorlalte linii//
    strcpy(linie,"");
    while (fgets(linie,sizeof(linie),f3))
    {
        if(lungime_linie_minima>strlen(linie))
        {
            lungime_linie_minima=strlen(linie);
        }
    }
    fclose(f3);
    f3=fopen("TEXT2.txt","r");
    while (fgets(linie,sizeof(linie),f3))
    {
        if(strlen(linie)==lungime_linie_minima)
        {
            printf("\n");
            puts(linie);
        }
    }
    fclose(f3);

    printf("\n\nEx.16 pag.116");
    f3=fopen("TEXT2.txt","r");
     fgets(linie, sizeof(linie),f3);
    int lungime_linie_maxima=strlen(linie);//lungime_linie_maxima variabila careia ii atribuim lungimea primei linii pentru a o compara cu lungimea celorlalte linii//
    strcpy(linie,"");
    while (fgets(linie,sizeof(linie),f3))
    {
        if(lungime_linie_maxima<strlen(linie))
        {
            lungime_linie_minima=strlen(linie);
        }
    }
    fclose(f3);
    f3=fopen("TEXT2.txt","r");
    while (fgets(linie,sizeof(linie),f3))
    {
        if(strlen(linie)==lungime_linie_maxima)
        {
            printf("\n");
            puts(linie);
        }
    }
    fclose(f3);

    printf("\n\nEx.19 pag.116");
    f3=fopen("TEXT2.txt","r");
    int nr_de_apariti=0;
    char subsirul[10]="ninge";
    strcpy(linie,"");
    while (fgets(linie,sizeof(linie),f3))
    {                  //strstr e o functie din biblioteca string.h care gaseste prima aparitie a subsirului dat in sirul pe care il avem//
       if (strstr(linie,subsirul)!=NULL)//primul parametru e sirul pe care il vom scana ,al doilea e subsirul pe care il cautam in sirul nostru//
       {
           nr_de_apariti++;
       }
    }
    printf("\nSubsirul ,,%s'' a aparut in fiserul TEXT2.txt de %d ori",subsirul,nr_de_apariti);
    fclose(f3);

    printf("\n\nEx.20 pag.116");
    FILE *f4=fopen("Tabla_adunarii_de_la_0_la_20.txt","w");

    int numarul_maxim=20;
    fprintf(f4," + |");
    for(int i=0;i<=numarul_maxim;i++)
    {
      fprintf(f4," %d |",i);
    }
    fprintf(f4,"\n");


    fprintf(f4," --|");
    for(int i=0;i<=numarul_maxim;i++)
    {
        fprintf(f4,"---|");
    }
    fprintf(f4,"\n");

    for(int i=0;i<=numarul_maxim;i++)
    {
        fprintf(f4," %d |",i);
        for(int j=0;j<=numarul_maxim;j++)
        {
          fprintf(f4," %d |",i+j);
        }
        fprintf(f4,"\n");
    }
    printf("\nTabla adunarii a fost inscrisa in fisierul ,,Tabla_adunarii_de_la_0_la_20.txt,, ");
    fclose(f4);

    printf("\n\nEx.21 pag.116");
    FILE *f5=fopen("Tabla_inmultiri_de_la_0_la_20.txt","w");
     fprintf(f5," * |");
     numarul_maxim=20;
    for(int i=0;i<=numarul_maxim;i++)
    {
      fprintf(f5," %d |",i);
    }
    fprintf(f5,"\n");


    fprintf(f5," --|");
    for(int i=0;i<=numarul_maxim;i++)
    {
        fprintf(f5,"---|");
    }
    fprintf(f5,"\n");

    for(int i=0;i<=numarul_maxim;i++)
    {
        fprintf(f5," %d |",i);
        for(int j=0;j<=numarul_maxim;j++)
        {
          fprintf(f5," %d |",i*j);
        }
        fprintf(f5,"\n");
    }
    printf("\nTabla inmultitiri a fost inscrisa in fisierul ,,Tabla_inmultiri_de_la_0_la_20.txt,, ");
    close(f5);

    printf("\n\nEx.32 pag.119");
    FILE *f6=fopen("TEXT2.txt","r");
    FILE *f7=fopen("TEXT3.txt","w");

    int lungime_maxima=0;
    char rind[255];
    while(fgets(rind,sizeof(rind),f6))
        if(lungime_maxima<strlen(rind))
            lungime_maxima=strlen(rind);
    fclose(f6);
    f6=fopen("TEXT2.txt","r");
    while(fgets(rind,sizeof(rind),f6))
        if(strlen(rind)!=lungime_maxima)
            fprintf(f7,"%s",rind);

    printf("\nRezultatul sa inscris in fisierul TEXT3.txt");

    fclose(f7);
    fclose(f6);
    //18 probleme cu fisiere.
    return 0;
}
