#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, aux, s=0, p, media;
    printf("Introduceti un numar si apasati tasta ENTER: ");
    scanf("%d", &n);
    aux = n;
    while(aux != 0){
        scanf("%d", &p);
        s+=p;
        aux--;
    }
    media=s/n;
    printf("Media aritmetica este: %d", media);
    return 0;
}
