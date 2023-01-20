#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l, L;
    printf("Introduceti o valoarea lungimii: ");
    scanf("%f", &L);
    printf("Introduceti o valoarea latimii: ");
    scanf("%f", &l);
    printf("Perimetrul dreptunghiului este: %.1f", l+L);


    return 0;
}
