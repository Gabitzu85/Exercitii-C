#include <stdio.h>
#include <stdlib.h>
void Citire(int v[], int *n, char litera)
{
    int i;
    printf("Introduceti numarul de elemente al vectorului %c:", litera);
    scanf("%d", n);
    for(i=0; i<*n; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}
void Afisare(int v[], int n, char litera)
{
    int i;
    printf("\nVectorul %c: \n", litera);
    for(i=0; i<n; i++)
    {
        printf("%d ", v[i]);
    }
}


void extragere(int v[], int n, int m, int q[], int p[], int *lungime)
{
    int i,j,k,aux=0;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
    {
        if(v[i]==q[j])
        {
            p[aux]=v[i];
            aux++;
        }
    }
    *lungime=aux;
}

int main()
{
    int a[100],b[100],p[100],n,m,l,i,aux;
    Citire(a,&n,'A');
    Citire(b,&m,'B');
    Afisare(a,n,'A');
    Afisare(b,m,'B');
    extragere(a,b,p,n,m,&l);
    printf("%d", &l);



    return 0;
}
