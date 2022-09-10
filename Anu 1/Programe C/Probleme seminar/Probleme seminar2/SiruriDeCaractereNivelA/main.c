#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // 17 probleme siruri de caractere de nivel A//
    printf("Ex.1pag.80");
    char Nume[20]="Catalin";
    printf("\nCare e numele tau ?\n");
    printf("%s",Nume);
    printf("\nSALUT %s ",Nume);

    printf("\n\nEx.2pag.80");
    char TEXT[100]="Un intelectual rezolva problemele. Un geniu le evita.";
    printf("\nSirul este: %s",TEXT);
    strupr(TEXT);
    printf("\nSirul dupa transformare tuturor literelor in majuscule devine : %s ",TEXT);

    printf("\n\nEx.3pag.80");
    printf("\nSirul este: %s",TEXT);
    printf("\na)");
    int i=0;
    for(i=0;TEXT[i]!='\0';i++)
    {
        if(i%2==0)
        {
            printf("\nCaracterul de pe pozita para %d este %c",i,TEXT[i]);
        }
    }
    printf("\nb)");
    for(i=0;TEXT[i]!='\0';i++)
    {
        if(i%2!=0)
        {
            printf("\nCaracterul de pe pozita impara %d este %c",i,TEXT[i]);
        }
    }

    printf("\n\nEx.4pag.80");
    char sir[100]="Oricine care nu a facut vreodata o greseala, nu a incercat niciodata nimic nou.";
    char a='a';//caracterul caruia trebuie sai aflam nr de aparitii in sir;
    int nr_aparitii_caracter=0;//variabila care ne va numara de cite ori apare caracterul a//
    printf("\nSirul este : %s",sir);
    for(i=0;sir[i]!='\0';i++)
    {
        if(sir[i]==a)
        {
            nr_aparitii_caracter++;
        }
    }
    printf("\nNumarul aparitiilor caracterului ,,%c'' este : %d",a,nr_aparitii_caracter);

    printf("\n\nEx.5pag.80");
    printf("\nSirul este : %s",sir);
    int numar_vocale=0;
    for(i=0;sir[i]!='\0';i++)
    {
        if(sir[i]=='a' || sir[i]=='e'  || sir[i]=='i' || sir[i]=='o'  || sir[i]=='u'||
            sir[i]=='A' || sir[i]=='E'  || sir[i]=='I' || sir[i]=='O' || sir[i]=='U')
        {
            numar_vocale++;
        }
    }
    printf("\nNumarul vocalelor din sir este :%d",numar_vocale);

    printf("\n\nEx.6pag.80");
    printf("\nSirul este:%s",sir);
    strrev(sir);
    printf("\nSirul este:%s",sir);

    printf("\n\nEx.7pag.80");
    char palindrom[100]="sa nu iei un as";
    char palindrom1[100];
    printf("\nSirul este :%s",palindrom);
    strcpy(palindrom1,palindrom);
    strrev(palindrom1);
    printf("\nInversul sirului palindrom este: %s",palindrom1);

    if(strcmp(palindrom,palindrom1)==0)
        printf("\nSirul este palindrom");
    else
        printf("\nSirul nu e palindrom");

    printf("\n\nEx.8pag.80");
    int numar_silaba=0;
    char silaba[20]=" poate e doar o joaca ";
    printf("\nSirul este : %s",silaba);
    for(i=0;i<strlen(silaba);i++)
    {
        if(silaba[i]=='o'&& silaba[i+1]=='a')
        {
            numar_silaba++;
        }

    }
    printf("\nSilaba ,,oa'' a aparut de %d ori in string",numar_silaba);

    printf("\n\nEx.9pag.80");
    char textul[100]="Om frumos";
    printf("\nTextul este : %s",textul);
    i=0;
    for(i=0;i<strlen(textul);i++)
    {
        if(textul[i]=='o')
        {
            textul[i]='u';
        }
        else if(textul[i]=='O')
        {
            textul[i]='U';
        }
    }
    printf("\nSirul dupa schimbare devine : %s",textul);

    printf("\n\nEx.10 pag.80");
    char text[10]="program";
    printf("\nSirul este :%s",text);
    for(i=0;i<strlen(text);i++)
    {
        if(text[i]=='o')
        {
            text[i]='a';
        }
       else if(text[i]=='a')
        {
            text[i]='o';
        }
    }
    printf("\nSirul devine : %s",text);

    printf("\n\nEx.11 pag.80");
    char sirul[10]="capac",silaba1[4]="oa";
    printf("\nSirul este :%s",sirul);
    int lungimea=strlen(sirul),j;
    for(i = 0; i < lungimea; i++)
    {
       if(sirul[i] == 'a')
       {
           lungimea++;
           for(j = lungimea; j > i; j--)
           {
               sirul[j] = sirul[j - 1];
           }

           sirul[i] ='o';
           sirul[i + 1] = 'a';
           i += 2;
       }
    }
    printf("\nSirul devine : %s",sirul);

    printf("\n\nEx.17pag.81");
    char litera[50]="tractor",a1='a',o='o';
    printf("\nSirul este :%s",litera);
    for(i=0;i<strlen(litera);i++)
    {
        if(litera[i]==a1)
        {
            printf("\nLitera ,,%c'' apare inainte de litera ,,%c'' ",a1,o);
            break;
        }
        else if(litera[i]==o)
        {
            printf("\nLitera ,,%c'' apare inainte de litera ,,%c'' ",o,a1);
            break;
        }
    }

    printf("\n\nEx.18pag.81");
    char sirul1[100]="Viata e frumoasa merita traita",c='s';
    int gasit=0;
    printf("\nSirul este :%s",sirul1);
    for(i=0;sirul1[i]!='\0';i++)
  	{
  		if(sirul1[i]==c)
		{
  			gasit=1;
  			break;
        }
	}
    if(gasit==0)
        printf("\nNu exista asa caracter in sir");
    else
        printf("\nPrima aparitie a caracterului ,,%c''  este pozitia %d ",c,i);

    printf("\n\nEx.19 pag.81");
    char text1[100]="Am invatat tacerea de la cei vorbareti, toleranta de la cei intoleranti si bunatatea de la cei rai";
    char text2[5]="cei";
    int aparitii=0;
    gasit=0;
    while(text1[i])
        {
        if(text1[i] == text2[0])
        {
           aparitii=0;
            gasit = 1;
            while(text2[aparitii])
            {
                if(text1[i+aparitii]!=text2[aparitii]) {
                    gasit = 0;
                    break;
                }
                 aparitii++;
            }
        }
         if(gasit == 1)
            break;
         i++;
    }
    if(gasit==1)
        printf("\nCuvantul: ,,%s'',sa gasit la pozitia %d",text2,i);
    else
        printf("\nCuvantul: ,,%s'',nu sa gasit",text2);

     printf("\n\nEx.20 pag.81");
     char vers[30]="Luceafarul este o stea",cuvint[4]="ea";
     printf("\nTextul este : ,,%s'' ",vers);
     printf("\nCuvantul este: ,,%s''", cuvint);
     gasit=0;
     for(i=0;i<strlen(vers);i++)
     {
        gasit=1;
        for(j=0;j<strlen(cuvint);j++)
        {
            if(vers[i+j]!=cuvint[j])
                gasit=0;
        }
          if(gasit==1)
          {
            for(j=i;j<=strlen(vers)-strlen(cuvint);j++)
                vers[j]=vers[j + strlen(cuvint)];
          }
     }
    printf("\nSirul dupa eliminarea combinatiei ,,%s'' este: %s",cuvint,vers);

    printf("\n\nEx.32pag.82");
    char fraza[30]="Ion a plecat la Tiraspol";
    printf("\nSirul e: %s ",fraza);
    strlwr(fraza);
    printf("\nSirul devine: %s ",fraza);

    printf("\n\nEx.33pag.82");
    char text3[20]="A sosit vara";
    for (i=0;text3[i]!='\0';i++)
      {
         if(text3[i]>='a' && text3[i]<='z')
            {
             text3[i]=text3[i]-32;
            }
             else if(text3[i]>='A' && text3[i]<='Z')
             {
                text3[i]=text3[i]+32;
             }
       }
    printf("\nSirul obtinut este: %s", text3);
    return 0;
}
