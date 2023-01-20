#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Introduceti un numar si apasati tasta ENTER: ");
    scanf("%d", &n);

    if(n > 0){
            printf("Numerele naturale pare mai mici decat %d sunt: \n", n);
    for(i = 0; i < n; i++){
        if(i % 2 == 0)
        printf("%d \n", i);
    }}
    else {
        printf("Numarul introdus este negativ! \n");
    }

    return 0;
}
