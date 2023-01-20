#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100],nr,i,j,aux,ok;
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", &nr);
    do{
    for(i=0; i<nr; i++)
    {
        printf("v[%d]= ", i);
        scanf("%d", &v[i]);
    }
    } while (nr<0);
    //Metoda I
    /*for(i=0; i<nr; i++)
        for(j=i+1; j<nr; j++)
    if(v[i+1]>v[i]){
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
    }
    } while (nr<=0);
    printf("Vectorul ordonat descrescator este: \n");
    for(i=0; i<nr; i++)
    printf("%d ", v[i]);*/

    //Metoda II
    do
    {
        ok=1;
        for(i=0;i<nr-1;i++)
            if(v[i]<v[i+1])
        {
            aux=v[i];
            v[i]=v[i+1];
            v[i+1]=aux;
            ok=0;
        }
    } while(ok!=1);
    printf("Vectorul ordonat descrescator este: \n");
    for(i=0; i<nr; i++)
    printf("%d ", v[i]);
    return 0;

}
