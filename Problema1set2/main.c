#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Introduceti un caracter si apasati tasta ENTER: ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
        {printf("Caracterul introdus este litera mare!");}
        else if(c >= 'a' && c <='z')
        {printf("Caracterul introdus este litera mica!");}
        else if(c >= '0' && c <= '9')
        {printf("Caracterul introdus este un numar!");}
        else
            {printf("Caracterul introdus este un alt caracter!");}

    return 0;
}
