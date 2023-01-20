#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char c, nume_txt[100];
    char sir[200]
    printf("Introduceti numele folderului pe care doriti sa il deschideti: \n");
    fflush(stdin);
    gets(nume_txt);
    if((f=fopen(nume_txt,"rt"))==NULL)
    {
        printf("Eroare la deschiderea fisierului!");
        exit(1);
    }
    fscanf(f,sir,)
    fclose(f);



    return 0;
}
