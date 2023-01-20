#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Introduceti un numar intre 1 si 7: ");
    scanf("%d", &n);
    //Folosind instructiunea switch
    /*switch(n){
        case 1: printf("Luni \n"); break;
        case 2: printf("Marti \n"); break;
        case 3: printf("Miercuri \n"); break;
        case 4: printf("Joi \n"); break;
        case 5: printf("Vineri \n"); break;
        case 6: printf("Sambata \n"); break;
        case 7: printf("Duminica \n"); break;
        default: printf("Eroare!!! \n");
    }*/


    //Folosind instructiunea if
    if(n == 1)
    printf("Luni \n");
    else if (n == 2)
        printf("Marti \n");
    else if (n == 3)
        printf("Miercuri \n");
    else if (n == 4)
        printf("Joi \n");
    else if (n == 5)
        printf("Vineri \n");
    else if (n == 6)
        printf("Sambata \n");
    else if (n == 7)
        printf("Duminica \n");
    else
        printf("Eroarea!!! \n");

    return 0;
}
