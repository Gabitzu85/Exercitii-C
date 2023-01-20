#include <stdio.h>
#include <stdlib.h>
float *creare_vector_medii(int lungime_vector)
{
    int i;
    float *v=(float*)malloc(lungime_vector*sizeof(float));
    printf("Introduceti notele elevilor: ");
    for(i=0; i<lungime_vector; i++)
    {
        scanf("%f", &v[i]);
    }
    return v;
}
int main()
{
    int n,i;
    printf("Introduceti nr de elevi: \n");
    scanf("%d", &n);
    float *v=creare_vector_medii(n);
    for(i=0; i<n; i++)
    {
        printf("%.2f ", v[i]);
    }


    return 0;
}
