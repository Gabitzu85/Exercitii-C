#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, suma = 0, i = 1, term = 1;
    printf("Introduceti un numar si apasati tasta ENTER: ");
    scanf("%d", &n);
    while(i <= n){
            term = term * i;
    suma = suma + term;
    i++;
    }

    printf("Suma este: %d", suma);
    return 0;
}
