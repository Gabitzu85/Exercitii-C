#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100],i,n,j,aux;
    printf("Introduceti lungimea vectorului: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("v[%d]= ", i);
        scanf("%d", &v[i]);
    }
    for(i=1; i<n-1; i++)
        for(j=1+i; j<=n; j++)
            if (v[j]>v[i])
                printf("Vectorul este sortat crescator!");
            else if(v[j]<v[i])
                printf("Vectorul este sortat descrescator!");
            else if(v[i]==v[j])
                printf("Vectorul este constant!");
            else
            {
                printf("Vectorul este oarecare!");
            }
    return 0;
}

