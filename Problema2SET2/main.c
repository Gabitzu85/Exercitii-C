#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Introduceti lungimea primei laturi: ");
    scanf("%d", &a);
    printf("Introduceti lungimea celei de-a doua laturi: ");
    scanf("%d", &b);
    printf("Introduceti lungimea celei de-a treia laturi laturi: ");
    scanf("%d", &c);
    if(a < b + c && b < a + c && c < a + b){
            printf("Laturile pot forma un triughi! \n");}
    if(a == b && b == c){
            printf("Triunghiul este echilateral!");
    }
    else if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)){
        printf("Triunghiul este dreptunghic!");
    }
    else if(((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) && (a == b || a == c || b == c)){
            printf("Triunghiul este dreptunghic isoscel!");
    }
    else if((a == b || b == c || a == c) && (a < b + c && b < a + c && c < a + b)){
            printf("Triunghiul este isoscel!");
    }
    else if((a != b && a != c && b != c) &&(a < b + c && b < a + c && c < a + b)) {
    printf("Triunghiul este oarecare!");
    }
        else {printf("Laturile nu formeaza un triunghi!");}
        return 0;
    }









