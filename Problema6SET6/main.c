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

void eliminare(int *n,int v[])
{
    int i,j,aux=v[0];
    for(i=0; i<*n; i++)
        if(v[i]==aux)
        {
            for(j=i; j<*n; j++)
                v[j]=v[j+1];
            i--;
            (*n)--;
        }
}


int main()
{
    int n,v[100],p[100],i;
    citire_afisare(v,&n);
    eliminare(&n,v);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}
