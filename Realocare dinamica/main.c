#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*v;
    scanf("%d", &n);
    v=(int*)malloc(n * sizeof(int));
    for(i=0; i<n; i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}
