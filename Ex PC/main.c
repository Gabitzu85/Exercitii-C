#include <stdio.h>
#include <stdlib.h>
void suma_linie(int m[][10], int l, int c, int *lin)
{
    int i,j;
    int suma_linie=0;
    int suma_max_lin=0;
    int linie_sup;
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            suma_linie += m[i][j];
        }
        if(suma_max_lin < suma_linie)
        {
            suma_max_lin = suma_linie;
            linie_sup=i;
        }
        suma_linie = 0;

    }
    *lin=linie_sup;
}

void suma_coloana(int m[][10], int l, int c, int *col)
{
    int i,j;
    int suma_col=0;
    int suma_max_col=0;
    int col_sup;
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            suma_col += m[j][i];
        }
        if(suma_max_col < suma_col)
        {
            suma_max_col = suma_col;
            col_sup=i;
        }
        suma_col = 0;
    }
    *col=col_sup;
}


int main()
{
    int l,c,m[10][10],i,j,s1=0,lin_sup,col_sup;
    printf("Introduceti numarul de linii: ");
    scanf("%d", &l);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &c);
    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
    {
        printf("m[%d][%d]= ", i,j);
        scanf("%d", &m[i][j]);
    }
    suma_linie(m,l,c,&lin_sup);
        printf("%d ", lin_sup);
    suma_coloana(m,l,c,&col_sup);
        printf("%d ", col_sup);
    return 0;
}

