#include <stdio.h>
#include <stdlib.h>

struct sondaj
{
    char nume[50];
    char localitate[50];
    int CUIE[50];
};

struct sondaj sond;



struct nod
{
    int val;
    struct nod* urmator;
};
typedef struct nod n;
int main()
{
    int i,nr;
    n* cap,*p,*q;
    printf("Introduceti nr. de elemente al listei: ");
    scanf("%d", &nr);
    p=(n*)malloc(sizeof(n));
    if(p==NULL)
    {
        printf("Alocare dinamica esuata!");
        exit(1);
    }
    printf("Introduceti valoarea primului element: ");
    scanf("%d", &p->val);
    p->urmator=NULL;
    cap=p;
    for(i=2;i<=nr;i++)
    {
        q=(n*)malloc(sizeof(n));
        if(q==NULL)
        {
            printf("Alocare dinamica esuata!");
            exit(1);
        }
        printf("Introduceti valoarea celui de-al %d element: ", i);
        scanf("%d", &q->val);
        q->urmator=NULL;
        p->urmator=q;
        p=q;
    }
    for(p=cap; p!=NULL; p=q)
    {
        q=p->urmator;
        free(p);
    }
    return 0;
}
