#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Introduceti un numar natural pozitiv mai mare sau egal cu 3 si apasati tasta ENTER: ");
    scanf("%d", &n);
    if(n > 3){
    printf("%d %d %d \n", n-1, n, n+1);
    printf("%d\n%d\n%d\n", n-1, n, n+1);}
    else {
        printf("Numarul introdus nu este pozitiv sau mai mare decat 3!");
    }


    return 0;
}
