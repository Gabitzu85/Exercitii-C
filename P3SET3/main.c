#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr_lin,nr_col,m[10][10],i,j;
    printf("Introduceti numarul de linii: ");
    scanf("%d", &nr_lin);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &nr_col);
    if(nr_lin==nr_col){
    for(i=0; i<nr_lin; i++)
        for(j=0; j<nr_col; j++)
        {
            printf("m[%d][%d]= ", i,j);
            scanf("%d", &m[i][j]);
        }
    }
    else
        printf("Matricea introdusa nu este patratica!");
        printf("Elementele de pe diagonala principala sunt: \n");
    for(i=0; i<nr_lin; i++)
        for(j=0; j<nr_col; j++)
    {
        if(i==j){

        printf("%d ", m[i][j]);}
    }

    printf("\nElementele de pe diagonala secundara sunt: \n");
    for(i=0; i<nr_lin; i++)
        for(j=0; j<nr_col; j++)
    {
        if(i+j==nr_lin-1){
        printf("%d ", m[i][j]);}
    }
    printf("\nElementele de sub diagonala principala sunt: \n");
    for(i=0; i<nr_lin; i++)
        for(j=0; j<nr_col; j++)
    {
        if(i>j){
        printf("%d ", m[i][j]);}
    }
    printf("\nElementele de sub diagonala secundara sunt: \n");
    for(i=0; i<nr_lin; i++)
        for(j=0; j<nr_col; j++)
    {
        if(i+j<nr_lin+1){
        printf("%d ", m[i][j]);}
    }





    return 0;
}
