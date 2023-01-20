#include <stdio.h>
#include <stdlib.h>

float* creare_vector(int n){
    float* v=(float*)calloc(n, sizeof(float));

    printf("\nIntroduceti mediile studentilor:\n");
    int i;
    for(i=0;i<n;i++){
        printf("media[%d]=",i);
        scanf("%f", &v[i]);
    }
    return v;
}

void extindere(float **v, int *n){
    *v=realloc(*v, (*n+2)*sizeof(float));
    float *p = *v+ *n;
    *p=*(p-1);
    p++;
    (*p)=*(p-1);
    (*n)+=2;
}

int main(){

    int n;
    float *v;
    printf("Introduceti numarul de burse: ");
    scanf("%d", &n);

    v=creare_vector(n);

    extindere(&v, &n);

    int nr=0;
    printf("\n\n");
    for(int i=0;i<n;i++)
        if(v[i]>9.50)
            nr++;

    printf("%d studenti au media peste 9.50.", nr);

    free(v);

    return 0;
}


