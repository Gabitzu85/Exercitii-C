#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    int i,j,l,c,m[10][10];

    if((f=fopen("Matrice_txt.dat","wb"))==NULL)
    {
        printf("Eroare la deschiderea fisierului!");
        exit(1);
    }
    printf("Introduceti nr de linii: \n");
    scanf("%d", &l);
    printf("Introduceti nr de coloane: \n");
    scanf("%d", &c);
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("m[%d][%d]= ", i,j);
            scanf("%d", &m[i][j]);
        }
    }
    fwrite(m,sizeof(int),l*c,f);
    fclose(f);

    if((f=fopen("Matrice_txt.dat","rb"))==NULL)
    {
        printf("Eroare la deschiderea fisierului!");
        exit(1);
    }
    printf("\nContinutul fisierului este: \n");
    fread(m,sizeof(int),l*c,f);
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    fclose(f);
    return 0;
}
