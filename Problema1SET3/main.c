#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[1000];
    int n, i, a, j = 0;
    printf("Dati o valoare lui n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Vector[%d]= ", i);
        scanf("%d", &v[i]);
    }
    for(i = 0; i < n; i++)
        printf("%d \n", v[i]);
        //Punctul a)
        printf("Dati o valoare lui a: ");
        scanf("%d", &a);
        printf("Numerele introduce mai mari decat %d sunt: \n", a);



    return 0;
}
