#include <stdio.h>
#include <stdlib.h>
int functie(int a[], int b[])
{
    int i,aux=0;
    int *n1=3;
    int *n2=3;
    if(n1==n2)
    {
        for(i=0; i<n1; i++)
        {
            if(a[i]!=b[i])
                aux++;
        }
        return aux;
    }
    else
        return -1;
}
void functie2(int m[][100], int a[])
{
    int i,j;
    for(i=0; i<l; i++)
    {
        a[i]=functie(m[i],a);
    }
    for(i=0; i<l; i++)
        printf("%d", a[i]);
}

int main()
{
    int a[100]={1,4,3},b[100]={1,5,4},i,j,l,c,m[100][100];
    printf("\n%d", functie(a,b));
    /*for(i=0; i<l; i++)
        for(j=0; j<c; j++)
    {
        scanf("%d", &m[i][j]);
    }
     for(i=0; i<l; i++)
        for(j=0; j<c; j++)
    {
        printf("%d", m[i][j]);
    }
    functie2(m,l,c)*/


    return 0;
}
