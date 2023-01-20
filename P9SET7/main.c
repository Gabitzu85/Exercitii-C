#include <stdio.h>
#include <stdlib.h>
void transformare(int n,char s1[])
{
    int i;
    char c;
    for(i=0; i<n; i++)
    {
        if(s1[i]=='a' ||s1[i]=='e' ||s1[i]=='i' ||s1[i]=='o' ||s1[i]=='u')
        s1[i]=s1[i]-32;
    }


}

int main()
{
    char s1[256];
    int n;
    printf("Introduceti sirul: \n");
    gets(s1);
    n=strlen(s1);
    strlwr(s1);
    transformare(n,s1);
    printf("Noul sir este: %s", s1);

    return 0;
}
