#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sir[256],n;
    printf("Introduceti un sir: \n");
    //gets (sir);
    scanf("%s", sir);
    printf("Sirul introdus este: \n%s", sir);
    //gets citeste tot sirul cu tot cu spatii pe cand scanf se opreste la primul spatiu.
    return 0;
}
