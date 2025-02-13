#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element* next;
};

struct element *utworzzglowa()
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->next=NULL;
    return wsk;
}
void dodaj(struct element *Lista,int a)
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
void wyswietl_z_glowa(struct element* lista)
{
    if(lista->next == NULL) printf("Pusta lista\n");
    struct element* wsk = lista->next;
    while(wsk != NULL)
    {
        printf("%d\n",wsk->i);
        wsk=wsk->next;
    }
    printf("...........................\n");
}
void usun_by_position(struct element* lista, int n)
{
    if(n == 0) return;
    struct element* temp1 = lista;
    int i;
    for(i=1;i<n;i++)
    {
        temp1 = temp1->next;
    }
    struct element* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}

int main()
{
    struct element * lista=utworzzglowa();
    dodaj(lista,2);
    dodaj(lista,1);
    dodaj(lista,8);
    dodaj(lista,5);
    wyswietl_z_glowa(lista);

    wyswietl_z_glowa(lista);
    usun_by_position(lista,4);
    wyswietl_z_glowa(lista);

    return 0;
}
