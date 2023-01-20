#include <stdio.h>
#include <stdlib.h>

int main()
{


    int nr_vector,i,permutare,v[100],aux,mem;
    printf("Introduceti nr de elemente ale vectorului: ");
    scanf("%d", &nr_vector);
    for(i=0; i<nr_vector; i++){
        printf("v[%d]= ", i);
        scanf("%d", &v[i]);
    }
    printf("Vectorul introdus este: \n");
    for(i=0; i<nr_vector; i++){
    printf("%d ", v[i]);}

    printf("\nIntroduceti numarul de permutari: ");
    scanf("%d", &permutare);


    //Permutare la dreapta
   while(permutare!=0)
                    {
            aux=v[nr_vector-1];
        for(i=nr_vector-1;i>0;i--){
            v[i]=v[i-1];}
        v[0]=aux;
        permutare--;
        }

    //Permutrae la stanga
        while(permutare!=0){
            aux=v[0];
            for(i=0; i<nr_vector; i++){
                v[i]=v[i+1];}
                v[nr_vector-1]=aux;
                permutare--;
            }

    for(i=0; i<nr_vector; i++)
        {
    printf("%d ", v[i]);
    }
    return 0;
}
