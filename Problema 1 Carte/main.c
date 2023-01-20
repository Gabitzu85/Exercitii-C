#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numar;
    printf("Introduceti un numar: ");
    scanf("%f", &numar);
    printf("Numarul afisat cu o zecimala este: %.1f \n", numar);
    printf("Numarul afisat cu doua zecimale este: %.2f \n", numar);
    printf("Numarul afisat cu trei zecimale este: %.3f \n", numar);
    printf("Numarul afisat cu patru zecimale este: %.4f \n", numar);
    printf("Numarul afisat cu cinci zecimale este: %.5f \n", numar);
    return 0;
}
