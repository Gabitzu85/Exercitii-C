#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, suma;
    printf("Dati o valoare lui n: ");
    scanf("%d", &n);
    suma = (n * (n + 1))/2;
    printf("Suma tuturor numerelor pana la variabila introdusa este: %d ", suma);

    return 0;
}
