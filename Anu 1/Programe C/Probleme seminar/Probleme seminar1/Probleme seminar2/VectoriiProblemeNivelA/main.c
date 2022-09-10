#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Probleme vectori/tablouri unidimensionale 14 probleme de nivel A//

    printf("Ex.1 pag 52:\n");
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int a1=sizeof a/sizeof a[0],i;
    printf("\nVextorul are %d componente",a1);
    printf("\nVectorul nostru este :\n");
    for (i=0;i<a1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\na)\n");
    printf("a[2]=%d\n",a[2]);//componenta a 3 are indexul 3-1
    printf("a[3]=%d\n",a[3]); // componenta a 4 are indexul 4-1
    printf("a[8]=%d\n",a[8]); //componenta a 9 are indexul 9-1

      printf("b)\n");
      int suma=a[1]+a[2]+a[7];
      printf("Suma=%d",suma);

      printf("\nc)");
      printf("\na[0]+5=%d",a[0]+5);
      printf("\na[a1]+5=%d",a[a1]+5);

      printf("\nd)");
      printf("\na[a1/2]-10=%d",a[a1/2]-10);

    printf("\n\nEx.2pag.52:");
    int sum=0;
     printf("\nVextorul are %d componente",a1);
    printf("\nVectorul nostru este :\n");
    for (i=0;i<a1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\na)\n");
     for (i=0;i<a1;i++)
    {
        sum=sum+a[i];
    }
      printf("Suma componentelor vectorului=%d",sum);

      printf("\nb)\n");
      double prod=1;
       for (i=0;i<a1;i++)
    {
        prod=prod*a[i];

    }
     printf("Produsul componentelor vectorului = %.0lf\n",prod);

  printf("\n\nEx.3 pag.52:\na)");
  int b[]={11,-1,2,3,-2,-4,5,-10,-32,9,-3,-15};
  int negativ=0,b1=sizeof b/sizeof b[0];
  for ( i=0;i<b1;i++)
  {
      if (b[i]<0)
        negativ++;
  }
  printf("\nNr de elemente negative din vector este: %d",negativ);

  printf("\nb)");
  int numar_par=0;
   for ( i=0;i<b1;i++)
  {
      if (b[i]%2==0)
        numar_par++;
  }
    printf("\nNr de elemente pare este: %d",numar_par);

    printf("\nc)");
    int numar_nenul=0;;
     for (i=0;i<b1;i++)
   {
      if (b[i]!=0)
        numar_nenul++;
    }
     printf("\nNr de elemente nenule este: %d",numar_nenul);

      printf("\nd)");
    int numar_diviz=0;;
     for (i=0;i<b1;i++)
   {    if (b[i]>0)
      {
          if ((b[i]%3==0) && (b[i]%5==0))
        numar_diviz++;
      }
    }
     printf("\nNr de elemente pozitive divizibile cu 3 si 5 este: %d",numar_diviz);

     printf("\ne)");
    int numar_diviz1=0;;
     for (i=0;i<b1;i++)
   {
      if ((b[i]%7==0) || (b[i]%9==0) || (b[i]%11==0))
        numar_diviz1++;
    }
     printf("\nNr de elemente divizibile cu cel putin unul dintre nr 7,9,11 este : %d",numar_diviz1);

      printf("\nf)");
    int numar_modul=0;;
     for (i=0;i<b1;i++)
   {
       if(abs(b[i])>3)
        numar_modul++;
      printf(" %d  ",abs(b[i]));
    }
     printf("\nNr de elemente a caror modul mai mare decit 3  este : %d",numar_modul);

     printf("\n\nEx.4 pag.52:");
     int c[10];
     c[0]=1;
     c[1]=1;
     for(i=2;i<10;i++)
     {
         printf("%d  ",c[i]=c[i-2]+c[i-1]);
     }
     printf("\n\nVectorul nostru cu 10 componenete este:");
     for(i=0;i<10;i++)
     {
         printf("%d  ",c[i]);
     }

     printf("\n\nEx.5pag.52:");
     int d[]={1,2,0,1,9,4,5,5,4,3,2};
     int d1=sizeof d/sizeof d[0];
     int nr_zer=0;
     for (i=0;i<d1;i++)
     {  if(d[i]==0)
         {
         printf("\nPozitia la care apare prima data apare zero este: %d",i);break;
         }
         else nr_zer++;
        }
        if (nr_zer==d1)
            printf("\nVectorul nu are zero");

     printf("\n\nEx.6pag.52:\na)");
     int j=0,aux=0;
     for (i=0;i<d1;i++) {
        for (j=i+1; j<d1; j++) {
           if(d[i] > d[j]) {
               aux=d[i];
               d[i] = d[j];
               d[j] = aux;
           }
        }
    }
    printf("\nElementele tabloului dupa sortarea in ordine crescatoare sunt:");
    for (i=0;i<d1;i++)
        {
        printf("%d ",d[i]);
        }
      printf("\nb)");
     for (i=0;i<d1;i++) {
        for (j=i+1;j<d1;j++) {
           if(d[i]<d[j])
            {
               aux=d[i];
               d[i] = d[j];
               d[j] = aux;
           }
        }
    }
    printf("\nElementele tabloului dupa sortarea in ordine descrescatoare sunt:");
    for (i=0;i<d1;i++)
    {
        printf("%d ",d[i]);
    }
    printf("\n\nEx.7 pag.52\n");
    int a2[]={32,43,2444,543,56,17,56,90,100,121};
    int a3=sizeof a2/sizeof a2[0];
    int t=5,aux1;
    for (i=0;i<t;i++)
       for (j=i+1;j<t;j++) {
           if(a2[i] > a2[j]) {
               aux1=a2[i];
               a2[i]=a2[j];
               a2[j]=aux1;
           }
       }
    printf("\nPrimele %d elementele tabloului dupa sortarea in ordine crescatoare sunt:",t);
    for (i=0;i<t;i++)
        {
        printf("%d ",a2[i]);
        }

      for (i=t;i<a3;i++)
       for (j=i+1;j<a3;j++) {
           if(a2[i]<a2[j]) {
               aux1=a2[i];
               a2[i]=a2[j];
               a2[j]=aux1;
           }
        }
    printf("\nUrmatoarele %d elementele tabloului dupa sortarea in ordine descrescatoare sunt:",t);
    for (i=t;i<a3;i++)
    {
        printf("%d ",a2[i]);
    }

    printf("\n\nEx.8 pag.52:");
     int b2[]={2,3,4,5,6,7,8,9,10},prim[20];
     int b3=sizeof b2/sizeof b2[0],c2=0,m=0,j1;
     printf("\nVectorul nostru cu %d componente este  ",b3);
     for(i=0;i<b3;i++)
     {
         printf("%d ",b2[i]);
     }
     for(i=0;i<b3;i++)
     {
          c2=0;
          for(j1=2;j1<b2[i];j1++)
          {
               if(b2[i]%j1==0)
               {
                    c2=1;
                    break;
               }
          }
          if(c2==0)
          {
               prim[m]=b2[i];
               m++;
          }
     }
     printf("\nNumerele prime din vector:");
     for(i=0;i<m;i++)
     {
          printf("%d ",prim[i]);
     }

     printf("\n\nEx.9 pag.53:\na)");
     double real[]={1,-1,2,4,2,0.5,5,0.2,-1};
     int real1=sizeof real/sizeof real[0];
     int suma1=0,produs=0,nr_opus=0,nr_invers=0;
     printf("\nVectorul nostru este: ");
     for(i=0;i<real1;i++)
     {
         printf("%.2lf ",real[i]);
     }
     for(i=0;i<real1;i++)
     {
         if(real[i]+real[i+1]==0) nr_opus++;

        }
    printf("\nNr de perechi de numere opuse alaturate este: %d ",nr_opus);
    printf("\nb)");
    for(i=0;i<real1;i++)
     {
        if(real[i]*real[i+1]==1) nr_invers++;

    }
    printf("\nNr de perechi de numere inverse alaturate este: %d",nr_invers);

    printf("\n\nEx.10 pag.53");
    int d2[]={1,2,3,2,5,3,43,2,10};
    int d3=sizeof d2/sizeof d2[0],m1=17,sum1=0,prod1=1;
    printf("\nTabloul nostru cu %d componente este: \n\n",d3);
    for(i=0;i<d3;i++)
    {
        printf("%d ",d2[i]);
    }
    for(i=0;i<d3;i++)
    {
        sum1=sum1+d2[i];
        if(sum1<m1) prod1=prod1*d2[i];
    }
    printf("\n\nProdusul elementelor a caror suma este mai mica ca %d este %d ",m1,prod1);

    printf("\n\nEx.11 pag.53:\na)");
    int e[10]={-2,4,15,2,-1,-15,3,9,-10,21};
    int e1=sizeof e/sizeof e[0],max=0;
     for(i=0;i<e1;i++) //afisez vectorul//
     {
         printf("%d  ",e[i]);
     }
     printf("\n");
    for(i=0;i<e1-1;i++)
     {
        if(e[i]<=e[i+1]) max=e[i+1];
        else
            max=e[i];
     }
    printf("%d ",max);
    for(i=0;i<e1;i++)
    {
        if(e[i]==max) printf("\nPozitia este %d",i);
    }

    printf("\nb)");
    int min=0;
    for(i=0;i<e1-1;i++)
    {
        if(e[i]>=e[i+1]) min=e[i+1];
        else
            min=e[i];
    }
    printf("%d ",min);
    for(i=0;i<e1;i++)
    {
        if(e[i]==min) printf("\nPozitia este %d",i);
    }

    printf("\nc)");
    int m2=10,max1=0;
    for(i=0;i<e1-1;i++)
    {
        if(e[i]<e[i+1]) max=e[i+1];
        else
            max=e[i];
        if(max<m2) max1=max;
    }
      printf("%d ",max1);

     printf("\nd)");
    int m4=-1,min1=0;
    for(i=0;i<e1-1;i++)
    {
        if(e[i]<e[i+1]) min=e[i];
        else
            min=e[i+1];
        if(min<m4) min1=min;
     }
   printf("%d ",min1);

   printf("\ne)");
   int f[100];
   for(i=0;i<e1;i++)
   {
       if(e[i]<0)
       {
          f[i]=e[i];
          printf("%d ",f[i]);
       }
   }
   printf("\n");
   int max_negativ=0;
   for(i=0;f[i];i++)
   {

       if(max_negativ>f[i])
       {
           max_negativ=f[i];
       }
    }
   printf("Componenta maximala negativa este %d ",max_negativ);

   printf("\nf)");
   int g[6],min_pozitv=0;
   for(i=0;i<e1;i++)
   {
       if(e[i]>0)
       {
           g[i]=e[i];
           printf("%d  " ,g[i]);
       }
    }
    min_pozitv=max;
   for(i=0;i<4;i++)
   {
       if(min_pozitv>=g[i]) //max este variabila egala cu componenta maximala din vector//
       {
           min_pozitv=g[i];
       }

   }
   printf("\nComponenta minimala pozitiva este: %d ",min_pozitv);

   printf("\n\nEx.13 pag.53 : ");
   int h[]={1,2,3,4,4,3,2,1},h1=sizeof h/sizeof h[0],q=0;
   i=0,j=0;
   printf("\nNr de elemente ale tabloului este: %d ",h1);
   for(i=0;i<h1;i++)
   {
       for(j=0;j<h1;j++)
       {
           if(h[i+j]==h[h1-j-1])
           {
               q=1;
           }
       }
   }
   if(q==1)
   {
     printf("\nVectorul este simetric");
   }
   else
   {
    printf("\nVectorul nu este simetric");
   }

   printf("\n\nEx.15pag.53 :\nVectorul este :");
   int k[]={1,-2,3,-1,0,0,-2,-1,-4},k1=sizeof k/sizeof k[0],q1=0;
   for(i=0;i<k1;i++)
   {
       printf(" %d ",k[i]);
   }
   printf("\na)");
   for(i=0;i<k1;i++)
   {
       if((k[i]==0) && (k[i]==k[i+1]))
       {
           q1=1;
       }
   }
   if(q1==1)
   {
       printf("\nVectorul contine 2 elemente vecine egale cu 0");
   }
   else
   {
       printf("\nVectorul nu contine 2 elemente vecine egale cu 0");
   }
   printf("\nb)");
   q1=0;
    for(i=0;i<k1-2;i++)
   {
       if(((k[i]>=0)&&(k[i+1]>=0)&&(k[i+2]>=2)) || ((k[i]<0)&&(k[i+1]<0)&&(k[i+2]<0)))
       {
           q1=1;
       }
   }
  if(q1==1)
  {
      printf("\nVectorul contine 3 elemente vecine de acelasi semn");
  }
  else
  {
       printf("\nVectorul nu contine 3 elemente vecine de acelasi semn");
  }
  printf("\n\nEx.16 pag.53:\nVectorul este:");
  int l[]={2,1,3,5,3,7,5,6,8,10,124,23,34,1};
  int l1=sizeof l/sizeof l[0],nr_pare=0,nr_impare=0,suma_nr_par=0,suma_nr_impar=0;
  double medie_aritmetica_nr_par,medie_aritmetica_nr_impar;
  for(i=0;i<l1;i++)
  {
      printf(" %d ",l[i]);
  }
  for(i=0;i<l1;i++)
  {
      if(l[i]%2==0)
      {
          suma_nr_par+=l[i];
          nr_pare++;
      }
      else
      {
          suma_nr_impar+=l[i];
          nr_impare++;
      }
   }
      medie_aritmetica_nr_par=(float)suma_nr_par/nr_pare;
      medie_aritmetica_nr_impar=(float)suma_nr_impar/nr_impare;
      printf("\nMedia aritmetica a numerelor pare este: %lf",medie_aritmetica_nr_par);
      printf("\nMedia aritmetica a numerelor impare este: %lf",medie_aritmetica_nr_impar);

 return 0;

}
