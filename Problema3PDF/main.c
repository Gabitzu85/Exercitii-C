#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Introduceti un numar si apasati tasta ENTER: ");
    scanf("%d", &a);
    printf("Dublul numarului in baza 10 este: %d \n", a*2);
    printf("Dublul numarului in baza 8 este: %o \n", a*2);
    printf("Dublul numarului in baza 16 este: %x \n", a*2);

    return 0;
}
