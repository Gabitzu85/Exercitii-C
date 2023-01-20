#include <stdio.h>
#include <stdlib.h>

struct fig_geom
{
    int lungime;
    int latime;
};

union figura
{
    char nume;
    int raza;
    int latura;
    struct fig_geom geom;
};

int main()
{
    union figura figu;

    printf("Alegeti tipul figurii introducand c(cerc), p(patrat) sau d(dreptunghi)!\n");
    scanf("%c", &figu.nume);


    if(figu.nume=='c' || figu.nume=='p' || figu.nume=='d')
    {
        printf("Ati introdus: %c", figu.nume);
        if(figu.nume=='c')
        {
            printf("\nFigura este un cerc!");
            printf("\nRaza = ");
            scanf("%d", &figu.raza);
            printf("\nRaza este %d!", figu.raza);
            printf("\nPerimetrul cercului este %.2f!", 2*figu.raza*3.14);
            printf("\nAria cercului este %.2f!", 3.14*figu.raza*figu.raza);
        }
        else if(figu.nume=='p')
        {
            printf("\nFigura este un patrat!");
            printf("\nLatura = ");
            scanf("%d", &figu.latura);
            printf("Latura este %d!", figu.latura);
            printf("\nPerimetrul patratului este %d!", 4*figu.latura);
            printf("\nAria patratului este %d!", figu.latura*figu.latura);

        }
        else if(figu.nume=='d')
        {
            printf("\nFigura este un dreptunghi!");
            printf("\nLungime = ");
            scanf("%d", &figu.geom.lungime);
            printf("Latime = ");
            scanf("%d", &figu.geom.latime);
            printf("Lungime este %d, iar latimea este %d!", figu.geom.lungime, figu.geom.latime);
            printf("\nPerimetrul dreptunghiului este %d!", 2*(figu.geom.lungime+figu.geom.latime));
            printf("\nAria dreptunghiului este %d!", figu.geom.latime*figu.geom.lungime);
        }
    }
    else
    {
        printf("Nu ati introdus corect!");
    }
    return 0;
}
