#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,i,*adr;
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", &n);
    adr=calloc(n,sizeof(int));//aloca memorie
    for(i=0; i<n; i++)
    {
        printf("v[%d]= ", i);
        scanf("%d", &adr[i]);
    }
    printf("Vectorul introdus este: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ", adr[i]);
    }
    free(adr);


    return 0;
}
