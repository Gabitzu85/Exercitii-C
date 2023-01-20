#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int nr;
    printf("Introduceti un caracter: ");
    scanf("%c", &c);
    printf("Caracterul transformat in codul ASCII este: %d \n", c);
    printf("Introduceti un numar: ");
    scanf("%d", &nr);
    printf("Numarul introdus transformat in codul ASCII este: %c", nr);
    return 0;
}
