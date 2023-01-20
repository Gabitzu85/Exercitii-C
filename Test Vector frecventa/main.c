#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int comparare(const void *pa, const void *pb){
    const int *p1 = pa;
    const int *p2 = pb;
    return *p2 - *p1;
}

int main()
{
    int v[100],n,i,j;
    int p = sizeof(v) / sizeof(int);
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", &n);
    do{
    for(i=0; i<n; i++){
        printf("v[%d]= ", i);
        scanf("%d", &v[i]);
    }
    } while(n <= 0);
    printf("Vectorul introdus este: \n");
    for(i=0; i<n; i++){
    printf("%d ", v[i]);}
    qsort(v, p, sizeof(int), comparare);
    printf("\nVectorul sortat este: ");
    for(i=0; i<n; i++)
        printf("%d ", v[i]);


    return 0;
}
