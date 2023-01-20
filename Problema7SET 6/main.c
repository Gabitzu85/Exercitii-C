#include <stdio.h>
#include <stdlib.h>
/*void afisare_citire(int m[][100],int l,int c)
{
    int i,j;
    printf("Introduceti numarul de linii al matricei: ");
    scanf("%d", &l);
    printf("Introduceti numarul de coloane al matricei: ");
    scanf("%d", &c);
    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
    {
        printf("m[%d][%d]= ",i,j);
        scanf("%d", &m[i][j]);
    }
    printf("Matricea introdusa este: \n");
    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
        {
            printf("%d ", m[i][j]);
        }
}*/

int main()
{
    int i,j,l,c,dimensiune_matrice,*matr;
    printf("Introduceti numarul de linii al matricei: ");
    scanf("%d", &l);
    printf("Introduceti numarul de coloane al matricei: ");
    scanf("%d", &c);
    dimensiune_matrice=l*c*sizeof(int);
    matr=(int*)malloc(dimensiune_matrice);
     for(i=0; i<l; i++)
        for(j=0; j<c; j++)
    {
        printf("m[%d][%d]= ",i,j);
        scanf("%d", &matr[i][j]);
    }
     printf("Matricea introdusa este: \n");
    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
        {
            printf("%d ", matr[i][j]);
        }





    return 0;
}
