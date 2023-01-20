#include <stdio.h>
#include <stdlib.h>
void maxim(int v[], int n)
{
    int i,max;
    max=v[0];
    for(i=0; i<n; i++)
    {
        if(v[i]%2==1)
        {
            if(v[i]>max)
                max=v[i];
        }

    }
    printf("\nValoarea maxima impara din vector este %d !", max);


}

int main()
{
    int v[100],n,i;
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("v[[%d] = ", i);
        scanf("%d", &v[i]);
    }
    printf("Vectorul introdus este: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ", v[i]);
    }
    maxim(&v[0],n);


    return 0;
}
