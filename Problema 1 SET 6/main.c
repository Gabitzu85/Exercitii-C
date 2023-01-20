#include <stdio.h>
#include <stdlib.h>
void cautare(int v[], int n)
{
    int i,pereche=0;
    for(i=0; i<n; i++)
        if(v[i]==v[i+1])
            pereche++;
    printf("\nIn vector sunt %d perechi!", pereche);

}

int main()
{
    int v[100],n,i;
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("v[%d]=", i);
        scanf("%d", &v[i]);
    }
    printf("Vectorul introdus este: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ", v[i]);
    }
    cautare(&v[0],n);
    return 0;
}
