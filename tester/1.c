#include <stdio.h>
#include <stdlib.h>

int distanta(int n, int v[], int m, int w[]){
    if(n!=m)
        return -1;
    int nr=0,i;
    for(i=0;i<n;i++)
        if(v[i]!=w[i])
            nr++;
    return nr;
}

int *construire(int n, int m, int a[][3], int k, int v[]){
    int *p=(int*)calloc(n,sizeof(int));
    int *c=p;
    int i;
    for(i=0;i<n;i++){
        *c=distanta(k,v,m,a[i]);
        c++;
    }
    return p;
}

void dmaxim(int n, int m, int a[][3],int *index1, int *index2){
    int maxim=0, dist;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            dist=distanta(m,a[i],m,a[j]);
            if(dist>maxim){
                maxim=dist;
                *index1=i;
                *index2=j;
            }
        }
}

int main(){

    int a[][3]={
        {1,2,3},//1
        {4,5,6},//3
        {1,3,6},//2
        {1,0,7} //1
    };

    int v[]={1,2,7};

    int n=4,m=3,k=3;

    int *p;
    p=construire(n,m,a,k,v);

    int i;
    for(i=0;i<n;i++)
        printf("p[%d]=%d\n",i,p[i]);

    int index1,index2;
    dmaxim(n,m,a,&index1,&index2);

    printf("\nindex1=%d\nindex2=%d",index1,index2);

    free(p);
    return 0;
}
