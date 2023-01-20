#include <stdio.h>
#include <stdlib.h>


void matrice (int ***a, int *m, int *n)
{
    int i,j;



    *m=4;
    *n=5;

    *a = (int**)malloc(*m * sizeof (int*));

    for (i=0; i<*m; i++)
        (*a)[i] = (int*)malloc(*n * sizeof (int));

    for (i=0; i<*m; i++)
     for (j=0; j<*n; j++)
          scanf("%d", &(*a)[i][j]);

}

int ** matrice2(int **a, int *m, int *n)
{
    int i,j;

    *m=3;
    *n=2;

    a = (int**)malloc(*m * sizeof (int*));

    for (i=0; i<*m; i++)
        a[i] = (int*)malloc(*n * sizeof (int));

    for (i=0; i<*m; i++)
     for (j=0; j<*n; j++)
          scanf("%d", &a[i][j]);

    return a;


}



int main()
{
    int **mat, l, c;
    int i,j;

  //  matrice(&mat, &l, &c);

    mat = matrice2(mat, &l, &c);

    for (i=0; i<l; i++)
    { for (j=0; j<c; j++)
            printf("%5d", mat[i][j]);
      printf("\n");
    }

}









