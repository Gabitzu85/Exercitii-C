#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100],nr_elemente_vector,i,a;
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", &nr_elemente_vector);
    printf("Introduceti numerele: \n");
    for(i=0; i<nr_elemente_vector; i++){
        printf("v[%d]=", i);
        scanf("%d", &v[i]);
    }
    printf("Introduceti valoarea lui a: ");
    scanf("%d", &a);
    printf("Numerele mai mari decat %d sunt: \n", a);
    for(i=0; i<nr_elemente_vector; i++){
            if(v[i]>a)
        printf("%d", v[i]);
    }

    return 0;
}
