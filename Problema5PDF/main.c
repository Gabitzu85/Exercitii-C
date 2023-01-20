#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, s1, s2, s3;
    printf("Introduceti primul numar pozitiv si apasati tasta ENTER: ");
    scanf("%f", &a);
    printf("Introduceti al doilea numar pozitiv si apasati tasta ENTER: ");
    scanf("%f", &b);
    printf("Introduceti al treilea numar pozitiv si apasati tasta ENTER: ");
    scanf("%f", &c);
    s1 = a + b;
    s2 = a + c;
    s3 = b + c;
    if(a > 0 && b > 0 && c > 0)
    {printf("Sumele posibile sunt: \n%.1f + %.1f = %.1f \n", a,b,s1);
    printf("%.1f + %.1f = %.1f \n", a,c,s2);
    printf("%.1f + %.1f = %.1f \n", b,c,s3);}
    else
        {printf("Cel putin un numar introdus nu este pozitiv!");}
    return 0;
}
