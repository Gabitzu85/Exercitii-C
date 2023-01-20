#include <stdio.h>
#include <stdlib.h>
void citire_afisare_matrice(float A[][100], int *l, int *c)
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
        scanf("%f", &A[i][j]);
    }
    printf("Matricea A este: \n");
     for(i=0; i<*l; i++)
     {
        for(j=0; j<*c; j++)
    {
        printf("%.2f ", A[i][j]);
    }
    printf("\n");
     }
}

void rezolvare(int l, int c, float A[][100], int *K)
{
    int i,j,aux=0,linie=0,memorator=0;

    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            if(A[i][j]<A[i][j+1])
                {
                    aux++;
                    memorator++;
                }
            else
            {
                aux=0;
                break;
            }
            if(A[i][j]=A[i][j+1])
            {
                aux=0;
                break;
            }

        }
    }
    *K=memorator;
}

int main()
{
    float A[100][100];
    int l,c,i,j,K,pointer_functie;
    citire_afisare_matrice(A,&l,&c);
    rezolvare(l,c,A,&pointer_functie);
    printf("Nr de linie ordonate crescator sunt: %d\n", pointer_functie);
    printf("Introduceti K ( >= 0): ");
    scanf("%d", &K);
    if(K < 0)
    {
        printf("K < 0 !!!");
        exit(0);
    }
    if(K==pointer_functie)
    {
        printf("In matrice exista exact %d linii ce contin valori ordonate strict crescator!\n", K);
    }
    else if(K > pointer_functie)
    {
        printf("Problema nu se poate rezolva!");
    }
    else
    {
        printf("In matrice nu exista exact %d linii ce contin valori ordonate strict crescator!", K);
    }
    return 0;
}
