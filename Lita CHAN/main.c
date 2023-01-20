#include <stdio.h>
#include <stdlib.h>
int *creare_vector(int lungime)
{
    int i;
    int *v=(int *)malloc(lungime*sizeof(int));
    printf("Introduceti numerele: ");
    for(i=0; i<lungime; i++)
    {
        scanf("%d", &v[i]);
    }
    return v;
}

void realocare_vector(int **v, int *lungime, int m)
{
    int i;
    *v=(int *)realloc(*v,(*lungime+m)*sizeof(int));
    for(i=*lungime; i<*lungime+m; i++)
    {
        scanf("%d", *v+i);
    }
}

int main()
{
    int nr,i,m;
    printf("Introduceti nr de elemente al vectorului: \n");
    scanf("%d", &nr);
    int *vect=creare_vector(nr);
    for(i=0; i<nr; i++)
    {
        printf("%d ", vect[i]);
    }
    printf("Introduceti cu cat vr sa lungiti vectorul: ");
    scanf("%d", &m);
    realocare_vector(&vect,&nr,m);
     for(i=0; i<nr+m; i++)
    {
        printf("%d ", vect[i]);
    }
    return 0;
}
