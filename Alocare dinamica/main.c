#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*adresa;
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", &n);
    adresa=calloc(n,sizeof(int));
    for(i=0; i<n; i++)
    {
        printf("v[%d]= ",i);
        scanf("%d", &adresa[i]);
    }
    printf("Vectorul introdus este:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", adresa[i]);
    }
    return 0;
}
