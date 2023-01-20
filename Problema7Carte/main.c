#include <stdio.h>
#include <stdlib.h>
void creare(int B[100][100], int A[100][100], int l, int c,int *linie)
{
    int i,j,aux=0,lin=0,k;
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            if(A[i][j]>A[i][j+1])
            aux++;
            else {
                    aux=0;
                    break;
                 }
            if(aux=c-1)
            {
                aux=0;
                for(k=0; k<c; k++)
                {
                    B[lin][k]=A[i][k];
                }
                lin++;
            }
            if(A[i][j]=A[i][j+1])
            {
                aux=0;
                break;
            }
        }
    }
    *linie=lin;
}
int main()
{
    int l,c,A[100][100],i,j,B[100][100],liniutza;
    printf("Introduceti numarul de linii: ");
    scanf("%d", &l);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &c);
    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
    {
        printf("A[%d][%d] = ", i,j);
        scanf("%d", &A[i][j]);
    }
    creare(B,A,l,c,&liniutza);
    for(i=0; i<liniutza; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
