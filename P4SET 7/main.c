#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sir1[256],sir2[256],sir3[256];
    printf("Introduceti primul sir: \n");
    gets(sir1);
    //fflush(stdin);
    printf("Introduceti al doilea sir: \n");
    gets(sir2);
    //fflush(stdin);
    printf("Introduceti al treilea sir: \n");
    gets(sir3);
    //fflush(stdin);
    printf("Sirul concatenat este: \n");
    strcat(sir1,sir2);
    strcat(sir1,sir3);
    printf("%s", sir1);
    return 0;
}
