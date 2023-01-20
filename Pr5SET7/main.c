#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cuvant1[100],cuvant2[100];
    int i,j,aux=0,n;
    printf("Introduceti un sir: \n");
    gets(cuvant1);
    n=strlen(cuvant1);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            aux=1;
            else if(j!=i && aux==0)
                cuvant2[j]=cuvant1[j];
            else if(j!=i && aux==1)
                cuvant2[j-1]=cuvant1[j];
        }
        for(j=0; j<n-1; j++)
        {
            printf("%c", cuvant2[j]);
        }
        aux=0;
        printf("\n");
    }
    return 0;
}
