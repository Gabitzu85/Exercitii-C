#include <stdio.h>
#include <stdlib.h>
int pare(int x[], int nx, int nou[])
{
    int nr=0,i;
    for(i=0; i<nx; i++)
        if(x[i]%2==0)
        nou[nr++]=x[i];
    return nr;

}







int main()
{
    int i,j,a[100][100],b[100][100]={0},l,c,max=0,k=0,nb;
    scanf("%d", &l);
    scanf("%d", &c);
    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
    {
        printf("a[%d][%d] = ", i,j);
        scanf("%d", &a[i][j]);
    }
    for(i=0; i<l; i++)
    {
        nb=pare(a[i],c,b[k]);
        if(nb!=0)
        {
            k++;
            if(nb>max) max=nb;
        }
    }
    if(k!=0)
        for(i=0; i<k; i++)
    {
        for(j=0; j<max; j++) printf("%4d", b[i][j]);
        printf("\n");
    }
    else
        printf("In matricea data nu au fost gasite elemente cu valoatrew para");


    return 0;
}
