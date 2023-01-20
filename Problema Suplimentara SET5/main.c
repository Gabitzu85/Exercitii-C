#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n)
{
    int nr1=0, nr2=1, nr3, i;
    for(i=3; i<=n; i++)
    {
        nr3=nr1+nr2;
        nr1=nr2;
        nr2=nr3;

    }
    return nr3;
}
int factorial(int n)
{
    int i,nr=1;
    for(i=1;i<=n;i++)
        nr*=i;
    return nr;
}


float expresie(float n)
{
    float e;
    e=(float)fibonacci(n)/factorial(n);
    return e;

}
int main()
{
    int n;
    scanf("%d", &n);
    fibonacci(n);
    printf("%d ", fibonacci(n));
    factorial(n);
    printf("%d ", factorial(n));
    expresie(n);
    printf("%.10f ", expresie(n));
    return 0;
}
