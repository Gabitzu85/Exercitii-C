#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,A[100][100],B[100][100],l1,c1,l2,c2,REZ[100][100]={0},k,p;
    printf("Introduceti numarul de linii si coloane al matricei A: ");
    scanf("%d %d", &l1,&c1);
    printf("Introduceti elementele: \n");
    for(i=0; i<l1; i++)
        for(j=0; j<c1; j++)
    {
        printf("A[%d][%d] = ", i,j);
        scanf("%d", &A[i][j]);
    }
    printf("Matricea A: \n");
    for(i=0; i<l1; i++)
    {
        for(j=0; j<c1; j++)
    {
        printf("%d ", A[i][j]);
    }
    printf("\n");
    }
    printf("Introduceti numarul de linii si coloane al matricei B: ");
    scanf("%d %d", &l2,&c2);
    printf("Introduceti elementele: \n");
    for(i=0; i<l2; i++)
        for(j=0; j<c2; j++)
    {
        printf("B[%d][%d] = ", i,j);
        scanf("%d", &B[i][j]);
    }
    printf("Matricea B: \n");
    for(i=0; i<l2; i++)
    {
        for(j=0; j<c2; j++)
    {
        printf("%d ", B[i][j]);
    }
    printf("\n");
    }
    for(i=0; i<l1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c2; k++)
            {
                if(A[i][j]==B[i][k])
                {
                   REZ[i][j]=A[i][k];

                }
            }
        }
    }
    printf("Matricea REZ: \n");
    for(i=0; i<l2; i++)
    {
        for(j=0; j<c2; j++)
    {
        printf("%d ", REZ[i][j]);

    }
    printf("\n");
    }
    return 0;
}
