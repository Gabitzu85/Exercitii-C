#include <stdio.h>
#include <stdlib.h>

int divizibil(int n)
{
    int div=1, s=0;
    for(div=1; div<=n/2; div++){
            if(n%div==0)
                s=s+div;
    }
    if(n==s)
        return 1;
    else
        return 0;


}


int main()
{
    int numar;
    printf("Introduceti numarul: ");
    scanf("%d", &numar);
    divizibil(numar);
    if(divizibil(numar)==1)
        printf("Numarul este perfect!");
        else
        printf("Numarul nu este perfect!");
    return 0;
}
