#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    double b;
    long double c;
    printf("Introduceti primul numar: ");
    scanf("%f", &a);
    printf("Introduceti al doilea numar: ");
    scanf("%lf", &b);
    printf("Introduceti al treilea numar: ");
    scanf("%LF", &c);
    return 0;
}
