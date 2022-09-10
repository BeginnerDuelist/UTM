#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void substitue(char text[])
{
    int size = strlen(text);
    for(int i=0; i<=size ;i++)
    {
        if(text[i]=='a' && i%2==0)
        {
            text[i]='o';
        }
        if(text[i]=='a' && i%2==1)
        {

            text[i]='e';

        }
    }
    printf("\nTextul dupa modificare este:%s",text);
}
void substitue_imbinare(char t[], char t1[])
{
    int k =0;
    int size = strlen(t);
    for(int i=0; i<size; i++)
    {

            if(t[i]=='c' && t[i+1]=='s')
            {
                t[i]='x';
                t1[k]=t[i];
                k++;
                i++;
            }
            else
            {
                t1[k]=t[i];
                k++;
        }

     }
     printf("\nTextul dupa modificare : %s ",t1);
}
void delimitare (char t[], char t1[])
{
    int  size = strlen(t);
    int i,j;


    for (i=0;i<size;i++)
    {
        if(t[i]=='a')
        {
            printf(" ");
        }
        printf("%c",t[i]);
        if(t[i]=='a')
        {
            printf(" ");
        }
    }


}
void dublare(char t[] , char t1[])
{
    int k=0;
    for(int i=0;t[i]!='\0';i++)
    {
        t1[k] = t[i];
        k++;
        t1[k] = t[i];
        k++;
    }
}
void gasire_litera(char t[], char litera)
{
    int size = strlen(t);
    for(int i=1; i<=size; i++)
    {
        if(t[i]==litera)
        {
            printf("\nLitera %c se intalneste pe pozitia : %d\n",litera,i);break;
        }
    }
    printf("\nLitera data nu se contine in acest sir");
}
void inlocuire_litera (char t[], char t1[])
{
   int i,j,k=0;
   for(i=0;t[i]!='\0';i++)
    {
        t1[k]=t[i];
        k++;
        if(t[i]=='n' && t[i+1]=='a')
        {
            t1[k]='o';
           k++;
        }

    }
}
void ex22 (char t[], char t1[])
{
   int  size = strlen(t);
    int i,j,k=1;
    char temp=t[size-1];

    for(i=size-1;i>=0;i--)
    {
     t[i]=t[i-1];

    }
    t[0]=temp;
    printf("%s",t);

}
void ex23(char t[], char t1[])
{
   int  size = strlen(t);
    int i,j,k=1;
    char temp=t[0];

    for(i=0;i<size;i++)
    {
     t[i]=t[i+1];

    }
    t[i-1]=temp;
    printf("%s",t);

}
void ex24(char t[], char t1[])
{
    int  s = strlen(t);
    int  s1 = strlen(t1);
    int i,j;

  for(int i=0;i<=25;i++)
    {
       t1[i]=97+i;
    }
    for(int j=0; j<=25; j++)
    {
        for(int i=0; i<s; i++)
        {
            if(t1[j]==t[i])
            {
                t1[j]=' ';
            }

        }
    }
}
void ex25(char t[], char t1[])
{
    int  size = strlen(t);
    int i,j;

        for(i=0; i<size; i++)
        {
            printf("%d ",t[i]-96);

        }
}
void ex26(char t[], char t1[])
{
    int  size = strlen(t);
    int i,j;

    printf("\nMesajul codificat;\n");
        for(i=0; i<size; i++)
        {
            if(t[i]=='c')
            {
                t[i]=t[i]+2;
            }
            printf("%c",t[i]);

        }
    printf("\nMesajul decodificat;\n");
        for(i=0; i<size; i++)
        {
            if(t[i]=='e')
            {
                t[i]=t[i]-2;
            }
            printf("%c",t[i]);

        }
}
void ex27(char t[], char t1[])
{
    int  size = strlen(t);
    int i,temp;

    printf("\nMesajul codificat;\n");
    for(i=0; i<size; i++)
    {
        temp=t[i+2];
        t[i+2]=t[i];
        t[i]=temp;
        if(t[i+3]=='\0')
        {
            break;
        }

    }
    puts(t);
    printf("\nMesajul decodificat;\n");
    for(i=size; i>=0; i--)
    {
        temp=t[i-1];
        t[i-1]=t[i-3];
        t[i-3]=temp;
        if(t[i-4]==0)
        {
            break;
        }
    }
    puts(t);
}

void ex28(char t[], char t1[])
{
    int  size = strlen(t);
    int i,temp;

    printf("\nMesajul codificat;\n");
    for(i=0; i<size; i++)
    {
        temp=t[i+1]+2;
        t[i+1]=t[i]+2;
        t[i]=temp;
        i++;
        if(t[i+2]=='\0')
        {
            break;
        }

    }
    puts(t);
    printf("\nMesajul decodificat;\n");
    for(i=0; i<size; i++)
    {
        temp=t[i]-2;
        t[i]=t[i+1]-2;
        t[i+1]=temp;
        i++;
        if(t[i+2]=='\0')
        {
            break;
        }
    }
    puts(t);
}
void ex29(char t[], char t1[])
{
    int  size = strlen(t);
    int i,rest;

    printf("\nMesajul codificat;\n");
    for(i=0; i<size; i++)
    {
        rest=i%3;
        int c=rest;
        t[i]+=c;


    }
    puts(t);
    printf("\nMesajul decodificat;\n");
    for(i=0; i<size; i++)
    {
        rest=i%3;
        int c=rest;
        t[i]-=c;
    }
    puts(t);
}
void ex30(char t[], char t1[])
{
    int  size = strlen(t);
    int i=0,j=0;

    while(t[i]!='\0')
    {
        if(!(t[i]==' ' && t[i+1]==' '))
        {
            t1[j]=t[i];
            j++;
        }
        i++;
    }

}
void ex31 (char t[], char t1[])
{
    int count=0,temp,k=0;
    int size = strlen(t);
    for(int i=0; i<size; i++)
    {
        temp=i;
        if(t[i]=='(')
        {
            for(int j=temp; j<size; j++)
            {
                count++;
                if(t[j]==')')
                {
                  break;
                }
            }
            i=i+count;
        }
        t1[k]=t[i];
        k++;
        t1[k]='\0';
      }
}
void ex33 (char t[],char t1[])
{
    int i;
     for (i=0;t[i]!='\0';i++)
      {
         if(t[i]>='a' && t[i]<='z')
            {
             t[i]=t[i]-32;
            }
             else if(t[i]>='A' && t[i]<='Z')
             {
                t[i]=t[i]+32;
             }
       }
    printf("\nSirul obtinut este: %s", t);
}
void ex36(char t[])
{
    int  size = strlen(t);
    int i;

    for (i=0;t[i]!='\0'; i++)
    {
        printf("%c", t[i]);
        if(t[i]==' ')
        {
            printf("\n");
        }
    }
}

int main()
{
    printf("\n\nEx.13 pag.80");
    char text[50]="calcar";
    printf("\nTextul introdus este :%s  ",text);
    substitue(text);

    printf("\n\nEx.14 pag.81");
    char text1[30]="alecsandri",text2[30];
    printf("\nText introdus este : %s ",text1);
    substitue_imbinare(text1,text2);
    strcpy(text1,"");strcpy(text2,"");

    printf("\n\nEx.15 pag.81");
    strcpy(text1,"tractor");
    printf("\nText introdus este : %s \n",text1);
    printf("\nTextul dupa delimitare este:");
    delimitare(text1,text2);
    strcpy(text1,"");strcpy(text2,"");

    printf("\n\nEx.16 pag.81");
    strcpy(text1,"torti");
    printf("\nText introdus este : %s \n",text1);
    printf("\nTextul dupa dublare : ");
    dublare(text1,text2);
    puts(text2);
    strcpy(text1,"");
    strcpy(text2,"");

    fflush(stdin);
    printf("\n\nEx.21 pag.81");
    strcpy(text1,"canalul");
    strcpy(text2,"canalul");
    printf("\nText introdus este : %s \n",text1);
    inlocuire_litera(text1,text2);
    puts(text2);

    strcpy(text1,"");strcpy(text2,"");

    printf("\n\nEx.22 pag.81");
    strcpy(text1,"tractor");
    printf("\nText introdus este : %s \n",text1);
    printf("\nTextul dupa prelucrare : ");
    ex22(text1,text2);
    puts(text2);

    printf("\n\nEx.23 pag.81");
    strcpy(text1,"tractor");strcpy(text2,"");
    printf("\nText introdus este : %s \n",text1);
    printf("\nTextul dupa prelucrare : ");
    ex23(text1,text2);
    puts(text2);

    strcpy(text1,"");strcpy(text2,"");
    printf("\n\nEx.24 pag.81");
    strcpy(text1,"tractor");
    printf("\nText introdus este : %s \n",text1);
    printf("\nTextul dupa prelucrare : ");
    ex24(text1,text2);
    puts(text2);


    strcpy(text1,"");strcpy(text2,"");
    printf("\n\nEx.25 pag.81");
    strcpy(text1,"lac");
    printf("\nText introdus este : %s \n",text1);
    printf("\nTextul dupa prelucrare : ");
    ex25(text1,text2);

    strcpy(text1,"");strcpy(text2,"");
    printf("\n\nEx.26 pag.81");
    strcpy(text1,"capac");
    printf("\nText introdus este : %s \n",text1);
    printf("\nTextul dupa prelucrare : ");
    ex26(text1,text2);

    strcpy(text1,"");strcpy(text2,"");
    printf("\n\nEx.27 pag.81");
    strcpy(text1,"proba");
    printf("\nText introdus este : %s \n",text1);
    printf("\nTextul dupa prelucrare : ");
    ex27(text1,text2);

    strcpy(text1,"");strcpy(text2,"");
    printf("\n\nEx.28 pag.82");
    strcpy(text1,"abac");
    printf("\nText introdus este : %s \n",text1);
    printf("\nTextul dupa prelucrare : ");
    ex28(text1,text2);

    strcpy(text1,"");strcpy(text2,"");
    printf("\n\nEx.29 pag.82");
    strcpy(text1,"tractor");
    printf("\nText introdus este : %s \n",text1);
    printf("\nTextul dupa prelucrare : ");
    ex29(text1,text2);

    strcpy(text1,"");strcpy(text2,"");
    printf("\n\nEx.30 pag.82");
    strcpy(text1,"afara  e frig     frig");
    printf("\nText introdus este : %s \n",text1);
    printf("\nTextul dupa prelucrare : ");
    ex30(text1,text2);
    puts(text2);

    strcpy(text1,"");strcpy(text2,"");
    printf("\n\nEx.31 pag.82");
    strcpy(text1,"fotbalul si (voleiul) sunt sporturi");
    printf("\nText introdus este : %s \n",text1);
    printf("\nTextul dupa prelucrare : ");
    ex31(text1,text2);
    puts(text2);

    printf("\n\nEx.32 pag.82");
    char fraza[30]="Ion a plecat la Tiraspol";
    printf("\nSirul e: %s ",fraza);
    strlwr(fraza);
    printf("\nSirul devine: %s ",fraza);

    printf("\n\nEx.33 pag.82");
    char text3[20]="A sosit vara";
    ex33(text3,text2);

    printf("\n\nEx.36 pag.82\n");
    char zicala[80]="Vremea trece vremea vine";
    ex36(zicala);

///18 probleme
    return 0;
}


