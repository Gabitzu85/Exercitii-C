#include <stdio.h>
#include <stdlib.h>
void inlocuire(char *p)
{
    int s_initial;
    s_initial=*p;
    if(s_initial>='a' && s_initial<'z')
        s_initial+=1;
    if(s_initial=='z')
        s_initial='a';
    *p=s_initial;
}


int main()
{
    char s[256];
    int i;
    printf("Introduceti sirul: \n");
    gets(s);
    strlwr(s);
    for(i=0; i<strlen(s); i++)
    {
        inlocuire(&s[i]);
    }
    printf("%s", s);
    return 0;
}
