#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr_elemente_vector,i,v[100];
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", &nr_elemente_vector);
    do{
    for(i=0; i<nr_elemente_vector; i++){
        printf("v[%d]= ", i);
        scanf("%d", &v[i]);
    }
    } while(nr_elemente_vector!=0 || nr_elemente_vector>0);
    for(i=0; i<nr_elemente_vector; i++){
        if(v[i]%2==0)
            printf("%d \n", v[i]);
    }
    for(i=0; i<nr_elemente_vector; i++){
        if(v[i]%2==1)
            printf("%d ", v[i]);
    }
    return 0;
}
