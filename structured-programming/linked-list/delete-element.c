#include <stdio.h>
#include <stdlib.h>

struct elem{
    int x;
    struct elem* next;
};

struct elem* dodaj(struct elem* lista, int a)
{
    struct elem* wsk = malloc(sizeof(struct elem));
    wsk->x = a;
    wsk->next=lista;
    return wsk;
};

void wyswietlBezGlowy(struct elem* lista)
{
    if (lista == NULL) printf("Pusta Lista");
    struct elem* wsk = lista;
    while (wsk != NULL)
    {
        printf("%d  ", wsk->x);
        wsk = wsk->next;
    }
}
void usun(struct elem* lista)
{
    struct elem* wsk;
    while ((lista->next != NULL) && (lista->next->x % 5 != 0))
    {
        lista = lista->next;
    }
    wsk = lista->next;
    lista->next = wsk->next;
    free(wsk);
}
void usun_po_pozycji(struct elem* lista, int n)
{
    struct elem* temp1 = lista;
    int ile=0;
    while ((lista->next != NULL) && (ile != n))
    {
        lista = lista->next;
        ile++;
    }
    temp1 = lista->next;
    lista->next = temp1->next;
    free(temp1);
}

int main()
{
    struct elem* lista = NULL;

    lista = dodaj(lista,1);
    lista = dodaj(lista,10);
    lista = dodaj(lista,20);
    lista = dodaj(lista,15);
    lista = dodaj(lista,19);
    lista = dodaj(lista,7);
    lista = dodaj(lista,16);
    lista = dodaj(lista,1);


    wyswietlBezGlowy(lista);
    printf("\n");
    usun(lista);
    wyswietlBezGlowy(lista);
    printf("\n");
    usun_po_pozycji(lista,0);
    wyswietlBezGlowy(lista);

    return 0;
}
