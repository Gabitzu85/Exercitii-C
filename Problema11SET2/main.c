#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1; i<=10; i++){
    for(j=1; j<=10; j++){
            printf("%dx%d=%d", i,j,i*j);
            if(j == 10){
                printf("\n");}
    printf("\n");
    }}
    return 0;
}
