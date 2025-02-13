#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

struct element * utworz()
{
    return NULL;
};
struct element *dodaj(struct element *lista, int a)
{
    struct element *wsk = malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=lista;
    return wsk;
};
void wyswietlListeBezGlowy(struct element *lista)
{
    if (lista == NULL)
    {
        printf("Pusta lista\n");
    }
    else
    {
        struct element * wsk = lista;
        while(wsk!=NULL)
        {
            printf("%d\n", wsk->i);
            wsk=wsk->next;
        }
    }
    printf("---------------\n");
}
int main()
{
    struct element *lista = utworz();
    struct element *lista1 = NULL;
    wyswietlListeBezGlowy(lista1);
    lista1=dodaj(lista1,8);
    lista1=dodaj(lista1,7);
    lista1=dodaj(lista1,-1);


    wyswietlListeBezGlowy(lista1);

    return 0;

}
