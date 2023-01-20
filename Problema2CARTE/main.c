#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("Introduceti mai multe numere(apasati tasta ENTER dupa fiecare numar introdus)! \n");
    do{
        scanf("%f", &a);
    } while((a != 10 || a!=20) && a!= 30);
    printf("Programul a luat sfarsit deoarece ai introdus succesiunea de numere 10, 20, 30! \n");
    return 0;
}
