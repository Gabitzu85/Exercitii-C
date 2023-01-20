#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100],s=0,n,i,aux=1,min,poz=0;
    float media;
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", &n);
    do {
    for(i=0; i<n; i++)
    {
        printf("v[%d]= ", i);
        scanf("%d", &v[i]);
    }
    } while(n<0);

    //Punctul a)
    for(i=0; i<n; i++)
    {
        s=s+v[i];
    }
    media=(float)s/n;
    for(i=0; i<n; i++)
    {
        if(media==v[i])
        aux++;
    }
    if(aux!=1)
        printf("\nMedia se afla in vector!");
    else
        printf("\nMedia nu se afla in vector!");

    //Punctul b)
    min=v[0];
    for(i=0; i<n; i++)
    {
        if(min>v[i]){
            min=v[i];
            poz++;}
    }
    printf("\nValoarea minima este %d si se afla pe pozitia %d ", min,poz);
    return 0;
}
