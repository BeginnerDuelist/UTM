#include <iostream>
#include<math.h>
using namespace std;
double f(double x){ //prima functie din varianta 3
 return exp(x)+3*x;
}
double f1(double x){ // a doua functie din varianta3
return pow(x,3)-23*x-42;
}
/*
voi folosi o functie pentru a calcula solutiile ambelor ecuatii cu metoda injumatatirii intervalelor
functia primeste ca parametrii valorile intervalului unde se afla solutia si un pointer la o functie
*/
void injumatatirea_intervalului(double a,double b,double(*func)(double))
{
    int k=0; //variabila ce va stoca nr de iteratii ce sau efectuat pina la gasirea solutiei
    double c = 0,eps = 0.000001;// c- solutia ,eps-eroare admisibila
    while((b-a)>eps ) //atita timp cit se satsfice conditiia
    {
        k++;
        c = a+(b-a)/2;//aflam mijlocu intervalului
        if (func(c)==0)//daca valoare functiei in mijlocul intervalului ii egala solutia inseamna ca am gasit solutie
            break;// programu se opreste
        if (func(a)*func(c)<0) b = c;//daca nu se verifica conditia daca e adevarata inseamna ca solutia se afla in intervalul (a,c) si repetam procedura cu b=c
        else a = c;//daca nu se respecta conditia inseamna ca solutia se afla in intervalul (c,b) si repetam algoritmul cu a=c
    }
    cout <<"\nRadacina x=" << c<<endl;//afisam radacina gasita
    cout<<"Numarul de iteratii: "<<k<<endl;//afisam nr de iterati efectuate pina la gasirea solutiei
}
double f3(double x){ //prima functie din varianta 3 scrisa sub  forma x=fi(x)
 return exp(x)/-3;
}
double f4(double x){ //a doua functie din varianta 3 scrisa sub  forma x=fi(x)
return (pow(x,3)-42)/23;
}
void aproximatii_succesive(double x0, double(*func)(double))//x0 este o valoare initiala aleasa de noi ce apartine intervalului unde se afla solutia noastra
{
    int k=0;//variabila ce ne va arata nr de iteratii efectuate pina la gasirea solutiei
    double x1,eps=0.000001;//x1-variabila ce va stoca valoare functiei in punctul initial dat de noi; eps-eroarea
    while(1) //folosim while pentru agasi solutia ecuatiei
    {
        x1=func(x0);//x1 ii atribuim valoarea functiei in punctul initial ales de noi ce apartine intervalului (a,b)
        k++;//incrementam k
        if(abs(x1-x0)<eps) //daca acesta conditie se indeplineste inseamna ca am gasit solutia
        {
            cout<<"Radacina x= "<<x0<<endl<<"Numarul de iteratii "<<k<<endl;//afisam radacina si numarul de iteratii
            break;//dupa ce am gasit solutia folosim break pentru a iesi din bucla while
        }
        x0=x1;//in caz contrar repetam algoritmul cu x0=x1;
    }
}
double fderiv(double x){ //derivata functiei f de mai sus
    return 3+exp(x);
}
double f1deriv(double x){ //derivata functiei f1 de mia sus
    return 3*pow(x,2)-23;
}
/*x0=valoarea initiala a functiei alesa de noi arbitrar din intervalul unde se afla solutia cautata
func,func2 pointeri la functii prima e la la functia unde se afla ecuatia careia trebuie sai gasim solutie func2- derivata func
*/

void metoda_tangentelor(double x0,double (*func) (double),double(*func2)(double))
{
    int k=0;//variabila care ne va arata de cite ori am folosit algorimul pina la gasirea solutie
    double x1,eps=0.000001;//x1-punctul de pe axa ox obtinut la intersectarea tangentei prin x0 eps-exactitatea cu care sa obtinut solutia
    while(1)//incepem algortmul
    {
        x1=x0-func(x0)/func2(x0);//formula prin care aflam punctul x1 ce se apropie rapid de solutia cautata
        k++;//incrementam valoarea lui k
        if(abs(x1-x0)<eps)// daca se respecta conditia data inseamna ca am gasit solutia
        {
            cout<<"Radacina x= "<<x0<<endl;//daca am gasit solutia o afisam si mai afisam nr de iteratii a algoritmului pina la gasirea solutiei
            cout<<"Numarul de iteratii :"<<k<<endl;
            break;//iesim din bucla while dupa ce am gasit solutia
        }
        x0=x1;//daca nu sa gasit solutia repetam algoritmul cu x0=x1;
     }
}
int main()
{
cout<<"\nMetoda injumatatirii intervalului"<<endl;
cout<<"Ecuatia 1:";
injumatatirea_intervalului(-0.4,-0.2,&f);//dam valorile intervalului a si b si adresa functiei unde se afla ecuatia spre rezolvare
cout<<"Ecuatia 2:";
injumatatirea_intervalului(-2.77,2.77,&f1);

cout<<"\nMetoda aproximatiilor succesive:"<<endl;
cout<<"Ecuatia 1:"<<endl;;
aproximatii_succesive(-0.4,&f3);
cout<<"Ecuatia 2:"<<endl;
aproximatii_succesive(-0.2,&f4);


cout<<"\nMetoda tangentelor (Newton):"<<endl;
cout<<"Ecuatia 1:"<<endl;
metoda_tangentelor(-0.4,&f,&fderiv);
cout<<"Ecuatia 2:"<<endl;
metoda_tangentelor(-0.5,&f1,&f1deriv);

 return 0;
}
