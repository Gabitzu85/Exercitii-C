#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nume1[256],nume2[256];
    int varsta1,varsta2,comparare;
    printf("Introduceti numele primei persoane: \n");
    gets(nume1);
    printf("Introduceti varsta primei persoane: \n");
    scanf("%d", &varsta1);
    fflush(stdin);
    printf("Introduceti numele celei de-a doua persoane: \n");
    gets(nume2);
    printf("Introduceti varsta celei de-a doua persoane: \n");
    scanf("%d", &varsta2);
    comparare=strcmp(nume1, nume2);
    if(comparare != 0 && varsta1 > varsta2)
        {printf("%s este mai tanar(a)!\n", nume2);}
    else if(comparare != 0 && varsta1 < varsta2)
        {printf("%s este mai tanar(a)!\n", nume1);}
    else
        {printf("%s si %s au aceeasi varsta!", nume1,nume2);}
    return 0;
}
