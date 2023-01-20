#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, s=0;
    printf("Introduceti un numar natural si apsati tasta ENTER: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("%d \n", i);
        s++;
        printf("%d \n", s);
    }
    return 0;
}
