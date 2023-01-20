#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr, poz = 0, neg = 0;
    printf("Introduceti numere(apasand tasta ENTER dupa fiecare numar introdus) iar la final tastati valoarea 0 si apasati tasta ENTER! \n");
    do{
        scanf("%d", &nr);
        if(nr >= 0)
            poz++;
        else neg++;
    }
    while (nr != 0);
    printf("Numere pozitive: %d \n", poz-1);
    printf("Numere negative: %d \n", neg);
    return 0;
}

