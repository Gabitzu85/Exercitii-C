#include <stdio.h>
#include <stdlib.h>
/*int transformare(char *n1, char *n2, char *n3)
{
    int aux;
    if(n1=='a' || n1=='z')
    else if(n2=='a' || n2=='z')
    else if(n3=='a' || n3=='z')
        if(aux==3)
            return 1;
        else
            return 0;
}*/



int main()
{
    int c1,c2,c3,i;
    printf("Introduceti prima cifra: ");
    scanf("%c", &c1);
    printf("Introduceti cea de-a doua cifra: \n");
    scanf("%c", &c2);
    printf("Introduceti cea de-a treia cifra: \n");
    scanf("%c", &c3);
/*for(i=0; i<3; i++){
        if(c1=='a' || c1=='z')
        printf("%c ", c1-32);
        if(c2=='a' || c2=='z')
        printf("%c ", c2-32);
        if(c3=='a' || c3=='z')
        printf("%c ", c3-32);}*/
    return 0;
}
