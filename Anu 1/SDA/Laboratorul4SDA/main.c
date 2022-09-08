#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void meniu_laborator()
{
    printf("\t\n\n-------------MENIUL PROGRAMULUI------------------");
    printf("\t\n1)citirea de la tastatura a elementelor arborelui");
    printf("\t\n2)afisarea la consola a elementelor arborelui    ");
    printf("\t\n3)cautarea unui nod in baza cimpului cheie si afisarea cimpurilor nodului gasit");
    printf("\t\n4)parcurgerea arborelui in inordine; ");
    printf("\t\n5)parcurgerea arborelui in preordine");
    printf("\t\n6)parcurgerea arborelui in postordine;");
    printf("\t\n7)parcurgerea arborelui in adincime (DFS)");
    printf("\t\n8)parcurgerea arborelui in largime  (BFS)");
    printf("\t\n9)balansarea arborelui ");
    printf("\t\n10)oglindirea arborelui");
    printf("\t\n11)curatirea elementelor arborelui");
    printf("\t\n12)eliberarea memoriei arborelui");
    printf("\t\n0)Iesirea din program");
}
struct ArboreBinarDeCautareNod
{
    char *nume;
    char *prenume;
    double nota_medie;
    int key;
    struct ArboreBinarDeCautareNod *fiu_sting, *fiu_drept;
};
typedef struct ArboreBinarDeCautareNod arbore;
arbore *creare_nod_nou(int key,char* nume,char* prenume,double nota_medie)
{
    arbore *nod_nou = malloc(sizeof(arbore));
    nod_nou->nume=malloc(100);
    nod_nou->prenume=malloc(100);
    strcpy(nod_nou->nume,nume);
    strcpy(nod_nou->prenume,prenume);
    nod_nou->nota_medie=nota_medie;
    nod_nou->key=key;
    nod_nou->fiu_sting= nod_nou->fiu_drept = NULL;
    return nod_nou;
}
arbore* insereaza_nod(arbore* radacina, int key,char *nume,char* prenume,double nota_medie)
{
    if (radacina==NULL)
    {
        return creare_nod_nou(key,nume,prenume,nota_medie);
    }
    if (key <radacina->key)
    {
        radacina->fiu_sting = insereaza_nod(radacina->fiu_sting,key,nume,prenume, nota_medie);
    }
    else if (key >radacina->key)
    {
        radacina->fiu_drept = insereaza_nod(radacina->fiu_drept,key,nume,prenume,nota_medie);
    }
    return radacina;
}
///Parcurgerea in inordine (stanga –varf – dreapta SVD) – se parcurge mai intai subarborele stang, apoi varful, apoi subarborele drept.
void afiseaza_arbore_inordine(arbore * nod_curent)
{
    if (nod_curent==NULL) //daca arborele nu are elemente nu avem ce sa parcuregem
    {
        return;
    }
    else
    {
        afiseaza_arbore_inordine(nod_curent->fiu_sting);
        printf("\nCheia: %d \nNumele: ", nod_curent->key);
        puts(nod_curent->nume);
        printf("Prenumele:");
        puts(nod_curent->prenume);
        printf("Nota_medie %.2lf\n\n",nod_curent->nota_medie);
        afiseaza_arbore_inordine(nod_curent->fiu_drept);
    }
}
arbore* cautare_nod_in_BST(arbore *radacina,int key)
{
   if(radacina == NULL)
    {
        return NULL;//in caz ca arborele nu are noduri
    }
	if(radacina->key==key)
    {
        return radacina;
    }
    if(key > radacina->key)
		return cautare_nod_in_BST(radacina->fiu_drept,key);

	if(key < radacina->key)
		return cautare_nod_in_BST(radacina->fiu_sting,key);
return NULL;//in cazul ca nodul nu exista in arbore
}
///Parcurgerea in preordine (virf- stinga – dreapta VSD) – se parcurge mai intai virful, apoi subarborele stang, apoi subarborele drept.
void afiseaza_arbore_preordine(arbore * nod_curent)
{
    if (nod_curent==NULL) //daca arborele nu are elemente nu avem ce sa parcuregem
    {
        return;
    }
    else
    {
        printf("\nCheia: %d \nNumele: ", nod_curent->key);
        puts(nod_curent->nume);
        printf("Prenumele:");
        puts(nod_curent->prenume);
        printf("Nota_medie %.2lf\n\n",nod_curent->nota_medie);
        afiseaza_arbore_preordine(nod_curent->fiu_sting);
        afiseaza_arbore_preordine(nod_curent->fiu_drept);
    }
}
///Parcurgerea in postordine (stanga –dreapta – virf SDV) – se parcurge mai intai subarborele stang, apoi subarborele drept, apoi virful.
void afiseaza_arbore_postordine(arbore * nod_curent)
{
    if (nod_curent==NULL) //daca arborele nu are elemente nu avem ce sa parcuregem
    {
        return;
    }
    else
    {
        afiseaza_arbore_postordine(nod_curent->fiu_sting);
        afiseaza_arbore_postordine(nod_curent->fiu_drept);
        printf("\nCheia: %d \nNumele: ", nod_curent->key);
        puts(nod_curent->nume);
        printf("Prenumele:");
        puts(nod_curent->prenume);
        printf("Nota_medie %.2lf\n\n",nod_curent->nota_medie);
    }
}
void parcurgerea_in_adincime(arbore *radacina)
{
    if (radacina)
    {
        printf("\nCheia: %d \nNumele: ", radacina->key);
        puts(radacina->nume);
        printf("Prenumele:");
        puts(radacina->prenume);
        printf("Nota_medie %.2lf\n\n",radacina->nota_medie);

        if (radacina->fiu_sting != NULL)
        {
            parcurgerea_in_adincime(radacina->fiu_sting);
        }
        if (radacina->fiu_drept)
        {
            parcurgerea_in_adincime(radacina->fiu_drept);
        }

    }
}
int adincime_arbore(arbore* radacina) ///adincimea unui arbore reprezinta numarul maxim de muchii de la  pina la cel mai adinc  nod frunza
{
	if (radacina==NULL)
    {
        return 0;
    }
	else
	{
		int partea_stinga = adincime_arbore(radacina->fiu_sting);
		int partea_dreapta = adincime_arbore(radacina->fiu_drept);

		if (partea_stinga >= partea_dreapta)
        {
            return partea_stinga+1;
        }
        else
        {
            return partea_dreapta+1;
        }
	}
}
void afisare_noduri_pe_nivel(arbore* radacina)
{
    int h = adincime_arbore(radacina);
    int i;
    for (i = 1; i <= h; i++)
    {
        afisare_nivel_curent(radacina, i);
    }
}
void afisare_nivel_curent(arbore* radacina, int nivel)
{
    if (radacina == NULL)
        return;
    if (nivel == 1)
        printf("%d ", radacina->key);
    else if (nivel > 1)
    {
        afisare_nivel_curent(radacina->fiu_sting, nivel - 1);
        afisare_nivel_curent(radacina->fiu_drept, nivel - 1);
    }
}
int  verificare_arbore_balansat(arbore *radacina)
{
    if(radacina==NULL)
    {
        return -1;///in caz ca arborele nu are elemente
    }
    int parte_stinga=adincime_arbore(radacina->fiu_sting);
    int parte_dreapta=adincime_arbore(radacina->fiu_drept);

    if(abs(parte_stinga-parte_dreapta)<=1 &&verificare_arbore_balansat(radacina->fiu_sting)&&verificare_arbore_balansat(radacina->fiu_drept))
    {
        return 1;///in cazul ca arborele e balansat
    }
    return 0; ///in cazul cind arborele exista are elemente da nu e balansat
}
void oglindirea_arborelui(arbore* radacina)
{
    if(radacina==NULL)
    {
        return;
    }
    else
        {
           arbore *nod_auxiliar;
           oglindirea_arborelui(radacina->fiu_sting);
           oglindirea_arborelui(radacina->fiu_drept);

           nod_auxiliar=radacina->fiu_sting;
           radacina->fiu_sting=radacina->fiu_drept;
           radacina->fiu_drept=nod_auxiliar;
        }
}
void stergere_noduri(arbore * nod_curent)
{
    if(nod_curent!=NULL)
    {
        stergere_noduri(nod_curent->fiu_sting);
        stergere_noduri(nod_curent->fiu_drept);
        free(nod_curent);
    }
}
void curatirea_arborelui(arbore* radacina)
{
    if(radacina != NULL)
    {
            stergere_noduri(radacina);
            //radacina=NULL;
    }
    //radacina=NULL;
    printf("\nArborele a fost curatit!!!");
}
void stergere_arbore_binar(arbore * radacina)
{
    if(radacina)
    {
        curatirea_arborelui(radacina);
    }
    //radacina=NULL;
    printf("\nArborele a fost eliberat cu succes!!!");
}
int main()
{
    arbore *radacina = NULL;
    int key,elemente,m;
    double nota_medie;
    char *nume=malloc(100);
    char *prenume=malloc(100);
    do
    {
        meniu_laborator();
        printf("\n\nAlege optiunea dorita:");
        scanf("%d",&m);
        switch (m)
        {
        case 1:
        {
            printf("\nIntrodu datele nodului radacina:");
            printf("\nIntrodu cheia: ");
            scanf("%d",&key);
            printf("\nIntrodu nota_medie: ");
            scanf("%lf",&nota_medie);
            fflush(stdin);
            printf("\nIntrodu numele\n");
            gets(nume);
            printf("\nIntrodu prenumele\n");
            gets(prenume);
            radacina=insereaza_nod(radacina,key,nume,prenume,nota_medie);
            printf("\nCite noduri vreti sa mai introduceti in arbore:");
            scanf("%d",&elemente);
            for(int i=0; i<elemente; i++)
            {
                printf("\nIntrodu cheia pentru nodul %d: ",i+1);
                scanf("%d",&key);
                printf("\nIntrodu nota_medie a studentului %d: ",i+1);
                scanf("%lf",&nota_medie);
                fflush(stdin);
                printf("\nIntrodu numele studentului %d \n",i+1);
                gets(nume);
                printf("\nIntrodu prenumele studentului %d \n",i+1);
                gets(prenume);
                insereaza_nod(radacina,key,nume,prenume,nota_medie);
            }
            break;
        }
        case 2:
        {
            printf("\nElementele arborelui sunt :");
            afiseaza_arbore_inordine(radacina);
            break;
        }
        case 3:
        {
            printf("\nIntroduce cheia nodului pe care il cauti:");
            scanf("%d",&key);
            arbore *nod_gasit=cautare_nod_in_BST(radacina,key);
            if(nod_gasit!=NULL)
            {
                printf("\nNodul a fost gasit si cimpurile acestuia sunt:");
                printf("\nCheia:%d \nNumele:",nod_gasit->key);
                puts(nod_gasit->nume);
                printf("Prenumele:");
                puts(nod_gasit->prenume);
                printf("Nota medie:%.2lf",nod_gasit->nota_medie);
            }
            else
            {
                printf("\nNu exista nod cu asa cheia in arbore");
            }
            break;
        }
        case 4:
        {
            printf("\nArborele binar de cautare afisat in inordine:");
            afiseaza_arbore_inordine(radacina);
            break;
        }
        case 5:
        {
            printf("\nArborele binar de cautare afisat in preordine:");
            afiseaza_arbore_preordine(radacina);
            break;
        }
        case 6:
        {
            printf("\nArborele binar de cautare afisat in postordine:");
            afiseaza_arbore_postordine(radacina);
            break;
        }
        case 7:
        {
            parcurgerea_in_adincime(radacina);
            break;
        }
        case 8:
        {
             printf("\nArborele parcurs in largime este:");
             afisare_noduri_pe_nivel(radacina);
             break;
        }
        case 9:
        {
            int gasit = verificare_arbore_balansat(radacina);
            if(gasit==-1)
            {
                printf("\nArborele binar de cautare este unul vid !!!");
            }
            else if(gasit==0)
            {
               printf("\nArborele binar de cautare nu este unul balansat");
            }
            else if(gasit==1)
            {
                printf("\nArborele binar de cautare este unul balansat");
            }
            break;
        }
        case 10:
        {
           oglindirea_arborelui(radacina);
           printf("\nTasteaza 2 pentru a vedea modificarile: ");
           break;
        }
        case 11:
        {
            curatirea_arborelui(radacina);
            radacina=NULL;
            break;
        }
        case 12:
        {
            stergere_arbore_binar(radacina);
            radacina=NULL;
            break;
        }
        }
    }
    while(m>=1 && m<=12);
    return 0;
}
