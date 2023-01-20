#include <stdio.h>
#include <stdlib.h>
void citire_afisare(int v[], int *n)
{
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d",n);
    int i;
    for(i=0; i<*n; i++)
    {
        printf("v[%d]= ", i);
        scanf("%d", &v[i]);
    }
    printf("Vectorul introdus este: \n");
    for(i=0; i<*n; i++)
    {
        printf("%d ", v[i]);
    }
}

void creare(int v[], int pare[], int impare[],int n,int *aux_par, int *aux_impar)
{
    int i,k=0,j=0;
    for(i=0; i<n; i++)
    {
        if(v[i]%2==0)
        {
            pare[k]=v[i];
            k++;
        }
        else
        {
            impare[j]=v[i];
            j++;
        }
    }
    *aux_par=k;
    *aux_impar=j;
}

int main()
{
    int n,v[100],par[100],impar[100],i,aux1,aux2;
    citire_afisare(v,&n);
    creare(v,par,impar,n,&aux1,&aux2);
    printf("\nElementele pare din vector sunt: \n");
    for(i=0; i<aux1; i++)
    {
        printf("%d ", par[i]);
    }
    printf("\nElementele impare din vector sunt: \n");
    for(i=0; i<aux2; i++)
    {
        printf("%d ", impar[i]);
    }

    return 0;
}
