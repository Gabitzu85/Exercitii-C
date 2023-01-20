#include <stdio.h>
#include <stdlib.h>
void citire_matrice(int *l, int *c, int A[][100])
{
    int i,j;
    printf("Introduceti numarul de linii: ");
    scanf("%d", l);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", c);
    for(i=0; i<*l; i++)
        for(j=0; j<*c; j++)
    {
        printf("A[%d][%d] = ", i,j);
        scanf("%d", &A[i][j]);
    }
}


void aparitii(int A[][100], int l, int c, int v[])
{
    int i,j,aparitie=0,aparitie_max=0,ap,k;
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            for(k=j+1; k<c; k++)
            {
            if(A[i][j]==A[i][k])
                aparitie++;
            }
            if(aparitie_max<=aparitie)
               {
               aparitie_max=aparitie;
               ap=A[i][j];
               aparitie=0;//incercam break
               }
               else
               {
                   aparitie=0;
               }
        }
               aparitie=0;
               v[i]=ap;
               aparitie_max=0;
    }
}


int main()
{
    int A[100][100],l,c,apar,i,j,v[100];
    citire_matrice(&l,&c,A);
    /*printf("Introduceti numarul de linii: ");
    scanf("%d", &l);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &c);
    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
    {
        printf("A[%d][%d] = ", i,j);
        scanf("%d", &A[i][j]);
    }*/
    aparitii(A,l,c,v);
    for(i=0; i<l;i++)
        printf("%d ", v[i]);
    return 0;
}
