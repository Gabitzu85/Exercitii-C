#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int a;
    //Rezolvare punctul a)
    printf("Introduceti o litera: ");
    scanf("%c", &c);
    printf("Codul ASCII a literei %c este: %d \n", c,c);
    a = c +1;
    printf("Litera ce urmeaza dupa litera %c este: %c", c,a);


    return 0;
}
