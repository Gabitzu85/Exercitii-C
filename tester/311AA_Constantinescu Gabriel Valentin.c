//311AA, Constantinescu Gabriel Valentin
#include <stdio.h>
#include <stdlib.h>

struct firma
{
    char tip[50];
    char consum[50];
    int cost_inchiriere;
    char disponibilitate;
};

void citire_afisare_firma(int *n, struct firma firm[100])
{
    int i,aux;
    //Populare vector firma
    printf("\nIntroduceti datele: \n\n");
    for(i=0; i<*n; i++)
    {
        printf("Tip: ");
        fflush(stdin);
        gets(firm[i].tip);
        printf("Consum: ");
        fflush(stdin);
        gets(firm[i].consum);
        printf("Cost inchiriere: ");
        scanf("%d", &firm[i].cost_inchiriere);
        fflush(stdin);
        do
        {
            printf("Disponibilitate(D/N): ");
            fflush(stdin);
            scanf("%c", &firm[i].disponibilitate);
            if(firm[i].disponibilitate=='D' || firm[i].disponibilitate=='d' || firm[i].disponibilitate=='N' || firm[i].disponibilitate=='n')
            {
                aux=1;
            }
            else
            {
                aux=0;
            }
        } while(aux!=1);
        printf("\n");
    }
    //printare (facuta optional pt a vedea daca datele se citesc corect)
    /*printf("\nDatele introduse sunt: \n");
    for(i=0; i<*n; i++)
    {
        printf("\nTip: %s ", firm[i].tip);
        printf("\nConsum: %.2f", firm[i].consum);
        printf("\nCost inchiriere: %d", firm[i].cost_inchiriere);
        printf("\nDisponibilitate: %c", firm[i].disponibilitate);
        printf("\n");
    }*/
}

void determinare(int *n, struct firma firm[100], int *pret_minim, int *pret_maxim)
{
    char cons[50];
    printf("Introduceti consumul pe care doriti sa-l cautati: ");
    fflush(stdin);
    gets(cons);
    *pret_minim=firm[0].cost_inchiriere;
    *pret_maxim=firm[0].cost_inchiriere;
    for(i=0; i<*n; i++)
    {
        if(strcmp(firm[i].consum,cons)==0)
        {
            if(firm[i].cost_inchiriere<(*pret_minim))
            (*pret_minim)=firm[i].cost_inchiriere;
            if(firm[i].cost_inchiriere>(*pret_maxim))
            (*pret_maxim)=firm[i].cost_inchiriere;
        }
    }
}

void informatie(int *n, struct firma firm[100])
{
    int i,pret_cautat,
    struct firma vector_masini[100];
    char tip[50];
    printf("Introduceti tipul pe care doriti sa-l cautati: ");
    fflush(stdin);
    gets(tip);
    printf("Introduceti pretul orientativ: ");
    scanf("%d", &pret_cautat);
    for(i=0; i<*n; i++)
    {
        if(strcmp(firm[i].tip,tip)==0)
        {
            if(pret_cautat > firm[i].cost_inchiriere)
            {
                vector_masini[i].nume = firm[i].nume;
                vector_masini[i].consum = firm[i].consum;
                vector_masini[i].cost_inchiriere= firm[i].cost_inchiriere;
                vector_masini[i].disponibilitate=firm[i].disponibilitate;
            }
        }
    }
}


int main()
{
    int i;
    struct firma firm[100];
    struct firma v_masini[100];
    int n,pret_min,pret_max;
    printf("Introduceti nr de autoturisme: ");
    scanf("%d", &n);
    citire_afisare_firma(&n,firm);
    //determinare(&n,firm,&pret_min,&pret_max);
    //printf("\nIntervalul este: %d %d", pret_min, pret_max);
    informatie(&n,firm);
    for(i=0; i<n; i++)
    {
       printf("%c ", v_masini[i].tip);
       printf("%c ", v_masini[i].consum);
       printf("%d ", v_masini[i].cost_inchiriere);
       printf("%c ", v_masini[i].disponibilitate);
    }
    return 0;
}
