#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    printf("Ex.36 pag.26");

    int a=30,b=30,c=120;
    if (a+b+c==180) printf("\nExista un astfel de triunghi cu masura unghiurilor de %d %d %d",a,b,c);
    else printf("\n Nu exista un astfel de triunghi cu masura unghiurilor de %d %d %d",a,b,c);
    if ((a<90) &&(b<90) &&(c<90)) printf("\nTriunghiul nostru este unul ascutitunghic");
    else if ((a<90)||(a>90)&&((b<90)||(b>90))&&((c<90 )||(c>90))) printf("\nTriunghiul nostru este unul obtuzunghic");

    printf("\nEx.37 pag.26");

    double d=3,e=4,f=5;
    if((d+e>f)&&(d+f>e)&&(e+f>d)) printf("\nTriunghiul cu laturile %lf %lf %lf este valid",d,e,f);
    else printf("\nTriunghiul cu laturile %lf %lf %lf nu exista",d,e,f);
    if ((d==e)&&(e==f)) printf("\nTriunghiul este echilateral");
    else if ((d==e)&&(e!=f)) printf("\nTriunghiul este isoscel");
    else printf("\nTriunghiul este scalen");

    printf("\nEx.38 pag.26");
      float a2, b2, c2, a1, b1, c1;
      const double pi=3.14159265359;
    bool q = false;
    printf("\nIntroducem 3 numere pozitive\n");
    scanf("%f%f%f", &a2, &b2, &c2);
    if (((a2 + b2) > c2) && ((a2 + c2) > b2) && ((b2 + c2) > a2))
    { printf("exista triunghi a carui laturi pot fi: a2 = %.2f, b2 = %.2f, c2 = %.2f\n", a2, b2, c2);
        q = true;
    } else
        printf("nu exista triunghi a carui laturi pot fi: a2 = %.2f, b2= %.2f, c2 = %.2f\n",a2 ,b2 ,c2);
     if (q)
    {   a1 = acos((c2 * c2 + b2 * b2 - (a2 * a2)) / (2 * c2 * b2))*(180/pi);
        b1 = acos((a2 * a2 + c2 * c2 - (b2 * b2)) / (2 * a2 * c2))*(180/pi);
        c1 = acos((a2 * a2 + b2 * b2 - (c2 * c2)) / (2 * a2 * b2))*(180/pi);
     if ((a1 == 90) || (b1 == 90) || (c1 == 90)) printf("triungiul este dreptunghic\n");
        else if ((a1 > 90) || (b1 > 90) || (c1 > 90)) printf("triunghiul este obtuzunghic\n");
        else printf("triunghiul este ascutitunghic\n");
         }
printf("\nEx.39 pag.26");
float v, w, r, t, y1, y2, x, x0;
    bool q1 = false;

    printf("Introdu numarul v = ");
    scanf("%f", &v);
    printf("\nIntrodu numarul w = ");
    scanf("%f", &w);
    printf("\nIntrodu numarul r = ");
    scanf("%f", &r);
    printf("\nIntrodu numarul t = ");
    scanf("%f", &t);
    printf("\nIntrodu numarul x = ");
    scanf("%f", &x);

    y1 = v * x + w;
    y2 = r * x + t;

    if((a-c)!=0)
    { x0 = ((t - w) / (v - r));
    q1 = true;
    }
    printf("dreapta y1 are pozitia cu coordonatele (%.2f,%.2f)\n",y1,x);
    printf("dreapta y2 are pozitia cu coordonatele (%.2f,%.2f)\n", y2, x);
    if(q)
    printf("dreptele se vor intersecta in punctul x = %.2f\n", x0);
return 0;
}


