#include <stdio.h>
#include <stdlib.h>
struct persoana
{
    char nume[50];
    char prenume[50];
    char CNP[13];
};
//creare vector persoane
struct persoana pers[100];

void functiec(struct persoana pers[100],int nr)
{
    int i,aux=0;
    struct persoana memorator;
    while(aux==0)
    {
        aux=1;
        for(i=0; i<nr-1; i++)
        {
            if(strcmp(pers[i].nume,pers[i+1].nume)>0)
            {
                aux=0;
                memorator=pers[i];
                pers[i]=pers[i+1];
                pers[i+1]=memorator;
            }
        }
    }
    printf("\nPersoanele ordonate crescator sunt: \n");
    for(i=0; i<nr; i++)
    {
        printf("\nNume: %s", pers[i].nume);
        printf("\nPreume: %s", pers[i].prenume);
        printf("\nCNP: %s", pers[i].CNP);
        printf("\n");
    }
}

int main()
{
    int i,nr_persoane;
    printf("Introduceti nr. de persoane: ");
    scanf("%d", &nr_persoane);
    //Populare vector persoane
    printf("\nIntroduceti datele: \n");
    for(i=0; i<nr_persoane; i++)
    {
        printf("\nNume: ");
        fflush(stdin);
        gets(pers[i].nume);
        printf("Prenume: ");
        fflush(stdin);
        gets(pers[i].prenume);
        do{
        printf("CNP: ");
        fflush(stdin);
        gets(pers[i].CNP);
        if(strlen(pers[i].CNP)!=13)
        {
            printf("CNP-ul nu are 13 cifre! Reincercati!\n");
        }
        } while(strlen(pers[i].CNP)!=13);
    }
    //Printare vector persoane
    /*printf("\nDatele care au fost introduse sunt: \n");
    for(i=0; i<nr_persoane; i++)
    {
        printf("\nNume: %s", pers[i].nume);
        printf("\nPrenume: %s", pers[i].prenume);
        printf("\nCNP: %s", pers[i].CNP);
    }*/
    functiec(pers,nr_persoane);


    return 0;
}
