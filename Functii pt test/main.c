#include <stdio.h>
#include <stdlib.h>
void citire_afisare_vector(int v[], int *n)                                //CITIRE SI AFISARE VECTOR
{
    int i;
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", n);
    for(i=0; i<*n; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
    for(i=0; i<*n; i++)
    {
        printf("%d ", v[i]);
    }
}

void ordonare_crescatoare(int v[], int n)
{
    int i,j,aux=0;
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
        {
            if(v[i]>v[j])//PT DESCRESCATOR <
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    for(i=0; i<n; i++)
        printf("%d ", v[i]);
}

void citire_afisare_matrice(int *l, int *c, int A[][100])               //CITIRE SI AFISARE MATRICE
{
    int i,j;
    printf("Introduceti nr de linii: ");
    scanf("%d", l);
    printf("Introduceti nr de coloane: ");
    scanf("%d", c);
    for(i=0; i<*l; i++)
        for(j=0; j<*c; j++)
        {
            printf("A[%d][%d] = ", i,j);
            scanf("%d", &A[i][j]);
        }
    for(i=0; i<*l; i++)
    {
        for(j=0; j<*c; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

void matrice_transpusa(int l, int c, int A[][100], int B[][100])            //AFLAREA TRANSPUSEI
{
    int i,j;
    for(i=0; i<c; i++)
    {
        for(j=0; j<l; j++)
        {
            B[i][j]=A[j][i];
        }
    }
    for(i=0; i<c; i++)
    {
        for(j=0; j<l; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}

























int main()
{
    int v[100],n,l,c,A[100][100],B[100][100];
    //citire_afisare_vector(v,&n);
    //ordonare_crescatoare(v,n);
    citire_afisare_matrice(&l,&c,A);
    matrice_transpusa(l,c,A,B);

    return 0;
}
