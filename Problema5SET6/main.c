#include <stdio.h>
#include <stdlib.h>
void citire_afisare(int v[], int *n)
{
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", n);
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

void val_min(int n,int v[],int p[],int *min,int *poz)
{
    int i;
    *min=v[0];
    *poz=0;
    for(i=0; i<n; i++)
    {
        if(v[i]<*min)
        {
            *min=v[i];
            (*poz)++;
        }

    }

}

int main()
{
    int n,v[100],p[100],poz,min,i;
    citire_afisare(v,&n);
    val_min(n,v,p,&min,&p);
    printf("\nMinimul este: %d\n", min);
    printf("Pozitiile sunt:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", p[i]);

    }


    return 0;
}
