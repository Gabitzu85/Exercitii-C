#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Vom lua cazul cand probleme va cere sa introducem un numarr natural!
    int n;
    char ch;
    do{
        printf("Introduceti un numar natural si apasati tasta ENTER! \n");
        scanf("%d", &n);
        if(n > 0){
            printf("Numarul este pozitiv \n");}
        else {printf("Numarul nu este pozitiv! \n");}
        printf("Doriti sa continuati? D/N \n", ch);
        scanf(" %c", &ch);
    }
    while(ch == 'D');


    return 0;
}
