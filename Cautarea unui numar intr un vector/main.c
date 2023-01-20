#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100],nr_elemente_vector,i,val_cautata,gasita=0;
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", &nr_elemente_vector);
    for(i=0; i<nr_elemente_vector; i++){
        printf("v[%d]= ", i);
        scanf("%d", &v[i]);
    }
    printf("Vectorul introdus este: \n");
    for(i=0; i<nr_elemente_vector; i++){
        printf("%d ", v[i]);
    }
    printf("\nIntroduceti valoarea pe care doriti sa o cautati in vector: ");
    scanf("%d", &val_cautata);
    for(i=0; i<nr_elemente_vector; i++){
        if(v[i]==val_cautata){
            printf("Valoarea cautata a fost gasita pe pozitia %d ! \n", i);
            gasita=1;
                break;
    }}
    if(gasita==0){
        printf("Valoarea nu a fost gasita in vector! \n");
    }


    return 0;

}
