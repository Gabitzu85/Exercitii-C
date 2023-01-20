#include <stdio.h>
#include <stdlib.h>
void sufix(char s1[], char s2[])
{
    if(strstr(s2,s1)!=0)
        printf("Sufix!");
    else
        printf("Nu este sufix!");

}

int main()
{
    char s1[256], s2[256];
    printf("Introduceti primul sir: \n");
    gets(s1);
    printf("Introduceti al doilea sir: \n");
    gets(s2);
    sufix(s1,s2);
    return 0;
}
