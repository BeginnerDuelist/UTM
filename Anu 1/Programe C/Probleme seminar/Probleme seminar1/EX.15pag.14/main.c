#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,y1,y2,d,d1;
    double AB,xm,ym;
    printf("Introducem coordonatele punctului A",x1,y1);
    scanf("%d %d",&x1,&y1);
    printf("\nIntroducem coordonatele punctului B",x2,y2);
    scanf("%d %d",&x2,&y2);
    d=x2-x1;
    d1=y2-y1;
    AB=sqrt(pow(d,2)+pow(d1,2));
    printf("\nDistanta dintre punctele A si B este:=%f",AB);
    xm=(x1+x2)/2;
    ym=(y1+y2)/2;
    printf("\nCoordonatele punctului M sunt %.2f,%.2f",xm,ym);
    return 0;
}


    return 0;
}
