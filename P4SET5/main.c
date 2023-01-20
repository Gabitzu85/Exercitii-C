#include <stdio.h>
#include <stdlib.h>
void transformare(char x1, char x2, char x3)
{
    if(x1 >= 'a' && x1 <= 'z')
        printf("%c ", x1-32);
    else
        printf("Numarul introdus nu este o litera mica!");
    if(x2 >= 'a' && x2 <= 'z')
        printf("%c ", x2-32);
    else
        printf("Numarul introdus nu este o litera mica!");
        if(x3 >= 'a' && x3 <= 'z')
        printf("%c ", x3-32);
    else
        printf("Numarul introdus nu este o litera mica!");
        return x1, x2, x3;
}

int main()
{
    char n1, n2, n3;
    printf("Introduceti trei litere mici: \n");
    scanf("%c %c %c", &n1, &n2, &n3);
    transformare(n1,n2,n3);
    return 0;
}
