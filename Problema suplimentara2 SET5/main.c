#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int delta(int a, int b, int c)
{
    int delta;
    delta=b*b-4*a*c;
    return delta;
}

void rezultat(int a, int b, int c)
{
    float x1, x2;
    delta(a,b,c);
    x1=(float)((-b+sqrt(delta(a,b,c)))/(2*a));
    x2=(float)((-b-sqrt(delta(a,b,c)))/(2*a));
    printf("x1 = %.4f\n", x1);
    printf("x2 = %.4f\n", x2);
}

int main()
{
    int a,b,c;
    printf("Introduceti coeficientii ecuatiei de gradul al II-lea(a,b,c): \n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Ecuatia de gradul al II-lea este: \n");
    printf("%dx^2+%dx+%d=0", a, b, c);
    delta(a, b, c);
    printf("\nDelta este: %d\n", delta(a,b,c));
    rezultat(a,b,c);
    return 0;
}
