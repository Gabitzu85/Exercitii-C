#include <stdio.h>
#include <stdlib.h>

struct sondaj
{
    char nume[50];
    char localitate[50];
    int CUIE[50];
};

struct sondaj sond[100];

void citire_sondaj(int n)
{
    int i,j,MUIE;
    printf("\nIntroduceti datele: \n");
    for(i=0; i<n; i++)
    {
        printf("Nume: ");
        fflush(stdin);
        gets(sond[i].nume);
        printf("Localitate: ");
        fflush(stdin);
        gets(sond[i].localitate);
        printf("Introduceti nr de CUIE: ");
        scanf("%d", &MUIE);
        for(j=0; j<MUIE; j++)
        {
            printf("CUIE[%d] = ", j);
            scanf("%d", &sond[j].CUIE);
        }
    }
}


int main()
{
    int nr;
    printf("Introduceti nr de persoane: ");
    scanf("%d", &nr);
    citire_sondaj(nr);



    return 0;
}
