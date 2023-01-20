#include <stdio.h>
#include <stdlib.h>



int main()
{
    char s[256];
    int n,i,aux=0,vocala=0;
    printf("Introduceti sirul: \n");
    gets(s);
    printf("Sirul schimbat este: \n");
    printf("%s", strlwr(s));
    n=strlen(s);
    if(s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u')
    vocala++;
    for(i=1; i<n; i++)
    {
        if (s[i-1]==' ');
        {
            i=aux;
            while(s[i]!=' ')
                        aux++;
            if ((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') && (s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='i'||s[i-1]=='o'||s[i-1]=='u'));
            vocala++;
        }
    }
    printf ("Sunt %d cuvinte care incep si se termina cu vocala.", vocala);

}


