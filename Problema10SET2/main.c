#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr;
    printf("Introduceti un numar si apasati tasta ENTER: ");
    scanf("%d", &nr);
    if(nr > 0){
    while(nr != 0){

            int ultima_cifra = nr % 10;
    printf("%d \n", ultima_cifra);
    nr = nr / 10;
    }}
    else {
        printf("Numarul introdus este negativ!");
    }

    return 0;
}
