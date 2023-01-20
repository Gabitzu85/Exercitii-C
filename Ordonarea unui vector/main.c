#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100],i,n,j,aux;
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("v[%d]= ", i);
        scanf("%d", &v[i]);
    }
    printf("Vectorul introdus este: \n");
    for(i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    for(i=0; i<n-1; i++)
    for(j=i+1; j<n; j++){
        if(v[i]>v[j]){
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
        }
    }
    printf("\nVectorul sortat este: \n");
    for(i=0; i<n; i++)
    printf("%d ", v[i]);
    return 0;
}
