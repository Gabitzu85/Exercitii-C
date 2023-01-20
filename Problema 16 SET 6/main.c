#include <stdio.h>
#include <stdlib.h>
void stergere_viata_MUE_PC(int l, int c, int m[][100], int p[][100],int *lin)
{
    int i,aux1=0,aux2=0,k,j,linie=0;
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            if(m[i][j]>m[i][j+1])
            aux1++;
            if(m[i][j]<m[i][j+1])
            aux2++;
            if(aux1==c-1 || aux2==c-1)
            {
                aux1=0;
                aux2=0;
                for(k=0; k<c; k++)
                {
                    p[linie][k]=m[i][k];
                }
                linie++;

            }
            if(m[i][j]==m[i][j+1])
            {
                aux1=0;
                aux2=0;
                break;
            }
            if(aux1+aux2==c-1)
            {
                aux1=0;
                aux2=0;
               break;
            }

        }
    }
    *lin=linie;
}
int main()
{
    int l,c,m[100][100],i,j,p[100][100],finish_line;
    printf("Introduceti numarul de linii: ");
    scanf("%d", &l);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &c);
    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
    {
        printf("m[%d][%d]= ", i,j);
        scanf("%d", &m[i][j]);
    }
    stergere_viata_MUE_PC(l,c,m,p,&finish_line);
    for(i=0; i<finish_line-1; i++)
    {
        for(j=0; j<c; j++)
    {
        printf("%d ", p[i][j]);
    }
    printf("\n");
    }
    return 0;
}
