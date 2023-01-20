//311AA Constantinescu Gabriel Valentin
#include <stdio.h>
#include <stdlib.h>
void interval_de_timp(int *n)
{
    printf("Introduceti intervalul de timp in secunde(valoarea trebuie sa fie multipla de 10): \n");
    scanf("%d", n);
    while(*n%10!=0 && *n>0)
    {
        printf("Intervalul nu este corespunzator(NU este multiplu de 10):");
        scanf("%d", n);
    }
    *n=*n/10;//L-am impartit pe n la 10 deoarece in enunt se precizeaza faptul ca valorile se citesc la fiecare 10 secunde(de exemplu daca introducem 20 de secunde se vor citi 2 valori).
}

void creare_vector_temperaturi(float v[], int n)
{
    int i;
    printf("Introduceti temperaturile: \n");
    for(i=0; i<n; i++)
    {
        printf("Temp[%d] = ", i);
        scanf("%f", &v[i]);
    }
}

float calcularea_temperaturii_medii(float v[], int n)
{
    int i;
    int s=0;
    float temp_med=0;
    for(i=0; i<n; i++)
    {
        s+=v[i];
    }
    temp_med=(float)s/n;
    return temp_med;
}

void verificare(float v[], int n, int *p)
{
    int i,aux=0;
    for(i=0; i<n; i++)
    {
        if(v[i]<=10 || v[i]>=20)
            aux++;
    }
    *p=aux;
}


int main()
{
    int n,val,i;
    float v[100];
    interval_de_timp(&n);
    creare_vector_temperaturi(v,n);
    printf("Temperaturile introduse sunt: \n");
    for(i=0; i<n; i++)
    {
        printf("%.2f ", v[i]);//Afisarea vectorului de la punctul 2.
    }
    printf("\n");
    printf("Temperatura medie este: %.2f\n", calcularea_temperaturii_medii(v,n));
    verificare(v,n,&val);
    printf("%d temperaturi nu sunt cuprinse intre 10 si 20!",val);
    return 0;
}
