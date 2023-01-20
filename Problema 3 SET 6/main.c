#include <stdio.h>
#include <stdlib.h>
void numarare(int v[],int n,int *y1,int *y2,int *y3)
{
    int i, pereche_poz=0, pereche_neg=0, pereche_nul=0;
    *y1=0;
    *y2=0;
    *y3=0;
    for(i=0; i<n; i++)
    {
        if(v[i] > 0){
            pereche_poz++;}
        else if(v[i] < 0){
            pereche_neg++;
        }
        else if(v[i] == 0){
            pereche_nul++;
        }
    }
    *y1=pereche_poz;
    *y2=pereche_neg;
    *y3=pereche_nul;
    //printf("\nIn vector sunt %d numere poz, %d numere negative si %d numere nule!", *y1,*y2,*y3);
    //printf("\nIn vector sunt %d numere poz, %d numere negative si %d numere nule!", pereche_poz,pereche_neg,pereche_nul);
}

int main()
{
    int v[100],n,i,*p1,*p2,*p3;
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
    printf("Vectorul introdus este:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", v[i]);
    }
    numarare(&v[0], n, &p1, &p2, &p3);
    printf("%d %d %d", numarare(&v[0], n, &p1, &p2, &p3));
    return 0;
}
