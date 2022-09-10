#include <stdio.h>
#include <stdlib.h>
//18 exercitii matrici nivel A//
void printeaza_matrice(int matrice[3][3])//functie ce printeaza matricile patratice de ordinul 3
{
    printf("\nMatricea este:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\t%d ",matrice[i][j]);
        }
        printf("\n");
    }
}
void printeaza_matrice1(int matrice[2][2])//functie ce printeaza matricile patratice de ordinul 2
{
    printf("\nMatricea este:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("\t%d ",matrice[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("Ex.1pag.64:");
    int M[3][3]={{1,2,-3},{4,-5,6},{-7,8,9}};
    printeaza_matrice(M);
    printf("\na)");
    int i,j,suma_matrice=0;
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           suma_matrice+=M[i][j];
       }
    }
    printf("\nSuma elementelor matricei este:%d",suma_matrice);

    printf("\nb)");
    int suma_elemente_pozitive=0;
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           if(M[i][j]>0)
           {
               suma_elemente_pozitive+=M[i][j];
           }
       }
    }
    printf("\nSuma elementelor pozitive ale matricei este:%d",suma_elemente_pozitive);

    printf("\nc)");
    int numar_elemente_negative=0;
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           if(M[i][j]<0)
           {
               numar_elemente_negative++;
           }
       }
    }
    printf("\nNumarul elementelor negative ale matricei este: %d",numar_elemente_negative);

    printf("\n\nEx.2pag.64:");
    printeaza_matrice(M);
    int t=1;
    printf("\na)Linia %d este :",t);
    for(j=0;j<3;j++)
    {
        printf(" %d ",M[t][j]);
    }

    printf("\nb)Coloana %d este:",t);
    for(i=0;i<3;i++)
    {
        printf(" %d ",M[i][t]);
    }

    printf("\n\nEx.3pag.64:");
    printeaza_matrice(M);
    int max_component=M[0][0],rind=0,coloana=0;
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           if(M[i][j]>max_component)
           {
               max_component=M[i][j];
               rind=i; coloana=j;
           }
       }
    }
    printf("\nComponenta maxima este %d si se afla pe rindul %d si coloana %d:",max_component,rind,coloana);

    printf("\n\nEx.4pag.64:");
    printeaza_matrice(M);
    int min_component=M[0][0];
    rind=0;coloana=0;
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           if(M[i][j]<min_component)
           {
               min_component=M[i][j];
               rind=i; coloana=j;
           }
       }
    }
    printf("\nComponenta minima este %d si se afla pe rindul %d si coloana %d:",min_component,rind,coloana);

    printf("\n\nEx.5pag.64:");
    printeaza_matrice(M);
    int suma_linie=0;//suma elementelor pozitive de pe fiecare linie//
    for(i=0;i<3;i++)
    {
       suma_linie=0;
       for(j=0;j<3;j++)
       {
           if(M[i][j]>0)
           {
             suma_linie+=M[i][j];

           }
        }
        printf("\nSuma elementelor pozitive de pe linia %d este :%d ",i,suma_linie);
    }

    printf("\n\nEx.6pag.64:");
    printeaza_matrice(M);
    int suma_coloana;
    for(j=0;j<3;j++)
    {
       suma_coloana=0;
       for(i=0;i<3;i++)
       {
           if(M[i][j]<0)
           {
             suma_coloana+=M[i][j];
           }
        }
        printf("\nSuma elementelor negative de pe linia %d este :%d ",i,suma_coloana);
    }

    printf("\n\nEx.7pag.65:");
    printeaza_matrice(M);
    int nr_elemente_pozitive=0;
    double media_aritmetica_elemente_pozitive=0;//suma elementelor pozitive am calculato la ex.1b. calculam nr de elemente pozitive si facem media//
     for(i=0;i<3;i++)
    {
       suma_linie=0;
       for(j=0;j<3;j++)
       {
           if(M[i][j]>0)
           {
            nr_elemente_pozitive++;
           }
        }
    }
     printf("\nNr elementelor pozitive este :%d ",nr_elemente_pozitive);
     media_aritmetica_elemente_pozitive=suma_elemente_pozitive/nr_elemente_pozitive;
     printf("\nMedia elementelor pozitive din matrice este :%.2lf",media_aritmetica_elemente_pozitive);

     printf("\n\nEx.8pag.65:");
     if(suma_matrice%2==0) //Am calculat suma elementelor matricei si am verificat daca restu impartiri la 2 este zero //
     {
         printf("\nSuma elementelor matricei este un numar par");//daca restu impartiri la 2 e zero atunci nr e par daca nu atunci e impar//
     }
     else
     {
         printf("\nSuma elementelor matricei este un numar impar");
     }

     printf("\n\nEx.9pag.65:");
     if(suma_elemente_pozitive%2!=0) //suma elementelor poziitve am calculato la ex 1b//
     {
          printf("\nSuma elementelor pozitive ale matricei este un numar impar");
     }
     else
     {
         printf("\nSuma elementelor pozitive ale matricei este un numar par");
     }

     printf("\n\nEx.17pag.66:");
     int M1[3][3]={{1,1,4},{12,-3,-45},{5,-2,10}};
     printeaza_matrice(M1);
     printf("\nElementele diagonalei principale sunt:");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             if(i==j)
             {
                 printf("%d ",M1[i][j]);
             }
         }
     }

     printf("\n\nEx.18pag.66:\n");
     int M2[3][3];
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             M2[i][j]=i+j;
         }
     }
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("\t%d ",M2[i][j]);
         }
         printf("\n");
     }

     printf("\n\nEx.19pag.66:");
     printeaza_matrice(M1);
     rind=0;
     int max_compon_diag_prin=M1[0][0];
      for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             if(i==j)
             {
                 if(max_compon_diag_prin<M1[i][j])
                 {
                     max_compon_diag_prin=M1[i][j];
                     rind=i;
                 }
             }
         }
    }
    printf("\nComponenta maximala de pe diagonala principala este %d si se afla pe rindul %d",max_compon_diag_prin,rind);

    printf("\n\nEx.20pag.66:");
    printeaza_matrice(M1);
    coloana=0;
    int min_compon_principal_diag=M1[0][0];//variabila careia ii atribuim valoare minima de pe diagonala principala
    for(i=0;i<3;i++)
    {
        if(M1[i][i]<min_compon_principal_diag) {
            min_compon_principal_diag = M1[i][i];
            coloana=i;
        }
    }
    printf("\nComponenta minima de pe diagonala principala este %d si se afla pe coloana %d\n",min_compon_principal_diag,coloana);


    printf("\n\nEx.21pag.66:");
    int M3[3][3]={{-1,1,-1},{0,1,-1},{-1,0,-1}},sum_elemente_negat=0,prod_element_negativ=1;
    printeaza_matrice(M3);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if((M3[i][j]<0)&&(M3[i][j])%2!=0 && (abs(M3[i][j])<i))
            {
               sum_elemente_negat+=M3[i][j];
               prod_element_negativ*=M3[i][j];
            }
        }
    }
    printf("\n%d",sum_elemente_negat);
    printf("\n%d",prod_element_negativ);

    printf("\n\nEx.22pag.66");/*max_comp variabila carei ii atribuim ij a fiecareia din cele 3 matriici*/
    int M4[2][2]={{5,2},{2,1}},M5[2][2]={{2,3},{3,2}},M6[2][2]={{3,4},{4,3}},X[2][2],max_comp=0,max_comp1;
    printeaza_matrice1(M4);
    printeaza_matrice1(M5);
    printeaza_matrice1(M6);
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(M4[i][j]>M5[i][j])
            {
                max_comp1=M4[i][j];
            }
            else
            {
                max_comp1=M5[i][j];
            }
            if(max_comp1>M6[i][j])
            {
                max_comp=max_comp1;
            }
            else
            {
                max_comp=M6[i][j];
            }
            X[i][j]=max_comp;
        }
    }
   printeaza_matrice1(X);

   printf("\n\nEx.23pag.66:");
   int Matrice[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int p=2,aux=0;// p variabila care indica nr coloanei si a rindul ce le vom schimba intre ele. aux=variabile auxiliara ce ajuta la schimbarea linie si a coloanei//
   printeaza_matrice(Matrice);
   for(i=0;i<3;i++)
   {
       aux=Matrice[i][p];
       Matrice[i][p]=Matrice[p][i];
       Matrice[p][i]=aux;
   }
   printf("\nDupa schimbare :");
   printeaza_matrice(Matrice);

   printf("\n\nEx.25pag.66:");
   int matrice[3][3]={{1,0,3},{0,0,0},{31,3,2002}};
   int numar_nenul;//nr elementelor nenule de pe fiecare linie a matricii//
   printeaza_matrice(matrice);
   printf("\na)");
    for(i=0;i<3;i++)
     {
         numar_nenul=0;
         for(j=0;j<3;j++)
         {
             if(matrice[i][j]!=0)
             {
                 numar_nenul++;
             }
         }
     printf("\nNumarul elementelor nenule de pe linia %d este: %d ",i,numar_nenul);
     }
     printf("\nb)");
     printeaza_matrice(matrice);
     int numar_pozitiv;//nr de elemente pozitive de pe fiecare coloana//
      for(j=0;j<3;j++)
     {
         numar_pozitiv=0;
         for(i=0;i<3;i++)
         {
             if(matrice[i][j]>0)
             {
                 numar_pozitiv++;
             }
         }
      printf("\nNumarul elementelor pozitive de pe coloana %d este: %d ",j,numar_pozitiv);
     }
     printf("\nc)");
     int numar_impar_diag_prin=0;//nr elementelor impare de pe diagonala principala//
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             if((i==j) &&(matrice[i][j]%2!=0))
             {
                 numar_impar_diag_prin++;
             }
         }
    }
    printf("\nNumarul elementelor impare de pe diagonala principala este: %d ",numar_impar_diag_prin);
    int numar_impar_diag_sec=0;//nr de elemente pe diagonala secundara a matricii;
    for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             if(matrice[i][j-1-i]%2!=0)
             {
                 numar_impar_diag_sec++;
             }
         }
    }
    printf("\nNumarul elementelor impare de pe diagonala secundare este: %d ",numar_impar_diag_sec);

    printf("\n\nEx.26pag.66:");
    int suma[3][3];
    printf("\nMatricile ce le vom aduna sunt :");
    printf("\na)");
    printeaza_matrice(Matrice);
    printeaza_matrice(matrice);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            suma[i][j]=Matrice[i][j]+matrice[i][j];
        }
    }
    printf("\nSuma celor 2 matrici este");
    printeaza_matrice(suma);
    i=0;j=0;
    printf("\nb)");
    int k=0,multiplicare[3][3];//matrice ce va fi egal cu produsul dintre Matrice si matrice
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        {
            multiplicare[i][j]=0;
            for(k=0;k<3;k++)
            {
                multiplicare[i][j]+=Matrice[i][k]*matrice[k][j];
            }

        }

    }
  printf("\nMatricea ontinuta prin multiplicarea celor doua :");
  printeaza_matrice(multiplicare);
    return 0;
}
