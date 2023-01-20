#include <stdio.h>
#include <stdlib.h>
struct timp
{
    int ora;
    int minut;
    int secunda;
};

void


void suma(struct timp h1, struct timp min1, struct timp s1, struct timp h2, struct timp min2, struct timp s2, int *suma_ora, int *suma_min, int *suma_sec)
{
    *suma_ora=0, *suma_min=0, *suma_sec=0;
    *suma_ora = h1.ora + h2.ora;
    *suma_min = min1.minut + min2.minut;
    *suma_sec = s1.secunda + s2.secunda;
    while(*suma_min >= 60)
    {
        *suma_ora+=1;
        *suma_min=*suma_min - 60;
    }
    while(*suma_sec >= 60)
    {
        *suma_min+=1;
        *suma_sec=*suma_sec - 60;
    }
}


int main()
{
    struct timp t[200];
    struct timp h1, min1, s1;
    struct timp h2, min2, s2;
    int suma_ore, suma_minute, suma_secunde;
    printf("Introduceti primul moment de timp (ORA/MIN/S): \n");
    scanf("%d%d%d", &h1.ora, &min1.minut, &s1.secunda);
    printf("Introduceti al doilea moment de timp (ORA/MIN/S): \n");
    scanf("%d%d%d", &h2.ora, &min2.minut, &s2.secunda);
    suma(h1,min1,s1,h2,min2,s2,&suma_ore,&suma_minute,&suma_secunde);
    printf("Suma celor doua ore este: \n");
    printf("%d ore %d mninute %d secunde!", suma_ore, suma_minute, suma_secunde);
    return 0;
}
