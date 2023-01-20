#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, d, nr;
    printf("Introduceti o valoare si apasati tasta ENTER: ");
    scanf("%d", &n);
    if( n>= 2){
            if(n%2!=0)
                printf("Numarul este prim!");
            else
                printf("Numarul nu este prim!");}
                else {
                    printf("Numarul introdus nu este prim sau este un numar negativ!");
                }
    return 0;
    }

