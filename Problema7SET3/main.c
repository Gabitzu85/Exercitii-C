#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr_lin,nr_col,m[nr_col][nr_lin],i,j;
    printf("Introduceti numarul de linii: ");
    scanf("%d", &nr_lin);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &nr_col);
    for(i=0; i<nr_lin; i++)
        for(j=0; j<nr_col; j++)
        {
            printf("m[%d][%d]= ", i,j);
            scanf("%d", &m[i][j]);
        }
    return 0;
}
