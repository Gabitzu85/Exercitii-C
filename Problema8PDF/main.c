#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Introduceti un caracter si apasati tasta ENTER: ");
    scanf("%c", &c);
    printf("%c \n%c%c \n%c%c%c \n", c,c,c,c,c,c);
    return 0;
}
