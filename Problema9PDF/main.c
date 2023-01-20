#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float media;
    printf("Introduceti o valoare primului numar si apasati tasta ENTER: ");
    scanf("%d", &a);
    printf("Introduceti o valoare celui de-al doilea numar si apasati tasta ENTER: ");
    scanf("%d", &b);
    media = (float)(a + b)/2;
    printf("a = %d \n", b);
    printf("b = %d \n", a);
    printf("media = %.2f \n", media);
    return 0;
}
