#include <stdio.h>
#include <stdlib.h>

int* creare(int n){
    int* v=(int*)calloc(n, sizeof(int));
    printf("Elementele sunt: ");
    for(int i=0;i<n;i++)
        scanf("%d", &v[i]);
    return v;
}

void realocare(int **v, int *n, int m, int w[]){
    *v=realloc(*v,(*n+m)*sizeof(int));
    int* p=*v+ *n;
    int k;
    for(k=0;k<m;k++){
        *p=w[k];
        p++;
    }
    (*n)+=m;
}

int main(){

    int n,m, *v, *w;

    printf("Numarul 1: ");
    scanf("%d", &n);
    v=creare(n);

    printf("Numarul 2: ");
    scanf("%d", &m);
    w=creare(m);

    if(n<m){
        realocare(&w,&m,n,v);
        for(int i=0;i<m;i++)
            printf("%d ",w[i]);
    }
    else {
        realocare(&v,&n,m,w);
        for(int i=0;i<n;i++)
            printf("%d ",v[i]);
    }

    free(v);
    free(w);
    return 0;
}
