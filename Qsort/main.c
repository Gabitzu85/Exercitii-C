#include <stdio.h>
#include <stdlib.h>
void citire_afisare(int v[], int *n)
{
    int i;
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", n);
    for(i=0; i<*n; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}


int compar_numere(void *a, void *b)
{
    return*((int*)a)-*((int*)b);
}

int main()
{
    int i,v[100],n;
    citire_afisare(v,&n);
    qsort(v,n,sizeof(int),compar_numere);
    for(i=0; i<n; i++)
    printf("%d ", v[i]);
    return 0;
}
