#include <stdio.h>
#include <stdlib.h>
float *creare_vector_medii(int lungime)
{
    int i;
    float *v=(float*)malloc(lungime*sizeof(float));
    printf("Introduceti mediile studentilor");
    for(i=0; i<lungime; i++)
    {
        scanf("%f", &v[i]);
    }
    return v;
}
float *extindere(int *lungime,float *v)//EXTINDE VECTORUL CU 2 ELEMENTE
{
    int i;
    float *v_realocat=(float*)realloc(v,(*lungime+2)*sizeof(float));
    for(i=*lungime; i<*lungime+2; i++)
        v_realocat[i]=v_realocat[*lungime-1];
    *lungime+=2;
    return v_realocat;
}
int main()
{
    int i,aux=0,burse;
    printf("Introduceti nr de medii: ");
    scanf("%d", &burse);

    float *a=creare_vector_medii(burse);
    a=extindere(&burse,a);

    for(i=0; i<burse; i++)
        printf("%.2f ", a[i]);
     for(i=0; i<burse; i++)
        {if(a[i]>9.50)
            aux++;}
    printf("Nr elevi cu medie peste 9.50: %d ",aux);
    for(i=0; i<burse; i++)
    {
        if(a[i]>9.50)
            printf("%.2f ", a[i]);}

    free(a);




    return 0;
}
