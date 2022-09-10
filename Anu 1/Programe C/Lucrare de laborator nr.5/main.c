#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char frecventa_maxima(char sirul[]) {
    int  max = 0;
    int codASCHII[256]={0}; //256 este numarul de caractere din codul ASCII, codASCHII[256]={0} il initializez astfel cu valoare 0
    char resultat;

    for(int i=0;sirul[i]!='\0'; i++) {
        codASCHII[sirul[i]]++;
        if(max<codASCHII[sirul[i]])
        {
            max =codASCHII[sirul[i]];
            resultat =sirul[i];
        }
    }
    return resultat;
}
  char frecventa_minima(char sirul[])
{
   int min = 0;
   int codASCHII[256]={0};
   for(int i=0;sirul[i]!='\0';i++)
  	{
       codASCHII[sirul[i]]++;
	}

  	for(int i=0;i<256;i++)
  	{
		if(codASCHII[i]!=0)
		{
			if(codASCHII[min]==0 || codASCHII[i] < codASCHII[min])
			{
				min = i;
			}
		}
  	}
     return min;
}
void frecventa_caractere(char sirul[])
{
     int frecventa;
    for (int i=0;sirul[i]!='\0';i++)
    {
        frecventa=0;
        for (int j =0;sirul[j]!='\0';j++)
        {
            if (sirul[j]==sirul[i])
            {
                frecventa++;
            }
        }
         printf("\nCaracterul %c apare de  %d ori  in sir \n", sirul[i],frecventa);
    }
}
void sterge_prima_aparitie_caracter(char sirul[],char caracter)
{
    int i=0,lungime=strlen(sirul);
    while(i<lungime && sirul[i]!=caracter)
        i++;

    while(i<lungime)
    {
        sirul[i] = sirul[i+1];
        i++;
    }
}
void sterge_ultima_aparitie(char sirul[],char caracter)
{
    int i=0,pozitie;
    int lungime=strlen(sirul);
    pozitie =-1;

    while(i<lungime)
    {
        if(sirul[i]==caracter)
        {
           pozitie=i;
        }
         i++;
    }
    if(pozitie!= -1)
    {
        i=pozitie;
    while(i<lungime)
        {
            sirul[i] = sirul[i+1];
            i++;
        }
    }
}
 void stergere_caracter_din_sir(char sirul[], char caracter)
{
    int i,j;
    int lungime = strlen(sirul);

    for(i=0;i<lungime;i++)
    {
       if(sirul[i]==caracter)
        {
            for(j=i;j<lungime;j++)
            {
                sirul[j]=sirul[j+1];
            }
            lungime--;
            i--;
        }
    }
}
void stergere_caractere_ce_se_repeta(char sirul[])
{
    int i,j,k;
	for(i=0;sirul[i]!='\0';i++)
  	{
  		for(j=i+1;sirul[j]!='\0';j++)
  		{
  			if(sirul[j]==sirul[i])
			{
  				for(k=j;sirul[k]!='\0';k++)
				{
					sirul[k]=sirul[k+1];
				}
 			}
		}
	}
}
void inlocuire_prima_aparitie(char sirul[],char caracter,char caracter1)
{
    int i=0;
    while(sirul!='\0')
    {
        if(sirul[i]==caracter)
        {
            sirul[i]=caracter1;
            break;
        }
          i++;
    }
}
void inlocuire_ultima_aparitie(char sirul[],char caracter,char caracter1)
{
    int i=0,k=-1;
    while(sirul[i]!='\0')
    {
       if(sirul[i]==caracter)
        {
            k=i;
        }
         i++;
    }
    if(k!= -1)
    {
        sirul[k]=caracter1;
    }
}
void inlocuire_toate_aparitiile(char sirul[],char caracter,char caracter1)
{
    int i=0;
    while(sirul[i]!='\0')
    {
        if(sirul[i]==caracter)
        {
            sirul[i]=caracter1;
        }
          i++;
    }
}

int main()
{
    printf("Problema 1:\nScrieti un program C pentru a afla lungimea unui sir.");
    char sir[100]="Lungimea!";
    printf("\nLungimea sirului  este: %d ",strlen(sir));

    printf("\n\nProblema 2:\nScrieti un program C pentru a copia un sir in altul.\n");
    char sir1[100];
    strcpy(sir1,sir);
    printf("\nSirul1=%s\n",sir1);

    printf("\n\nProblema 3:\nScrieti un program C pentru a concatena doua siruri.");
    strcat(sir,sir1);
    printf("\nNoul sir obtinut prin concatenarea celorlalte 2 este: %s\n",sir);

    printf("\n\nProblema 4:\nScrieti un program C pentru a compara doua siruri.");
    int comparare;
    comparare=strcmp(sir,sir1);//compara sirul obtinut la ex 3 cu cel de la ex.2//
    printf("\nstrcmp(sir,sir1)=%d\n",comparare);

    printf("\n\nProblema 5:\nScrieti un program C pentru a converti dintr-un sir, literele minuscule in majuscule.");
    strupr(sir);
    printf("\nSir=%s",sir);

    printf("\n\nProblema 6:\nScrieti un program C pentru a converti dintr-un sir, literele majuscule in litere mici.");
    char sir2[100]="MAJUSCULE";
    strlwr(sir2);
    printf("\nSir2=%s",sir2);

    printf("\n\nProblema 7:\n");
    printf("Scrieti un program C pentru a comuta literele minuscule in majuscule si majuscule in minuscule pentru fiecare caracter dintr-un sir");
    char sir3[100]="Oare Cit Face adUnArEA AstA 2+2=?";
    int i=0;
     for (i=0;sir3[i]!='\0';i++)
    {
         if(sir3[i]>='a' && sir3[i]<='z')
            {
             sir3[i]=sir3[i]-32;
            }
             else if(sir3[i]>='A' && sir3[i]<='Z')
             {
                sir3[i]=sir3[i]+32;
             }
    }
    printf("\nSirul obtinut este= %s", sir3);

    printf("\n\nProblema 8:\nScrieti un program C pentru a gasi numarul total de litere, cifre sau caractere speciale dintr-un sir.");
    char sir4[100]="B7na. 122+_?>312f";
    int numar_litere=0,numar_cifre=0,numa_carcter_special=0;
    int i1=0;
     while(sir4[i1]!='\0')
    {
        if((sir4[i1]>='A' && sir4[i1]<='Z') || (sir4[i1]>='a' && sir4[i1]<='z'))
        {
            numar_litere++;
        }
        else if(sir4[i1]>='0' && sir4[i1]<='9')
        {
            numar_cifre++;
        }
        else
        {
            numa_carcter_special++;
        }
       i1++;
    }

    printf("\nNumarul de litere in sir este: %d", numar_litere);
    printf("\nNumarul de cifre in sir este: %d", numar_cifre);
    printf("\nNumarul caracterelor speciale din sir este: %d", numa_carcter_special);

    printf("\n\nProblema 9:\nScrieti un program C pentru a numara numarul total de vocale dintr-un sir.");
    char vocale[100]="BUna ziua ce mai faceti?";
    int numar_vocale=0,i2=0;
    while (vocale[i2]!='\0')
    {
        if(vocale[i2]=='a' || vocale[i2]=='e'  || vocale[i2]=='i' || vocale[i2]=='o'  || vocale[i2]=='u'||
            vocale[i2]=='A' || vocale[i2]=='E'  || vocale[i2]=='I' || vocale[i2]=='O'  || vocale[i2]=='U')
        {
            numar_vocale++;
        }
        i2++;
    }
    printf("\nNumarul de vocale in sir este :%d",numar_vocale);

    printf("\n\nProblema 10:\nScrieti un program C pentru a numara numarul total de consoane dintr-un sir.");
    int i3=0,numar_litere1=0,numar_consoan=0;//voi numara nr de consoane din sirul vocale[100]
     while (vocale[i3]!='\0')
    {
        if((vocale[i3]>='A' && vocale[i3]<='Z') || (vocale[i3]>='a' && vocale[i3]<='z'))
        {
            numar_litere1++;//am aflat nr de litere din sir si voi scadea cu nr de vocale pentru a afla nr de consoane
        }
        i3++;
    }
     numar_consoan=numar_litere1-numar_vocale;
    printf("\nNumarul de consoane in sir este :%d",numar_consoan);

    printf("\n\nProblema 11:\nScrieti un program C pentru a numara numarul total de cuvinte dintr-un sir.");
    int numar_cuvinte=0,i4=0;
    for (i4=0;vocale[i4];i4++)
    {
        if (vocale[i4]==' ' && vocale[i4+1]!=' ')
            numar_cuvinte++;
    }
    printf("\nNumarul de cuvinte in sirul vocale[100] este: %d", numar_cuvinte+1);

    printf("\n\nProblema 12:\nScrieti un program C pentru a gasi inversul unui sir.");
    strrev(vocale);
    printf("%s\n",vocale);

    printf("\n\nProblema 13:\nScrieti un program C pentru a verifica daca un sir este palindrom sau nu.\n");
    char palindrom[100]="sa nu iei un as";
    char palindrom1[100];
    printf("Sirul este :%s",palindrom);
    strcpy(palindrom1,palindrom);
    strrev(palindrom1);
    printf("\nInversul sirului palindrom este: %s",palindrom1);

    if(strcmp(palindrom,palindrom1)==0)
        printf("\nSirul este palindrom");
    else
        printf("\nSirul nu e palindrom");

    printf("\n\nProblema 14:\nScrieti un program C pentru a inversa ordinea cuvintelor dintr-un sir dat.");
    char sir5[100]="este cuvintelor a inversata Ordinea",sir6[100];
    int i5=0,j=0;
    printf("\nSirul este: %s ",sir5);

    while(sir5[i5]!='\0')
    {
        i5++;
    }
    while(i5>0)
    {
        sir6[j]=sir5[--i5];
        ++j;
    }
    printf("\nSirul inversat este :");
    for(i5=0;sir6[i5]!='\0';i5++)
    {
        if(sir6[i5+1]==' ' || sir6[i5+1]=='\0')
        {
            for(j=i5;j>=0 && sir6[j]!=' ';j--)
            {
                printf("%c",sir6[j]);
            }
           printf(" ");
        }
    }

    printf("\n\nProblema 15:\nScrieti un program C pentru a gasi prima aparitie a unui caracter intr-un sir dat.");
    char sir7[100]="E toamna";
    int i7=0,q;
    char c='a';
    q=0;
    for(i7=0;sir7[i7]!='\0';i7++)
  	{
  		if(sir7[i7]==c)
		{
  			q=1;
  			break;
        }
	}
    if(q==0)
        printf("\nNu exista asa caracter in sir");
    else
        printf("\nPrima aparitie a caracterului  este pozitia %d ",i7);

    printf("\n\nProblema 16:\nScrieti un program C pentru a gasi ultima aparitie a unui caracter intr-un sir dat.");
    for(i7=0;sir7[i7]!='\0';i7++)
  	{
  		if(sir7[i7]==c)
		{
  			q=i7;
        }
	}
    if(q==0)
        printf("\nNu exista asa caracter in sir ");
    else
        printf("\nUltima aparitie a caracterului  este pozitia %d ",q);

    printf("\n\nProblema 17:\nScrieti un program C pentru a cauta toate aparitiile unui caracter dintr-un sir dat.");
    char sir8[100]="Un om destept rezolva problema ,dar un geniu o evita,spusele lui Einstein!",e='e';
    int i8;
    for(i8=0;sir8[i8];i8++)
    {
        if(sir8[i8]==e)
        {
            printf("\nCaracterul '%c' a aparut pe pozitia %d",e,i8);
        }
    }

    printf("\n\nProblema 18:\nScrieti un program C pentru a numara aparitiile unui caracter dintr-un sir dat.");
    int numar_caractere=0;
    for(i8=0;sir8[i8];i8++)
    {
        if(sir8[i8]==e)
        {
           numar_caractere++;
        }
    }
    printf("\nCaracterul '%c' a aparut de %d ori",e,numar_caractere);

    printf("\n\nProblema 19:\nScrieti un program C pentru a gasi caracterul cu cea mai mare frecventa dintr-un sir.");
    printf("\nSir: %s",sir8);
    printf("\nCaracterul cu cea mai mare frecventa este '%c'",frecventa_maxima(sir8));

    printf("\n\nProblema 20:\nScrieti un program C pentru a gasi caracterul cu frecventa cea mai joasa dintr-un sir");
    printf("\nSir:%s",sir8);
    printf("\nCaracterul cu cea mai mica frecventa este '%c' ",frecventa_minima(sir8));

    printf("\n\nProblema 21:\nScrieti un program C pentru a numara frecventa fiecarui caracter dintr-un sir.");
    char sir9[100]="Afara";
    frecventa_caractere(sir9);

   printf("\n\nProblema 22:\nScrieti un program C pentru a elimina prima aparitie a unui caracter din sir.\n");
   char sir10[100]="MMoartea rezolva problemele,dispare omul dispar si probleme,citat de STALINN";
   char litera='M';
   printf("\nSirul este: %s\n",sir10);
   sterge_prima_aparitie_caracter(sir10,litera);
   printf("\nSirul dupa ce am eliminat prima aparitie a caracterului %c : %s",litera,sir10);

   printf("\n\nProblema 23:\nScrieti un program C pentru a elimina ultima aparitie a unui caracter din sir.");
   char litera1='N';
   printf("\nSirul este: %s",sir10);
   sterge_ultima_aparitie(sir10,litera1);
   printf("\nSirul dupa ce am eliminat ultima aparitie a caracterului %c :\n %s",litera1,sir10);

   printf("\n\nProblema 24:\nScrieti un program C pentru a elimina toate aparitiile unui caracter din sir.");
   char litera2='e';
   printf("\nSirul este: %s",sir10);
   stergere_caracter_din_sir(sir10,litera2);
   printf("\nSirul dupa ce am eliminat toate aparitiile a caracterului %c :\n %s",litera2,sir10);

   printf("\n\nProblema 25:\nScrieti un program C pentru a elimina toate caracterele ce se repeta dintr-un sir dat");
   printf("\nSirul este: %s",sir10);
   stergere_caractere_ce_se_repeta(sir10);
   printf("\nSirul dupa stargerea caracterelor ce se repeta: %s",sir10);

   printf("\n\nProblema 26:\nScrieti un program C pentru a inlocui prima aparitie a unui caracter cu altul dintr-un sir.");
   char sir11[100]="Viata e frumoasa merita traita.";
   char x='i',y=' ';
   printf("\nSirul inainte de inlocuire: %s ",sir11);
   inlocuire_prima_aparitie(sir11,x,y);
   printf("\nSirul dupa inlocuirea primei aparitii caracterului %c cu %c obtinem sirul: %s ",x,y,sir11);

   printf("\n\nProblema 27:\nScrieti un program C pentru a inlocui ultima aparitie a unui caracter cu altul dintr-un sir.");
   printf("\nSirul inainte de inlocuire: %s ",sir11);
   inlocuire_ultima_aparitie(sir11,x,y);
   printf("\nSirul dupa inlocuirea ultima aparitie caracterului %c cu %c obtinem sirul: %s ",x,y,sir11);

   printf("\n\nProblema 28:\nScrieti un program C pentru a inlocui toate aparitiile unui caracter cu altul dintr-un sir.");
   printf("\nSirul inainte de inlocuire: %s ",sir11);
   inlocuire_ultima_aparitie(sir11,x,y);
   printf("\nSirul dupa inlocuirea tuturor aparitiilor caracterului %c cu %c obtinem sirul: %s ",x,y,sir11);

   printf("\n\nProblema 29:\nScrieti un program C pentru a gasi prima aparitie a unui cuvant intr-un sir dat.");
   char cuvint[100]="om",sir12[100]="Nu incerca sa fii un om de succes, ci un om de valoare.";
   printf("\nSirul este: %s", sir12);
   printf("\nCuvantul este: %s", cuvint);
   int pozitie=0; int gasit=0,aparitii=0;
    while(sir12[pozitie])
        {
        if(sir12[pozitie] == cuvint[0]) {
           aparitii=0;
            gasit = 1;
            while(cuvint[aparitii]) {
                if(sir12[pozitie+aparitii] != cuvint[aparitii]) {
                    gasit = 0;
                    break;
                }
                 aparitii++;
            }
        }
         if(gasit == 1)
            break;
         pozitie++;
    }
    if(gasit == 1)
        printf("\nCuvantul: '%s',sa gasit la pozitia %d.", cuvint, pozitie);
    else
        printf("\nCuvantul: '%s',nu sa gasit", cuvint);


    printf("\n\nProblema 30:\nScrieti un program C pentru a gasi ultima aparitie a unui cuvant intr-un sir dat.");
    printf("\nSirul este: %s", sir12);
    printf("\nCuvantul este : %s", cuvint);
    pozitie=0;gasit=0;
    int i9,j4;
    for(i9=0; i9<=strlen(sir12)-strlen(cuvint);i9++) {
        gasit=1;
        for(j4=0;j4<strlen(cuvint);j4++)
            if(sir12[i9+j4]!=cuvint[j4])
            {
                gasit = 0;
                break;
            }
          if(gasit == 1)
            pozitie=i9;
    }

    if(pozitie==0)
        printf("\ncuvantul ,,%s'' nu s-a gasit.", cuvint);
    else
        printf("\nUltima apartitie a cuvantului '%s' se incepe de la pozitia %d", cuvint,pozitie);

    printf("\n\nProblema 31:\nScrieti un program C pentru a cauta toate aparitiile unui cuvant intr-un sir dat.");
    int i10,j5;
    char sir13[100]="cuvint a fost cuvint, este cuvint si va ramine asa mereu",cuvint1[32]="cuvint";
    printf("\nSirul este: %s", sir13);
    printf("\nCuvantul este: %s",cuvint1);
    int gasit1=0,aparitii1=0;
    printf("\nAparitiile cuvintului ,,%s'' sunt:",cuvint1);
    for(i10=0; i10<strlen(sir13)-strlen(cuvint1); i10++) {
        gasit1=1;
        for(j5=0;j5<strlen(cuvint1);j5++)
            {
              if(sir13[i10 + j5]!=cuvint1[j5]) {
                gasit1=0;
                break;
            }
        }
          if(gasit1==1)
        {
            printf("\n%d ",i10);
            aparitii1++;
        }
    }
    printf("\n\nProblema 32:\nScrieti un program C pentru a numara aparitiile unui cuvant dintr-un sir dat.");
    printf("\nSirul este: %s", sir13);
    printf("\nCuvantul este: %s", cuvint1);
    printf("\nNumarul aparitiilor este: %d",aparitii1);

    printf("\n\nProblema 33:\nScrieti un program C pentru a elimina prima aparitie a unui cuvant din sir.");
    printf("\nSirul este: %s", sir13);
    printf("\nCuvantul este: %s", cuvint1);
    int i11,j6,gasit2=0;
    for(i11=0;i11<strlen(sir13);i11++) {
        gasit2=1;
        for(j6=0;j6<strlen(cuvint1);j6++) {
            if(sir13[i11+j6]!=cuvint1[j6]) {
                gasit = 0;
                break;
            }
        }
         if(gasit2==1) {
            for(j6=i11;j6<=strlen(sir13)-strlen(cuvint1);j6++)
                sir13[j6] = sir13[j6 + strlen(cuvint1)];
               break;
        }
    }
    printf("\nSirul dupa eliminarea primei aparitii a cuvintului ,,%s'': %s",cuvint1, sir13);

    printf("\n\nProblema 34:\nScrieti un program C pentru a elimina ultima aparitie a unui cuvant din sirul dat.");
    printf("\nSirul e: %s", sir13);
    printf("\nCuvintu este: %s", cuvint1);
    int pozitie1=-1,gasit3=0;
    for(i11=0;i11<strlen(sir13)-strlen(cuvint1);i11++)
    {
        gasit3=1;
        for(j6=0;j6<strlen(cuvint1);j6++)
           if(sir13[i11+j6]!=cuvint1[j6])
            {
                gasit3=0;
                break;
            }

        if(gasit3==1)
            pozitie1=i11;
        }

    if(pozitie1==-1)
        printf("\nCuvantul ,,%s'' nu s-a gasit",cuvint1);
    else {

       for(i11=pozitie1;i11<=strlen(sir13)-strlen(cuvint1);i11++)
            sir13[i11] = sir13[i11+strlen(cuvint1)];
printf("\nSirul dupa eleminarea ultimei aparitii a cuvintului ,,%s'' este:  %s ",cuvint1 ,sir13);
    }
return 0;
}
