#include <stdio.h>
#include <stdlib.h>
int cifre(int *nr)
{
    int cifra,nr_cifra=0,aux=0;

    return nr_cifra;

}

int main()
{
    int n, nr_cifra,cifra=0;
    printf("Introduceti o valoare de cel mult 3 cifre!\n");
    scanf("%d", &n);
    if(n>=100)
        printf("Numarul introdus este de cel mult 3 cifre!\n");
    else
        printf("Numarul introdus nu este de cel mult 3 cifre!\n");
        while(n!=0)
    {
        cifra=n%10;
        nr_cifra++;
        n=n/10;

    }
    printf("Numarul de cifre al numarului introdus este: %d", nr_cifra);

    return 0;
}
