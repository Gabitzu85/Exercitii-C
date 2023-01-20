#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr, nr1 = 0, nr2 = 1, nr3, i;
    printf("Introduceti un numar si apasati tasta ENTER: ");
    scanf("%d", &nr);
    if(nr > 0){
    for(i = 0; i < nr; i++){
        printf("%d ", nr1);
        nr3 = nr1 + nr2;
        nr1 = nr2;
        nr2 = nr3;
    }}
    else {
        printf("Numarul introdus nu este un numar natural! ");
    }

    return 0;
}
