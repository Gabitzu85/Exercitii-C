#include <stdio.h>
#include <stdlib.h>
int palindrom(int n)
    {
        int oglindit=0,c,original;
        original=n;
        while(n > 0){
        c=n%10;
        n=n/10;
        oglindit=oglindit*10+c;
        }
        if(oglindit==original)
            return 1;
        else
        return 0;
    }


int main()
{
    int nr;
    printf("Dati o valoare: ");
    scanf("%d", &nr);
    if(palindrom(nr)==1)
        printf("Numarul introdus este palindrom!");
    else
        printf("Numarul introdus nu este palindrom!");
    return 0;
}
