#include <stdio.h>
#include <stdlib.h>
struct autor
{
    char nume[50];
    char prenume[50];
    char gen;
};

union carte
{
    char titlu[25];
    int an;
    struct autor aut;

};

union carte cart;

int main()
{
    int nr_carti,i;
    printf("Introduceti nr de carti: ");
    scanf("%d", &nr_carti);
    printf("\nIntroduceti datele despre carti: ");
    for(i=0; i<nr_carti; i++)
    {
        printf("\nTitlul: ");
        fflush(stdin);
        gets(cart.titlu);
        printf("An: ");
        scanf("%d", &cart.an);
        printf("Informatii despre autor: ");
        printf("\nNume: ");
        fflush(stdin);
        gets(cart.aut.nume);
        printf("Prenume: ");
        fflush(stdin);
        gets(cart.aut.prenume);
        do
        {
            fflush(stdin);
            printf("Gen(D, C sau T): ");
            fflush(stdin);
            scanf("%c", &cart.aut.gen);
            fflush(stdin);

        }while(cart.aut.gen!='c' || cart.aut.gen!='C');




    }

    return 0;
}
