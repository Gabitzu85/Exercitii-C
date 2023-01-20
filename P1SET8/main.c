#include <stdio.h>
#include <stdlib.h>
struct nr_complex
{
    int real;
    int imaginar;

};

int suma(struct nr_complex nr1, struct nr_complex nr2)
{
    return nr1.real+nr2.imaginar;
}

int diferenta(struct nr_complex nr1, struct nr_complex nr2)
{
    return nr1.real-nr2.imaginar;
}

int main()
{
    struct nr_complex nr1, nr2;
    printf("Introduceti cele doua numere: \n");
    scanf("%d%d", &nr1.real, &nr2.imaginar);
    printf("Suma celor doua numere este: %d\n", suma(nr1,nr2));
    printf("Diferenta celor doua numere este: %d", diferenta(nr1,nr2));



    return 0;
}
