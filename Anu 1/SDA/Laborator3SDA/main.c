#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void meniu_laborator()
{
    printf("\t\n\n-------------MENIUL PROGRAMULUI------------------");
    printf("\t\n1)citirea de la tastatura a elementelor arborelui");
    printf("\t\n2)afisarea la consola a elementelor arborelui    ");
    printf("\t\n3)calcularea adincimii arborelui                 ");
    printf("\t\n4)cautarea unui nod in baza unei chei de cautare ");
    printf("\t\n5)calcularea adincimii unui nod ( nodul va fi selectat in baza unei chei de cautare )");
    printf("\t\n6)calcularea inaltimii unui nod ( nodul va fi selectat in baza unei chei de cautare )");
    printf("\t\n7)afisarea tuturor frunzelor arborelui");
    printf("\t\n8)curatirea elementelor arborelui");
    printf("\t\n9)eliberarea memoriei arborelui");
    printf("\t\n0)Iesirea din program");
}
struct ArboreBinarNod
{
    int valoare;
    struct ArboreBinarNod *fiu_sting, *fiu_drept;
};
typedef struct ArboreBinarNod arbore;

arbore *creare_nod_nou(int valoare)
{
    arbore *nod_nou = malloc(sizeof(arbore));
    nod_nou->valoare = valoare;
    nod_nou->fiu_sting= nod_nou->fiu_drept = NULL;
    return nod_nou;
}
arbore* insereaza_nod(arbore* radacina, int valoare)
{
    if (radacina==NULL)
    {
        return creare_nod_nou(valoare);
    }
    if (valoare<radacina->valoare)
    {
        radacina->fiu_sting = insereaza_nod(radacina->fiu_sting,valoare);
    }
    else if (valoare > radacina->valoare)
    {
        radacina->fiu_drept = insereaza_nod(radacina->fiu_drept,valoare);
    }
    return radacina;
}
void afisare_arbore(arbore *radacina, int distanta)
{
	if (radacina == NULL)
		return;

	distanta += 8;
    afisare_arbore(radacina->fiu_drept,distanta);

	printf("\n");
	for (int i = 8; i < distanta; i++)
		printf(" ");
	printf("  %d \n",radacina->valoare);

	afisare_arbore(radacina->fiu_sting,distanta);
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
arbore* cautare_nod_in_arbore_binar(arbore *radacina, int key)
{
	if(radacina == NULL)
    {
        return NULL;//in caz ca arborele nu are noduri
    }
	if(radacina->valoare==key)
    {
        return radacina;
    }
    if(key > radacina->valoare)
		return cautare_nod_in_arbore_binar(radacina->fiu_drept,key);

	if(key < radacina->valoare)
		return cautare_nod_in_arbore_binar(radacina->fiu_sting,key);
return NULL;
}
int adincime_nod_arbore(arbore *nod_curent, int valoare, int adincime) ///reprezinta numarul de noduri de la nodul curent la nodul radacina al arborelui binar
{
	if(nod_curent == NULL)
		return 0;

	if(nod_curent -> valoare == valoare)
		return adincime;

	int aux = adincime_nod_arbore(nod_curent->fiu_sting, valoare,adincime+1);

	if(aux != 0)
		return aux;

	aux = adincime_nod_arbore(nod_curent->fiu_drept, valoare, adincime + 1);

	return aux;
}

int inaltimea_unui_nod (arbore *nod_curent, int valoare)  /// reprezinta numarul maxim de muchii de la nod pina la cel mai adinc nod frunza
{
	arbore* nod_aux = cautare_nod_in_arbore_binar(nod_curent,valoare);

	return adincime_arbore(nod_aux);
}
void afisare_nod_frunza(arbore *nod_curent) /// nod frunza e nodul care nu are niciun fiu , se mai numesc noduri terminale
{
	if(nod_curent != NULL)
	{
		if(nod_curent->fiu_sting == NULL && nod_curent->fiu_drept == NULL)
			printf("%d ", nod_curent->valoare);
		else
		{
			afisare_nod_frunza(nod_curent->fiu_sting);
			afisare_nod_frunza(nod_curent->fiu_drept);
		}
	}
}
void stergere_noduri(arbore * nod_curent)
{
    if(nod_curent)
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
            radacina=NULL;
    }
    printf("\nArborele a fost curatit!!!");
}
void stergere_arbore_binar(arbore * radacina)
{
    if(radacina)
    {
        curatirea_arborelui(radacina);
    }
    radacina=NULL;
    printf("\nArborele a fost eliberat cu succes!!!");
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
        printf("%d ",nod_curent->valoare);
        afiseaza_arbore_inordine(nod_curent->fiu_drept);
    }
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
        printf("%d ",nod_curent->valoare);
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
        printf("%d ",nod_curent->valoare);
    }
}
int main()
{
    arbore *radacina = NULL;
    int m,cheie;
    do
    {
        meniu_laborator();
        printf("\n\nAlege optiunea dorita:");
        scanf("%d",&m);
        switch (m)
        {
        case 1:
        {
            printf("\nIntrodu valoarea nodului radacina a arborelui:");
            int valoare,elemente;
            scanf("%d",&valoare);
            radacina=insereaza_nod(radacina,valoare);
            printf("\nCite noduri vreti sa mai introduceti in arbore:");
            scanf("%d",&elemente);
            for(int i=0; i<elemente; i++)
            {
                scanf("%d",&valoare);
                insereaza_nod(radacina,valoare);
            }
            break;
        }
        case 2:
        {
            printf("\nAfisam arborele binar:");
            afisare_arbore(radacina,0);
            printf("\nInordine:");
            afiseaza_arbore_inordine(radacina);
            printf("\nPreordine:");
            afiseaza_arbore_preordine(radacina);
            printf("\nPostordine:");
            afiseaza_arbore_postordine(radacina);
            break;
        }
        case 3:
        {
            printf("\nValoare adincimii arborelui binar este : %d",adincime_arbore(radacina)-1);
            break;
        }
        case 4:
        {
            printf("\nIntroduceti cheia(valoare) unui nod pentru al gasi:");
            scanf("%d",&cheie);
            arbore* aux=cautare_nod_in_arbore_binar(radacina,cheie);
            if(aux==NULL)
            {
                printf("\nNodul dat nu exista in arbore!!!");
            }
            else
            {
                printf("\nNodul cu cheia=%d a fost gasit pe pozitia %p",cheie,aux);
            }
            break;
        }
        case 5:
        {
            printf("\nIntroduceti cheia(valoare) unui nod pentru ai gasi adincimea:");
            scanf("%d",&cheie);
            printf("\nAdincimea nodului cu valoarea %d este:",cheie);
            printf("%d ",adincime_nod_arbore(radacina,cheie,0));
            break;
        }
        case 6:
        {
            printf("\nIntroduceti cheia(valoare) unui nod pentru ai gasi adincimea:");
            scanf("%d",&cheie);
            printf("\nInalitimea nodului cu valoarea %d este:",cheie);
            printf("%d",inaltimea_unui_nod(radacina,cheie)-1);
            break;
        }
        case 7:
        {
            printf("\nNodurile frunza ale arborelui binar sunt:");
            afisare_nod_frunza(radacina);
            break;
        }
        case 8:
        {
            curatirea_arborelui(radacina);
            radacina=NULL;
            break;
        }
        case 9:
        {
            stergere_arbore_binar(radacina);
            radacina=NULL;
            break;
        }
        }
    }
    while(m>=1 && m<=9);
return 0;
}
