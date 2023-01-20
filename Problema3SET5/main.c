#include <stdio.h>
#include <stdlib.h>

void analizeaza(int n1, int n2, int n3)
{
    if(n1<n2 && n2<n3)
        printf("C");
    else if(n1>n2 && n2>n3)
        printf("D");
    else if (n1==n2 && n2==n3 )
        printf("I");
    else printf("N");
}








int main()
{
    int n1,n2,n3;
    char apasat='Y';
    while(apasat=='y' || apasat=='Y'){
    printf("Introduceti valoarea primului numar: ");
    scanf("%d", &n1);
    printf("Introduceti valoarea celui de-al doilea numar: ");
    scanf("%d", &n2);
    printf("Introduceti valoarea celui de-al treilea numar numar: ");
    scanf("%d", &n3);
    analizeaza(n1,n2,n3);
    printf("\nVreti sa continuati? y/n \n");
    fflush(stdin);
    scanf("%c", &apasat);}
    return 0;
}
