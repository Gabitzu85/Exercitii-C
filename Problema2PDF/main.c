#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Rezolvare punctul a)
    float nr1,nr2,b;
    int a;
    printf("Introduceti o valoare primului numar si apasati tasta ENTER:");
    scanf("%f", &nr1);
    printf("Introduceti o valoare celui de-al doilea numar si apasati tasta ENTER:");
    scanf("%f", &nr2);
    printf("Valorile numerelor cu trei zecimale sunt: \n%.3f \n%.3f \n", nr1,nr2);
    printf("Valorile numerelor cu cinci zecimale sunt: \n%.5f \n%.5f \n", nr1,nr2);
    printf("Valorile numerelor cu doua zecimale sunt: \n%.2f \n%.2f \n", nr1,nr2);
    //Se poate observa faptul ca programul va inlocuii locurile zecimalelor inexistente cu 0
    //Rezolvare punctul b)
    printf("Valorile numerelor in format mantisa-exponent sunt: \n%E \n%E \n", nr1,nr2);
    //Rezolvare punctul c)
    a = nr1 + nr2;
    printf("Suma celor doua numere este: %d", a);
    //Se poate observa faptul ca suma celor doua numere este aproximata la valoarea ei intreaga.De exemplu daca suma este 13.7 suma va fi aproximata la numarul 13.
    //Rezolvare punctul d)
    //La schimbarea formatului din tipul float in tipul int programul nu va putea rula.
    //Rezolvare punctul e)
    printf("Introduceti o valoare si apasati tasta ENTER:");
    scanf("%f", &b);
    printf("%.3f", b);












    return 0;
}
