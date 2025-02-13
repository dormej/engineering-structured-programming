#include <stdio.h>
#include <stdlib.h>

struct element
{
    double i;
    struct element *next;
};

struct element *utworzzglowa()
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->next=NULL;
    return wsk;
}

void dodajnakonieczglowa(struct element *Lista,int a)
{
    struct element *wsk=Lista;
    while(wsk->next!=NULL)
    {
        wsk=wsk->next;
    }
    wsk->next=malloc(sizeof(struct element));
    wsk=wsk->next;
    wsk->i=a;
    wsk->next=NULL;
}

int sumazglowa(struct element * Lista)
{
    int sum=0;
    Lista=Lista->next;
    while(Lista!=NULL)
    {
        sum=sum+Lista->i;
        Lista=Lista->next;
    }
    return sum;
}

int main()
{
    struct element * lista=utworzzglowa();
    dodajnakonieczglowa(lista,4);
    dodajnakonieczglowa(lista,2);
    dodajnakonieczglowa(lista,8);

    printf("suma: %i ", sumazglowa(lista));


}
