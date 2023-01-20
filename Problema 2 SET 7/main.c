#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[100];
    int i,n;
    printf("Introduceti sirul de caracter: \n");
    gets(c);
    printf("\n");
    printf("Sirul introdus este: \n%s\n", c);
    n=strlen(c);
    printf("\nSirul introdus are %d litere.\n", n);
    for(i=0; i<=n; i++)
    {
        printf("\n%c ", c[i]);


    }
    return 0;
}
