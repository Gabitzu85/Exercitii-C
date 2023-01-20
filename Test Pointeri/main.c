#include <stdio.h>
#include <stdlib.h>
void citire(int v[], int n)
{
    int i;
    printf("Dati n: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("v[%d]= ", i);
        scanf("%d", &v[i]);
    }
}
void pointer(int v[], int n,int *s)
{
    int i;
    *s=0;
    for(i=0; i<n; i++)
    {
        (*s)+=v[i];
    }

}


int main()
{
    int n,v[100],suma;
    citire(v,&n);
    pointer(v,n,&suma);
    printf("Suma este %d!", n);
    return 0;
}
