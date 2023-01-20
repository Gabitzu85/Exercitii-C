#include <stdio.h>
#include <stdlib.h>
int **creare_matrice(int *linii,int *coloane)
{
    int i,j;
    int **v=(int **)malloc(*linii*sizeof(int*));
    for (i=0; i<*linii; i++)
        v[i] = (int*)malloc(*coloane * sizeof (int));
    for (i=0; i<*linii; i++)
     for (j=0; j<*coloane; j++)
          scanf("%d", &v[i][j]);
    return v;
}
/*void caca_mue_matrice(int *l, int *c)
{
    int i,j;
    int ***v=(int **)realloc(**v,(*l+1)*sizeof(int*));
    for (i=0; i<*l; i++)
        **v[i] = (int*)realloc(**v,(*c+1) * sizeof(int));
    for (i=*l; i<*l+1; i++)
     for (j=*c; j<*c+1; j++)
          scanf("%d", &v[i][j]);

}*/

int main()
{
    int i,j,l,c;
    scanf("%d", &l);
    scanf("%d", &c);
    int **m=creare_matrice(&l,&c);
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%5d ", m[i][j]);
        }
        printf("\n");
    }
   /*caca_mue_matrice(&l,&c);
    for(i=0; i<l+1; i++)
    {
        for(j=0; j<c+1; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }*/


    return 0;
}
