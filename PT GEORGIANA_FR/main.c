#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int i, j, n;
    scanf("%d", &n);
    int *v=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    scanf("%d", &v[i]);


    for (i=0;i<n;i++)
    printf("%d ", v[i]);


    printf("\n");

    for(i=n;i<n+2;i++)
    scanf("%d", &v[i]);

    for (i=0;i<n+2;i++)
    printf("%d ", v[i]);



}
