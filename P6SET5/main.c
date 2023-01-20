#include <stdio.h>
#include <stdlib.h>
/*int analizare(int *n1, int *n2)
{
    int cifra,aux,ogl1,p=1;
    while(n1>0)
    {
            cifra=n1%10;
            n1=n1/10;
            if(cifra%2==0){
                ogl1=ogl1+cifra+p;
                p=p*10;
            }
    }


}*/

int main()
{
    int nr1,nr2,cifra,aux,ogl1=0,p=1;
    printf("Introduceti valoarea primului numar(>0): ");
    scanf("%d", &nr1);
    while(nr1>0)
    {
            cifra=nr1%10;
            nr1=nr1/10;
            if(cifra%2==0){
                ogl1=ogl1+cifra*p;
                p=p*10;
            }
    }
    nr2=ogl1;
    printf("%d", nr2);


    return 0;
}
