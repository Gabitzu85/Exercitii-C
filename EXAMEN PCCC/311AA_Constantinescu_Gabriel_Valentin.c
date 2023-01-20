//311AA, Constantinescu Gabriel Valentin
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct BANCA
{
    char nume[100];
    float debit;
    float credit;
    int cod_client;
}banca;

//Punctul a)
int codmax(banca v[], int n)
{
    int i,maxcod=0;
    for(i=0; i<n; i++)
    {
        if(v[i].cod_client>maxcod)
        {
            maxcod=v[i].cod_client;
        }
    }
    return maxcod;
}

//Punctul b)
void analiza(banca b1[], banca b2[], int n1, int n2, banca bdoar1[], banca bdoar2[], banca bcomun[], int &ndoar1, int &ndoar2, int &ncomun)
{
    int i, j;
    ndoar1=0;
    ndoar2=0;
    ncomun=0;
    for(i=0; i<n1; i++)
        {
        for(j=0; j<n2; j++)
        {
            if(strcmp(b1[i].nume, b2[j].nume) == 0)
            {
                strcpy(bcomun[ncomun].nume, b1[i].nume);
                bcomun[ncomun].debit = b1[i].debit + b2[j].debit;
                bcomun[ncomun].credit = b1[i].credit + b2[j].credit;
                bcomun[ncomun].cod_client = b2[j].cod_client;
                ncomun++;
            }
        }
    }
    for(i=0; i<n1; i++)
        {
        for(j=0; j<ncomun; j++)
        {
            if(strcmp(b1[i].nume, bcomun[j].nume) != 0)
            {
                strcpy(bdoar1[ndoar1].nume, b1[i].nume);
                bdoar1[ndoar1].debit = b1[i].debit;
                bdoar1[ndoar1].credit = b1[i].credit;
                bdoar1[ndoar1].cod_client = b1[i].cod_client;
                ndoar1++;
            }
        }
    }
    for(i=0; i<n2; i++)
    {
        for(j=0; j<ncomun; j++)
        {
            if(strcmp(b2[i].nume, bcomun[j].nume) != 0)
            {
                strcpy(bdoar2[ndoar2].nume, b2[i].nume);
                bdoar2[ndoar2].debit = b2[i].debit;
                bdoar2[ndoar2].credit = b2[i].credit;
                bdoar2[ndoar2].cod_client = b2[i].cod_client;
                ndoar2++;
            }
        }
    }
}

int main()
{
    int n1=0,n2=0,cmax,i;
    FILE *f1, *f2, *f_binar;
    banca b1[50], b2[50];
    banca bcomun[50], bdoar1[50], bdoar2[50];
    int ndoar1,ndoar2,ncomun;


    if((f1=fopen("BANCA1.TXT","rt"))==NULL)
    {
        printf("Eroare la deschiderea fisierului!");
        exit(1);
    }
    if((f1=fopen("BANCA2.TXT","rt"))==NULL)
    {
        printf("Eroare la deschiderea fisierului!");
        exit(1);
    }

    while(fscanf(f1,"%s %f %f %d",b1[n1].nume,b1[n1].debit,b1[n1].credit,b1[n1].cod_client))
    {
        n1++;
    }
    while(fscanf(f2,"%s %f %f %d",b2[n2].nume,b2[n2].debit,b2[n2].credit,b2[n2].cod_client))
    {
        n2++;
    }

    cmax=codmax(b2,n2);

    analiza(b1,b2,n1,n2,bdoar1,bdoar2,bcomun,ndoar1,ndoar2,ncomun);

    fclose(f1);
    fclose(f2);

    if((f_binar=fopen("BANCA_BINAR.dat","wb"))==NULL)
    {
        printf("Eroare la deschiderea fisierului!");
        exit(1);
    }

    for(i=0; i<ndoar2; i++)
    {
        fwrite(&bdoar2[i],sizeof(banca),1,f_binar);
    }
    for(i=0; i<ncomun; i++)
    {
        fwrite(&bcomun[i],sizeof(banca),1,f_binar);
    }
    for(i=0; i<ndoar1; i++)
    {
        bdoar1[i].cod_client=cmax+i+1;
        fwrite(&bdoar1[i],sizeof(banca),1,f_binar);
    }
    fclose(f_binar);
    printf("Numarul final de componente este: %d!", ndoar1+ndoar2+ncomun);
    return 0;
}
