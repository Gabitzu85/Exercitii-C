#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Varianta pentru numere intregi!
    /*int n, poz = 0, neg = 0;
    printf("Introduceti mai multe numere(apasati tasta ENTER dupa introducerea fiecarui numar)! \n");

    do {
            scanf("%d", &n);
    if(n > 0)
        poz++;
     else neg++;

    } while(n != 0);
    printf("Numere pozitive introduse: %d \n", poz - 1);
    printf("Numere negative introduse: %d \n", neg);*/


    //Varianta pentru numere reale!
    int poz = 0, neg = 0;
    float n;
    printf("Introduceti mai multe numere(apasati tasta ENTER dupa introducerea fiecarui numar)! \n");

    do {
            scanf("%f", &n);
    if(n > 0)
        poz++;
     else neg++;

    } while(n != 0.000000000 );
    printf("Numere pozitive introduse: %d \n", poz);
    printf("Numere negative introduse: %d \n", neg - 1);


    return 0;
}
