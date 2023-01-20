#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Tipul char se reprezinta intern pe %d octet. \n ", sizeof(char));
    printf("Tipul unsigned char se reprezinta intern pe %d octet. \n ", sizeof(unsigned char));
    printf("Tipul int se reprezinta intern pe %d octeti. \n ", sizeof(int));
    printf("Tipul unsigned int se reprezinta intern pe %d octeti. \n ", sizeof(unsigned int));
    printf("Tipul long int se reprezinta intern pe %d octeti. \n ", sizeof(long int));
    printf("Tipul unsigned long int se reprezinta intern pe %d octeti. \n ", sizeof(unsigned long int));
    printf("Tipul float se reprezinta intern pe %d octeti. \n ", sizeof(float));
    printf("Tipul double se reprezinta intern pe %d octeti. \n ", sizeof(double));
    printf("Tipul long double se reprezinta intern pe %d octeti. \n ", sizeof(long double));
    return 0;
}
