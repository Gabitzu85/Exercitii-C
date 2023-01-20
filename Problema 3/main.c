#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n=0;
    do {
            n++;
            if(n%3==2 && n%5==2 && n%7==2){
                    i++;
            printf("%d \n", n);}
    } while(i<10);


    return 0;
}
