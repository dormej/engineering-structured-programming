// Napisz funkcje wyczysc, ktora dostaje jako argument
//wskaznik do pierwszego elementu
//listy wskaznikowej bezglowy o elementach typu
//element i usuwa wszystkie elementy listy.
#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element* next;
};
struct element* utworz()
{
    return NULL;
};
struct element* dodaj (struct element* Lista, int a)
{
    struct element* wsk = malloc(sizeof(struct element));
    wsk->i = a;
    wsk->next = Lista;
    return wsk;
};
struct element* dodajnakoniec(struct element* Lista, int a)
{
    struct element* wsk;
    if(Lista == NULL)
    {
        Lista = wsk = malloc(sizeof(struct element));
    }
    else{
        wsk = Lista;
        while(wsk->next != NULL)
            wsk=wsk->next;
        wsk->next=malloc(sizeof(struct element));
        wsk = wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return Lista;

};

void wyswietlListeBezGlowy(struct element* lista)
{
    if(lista == NULL) printf("Pusta lista\n");
    struct element* wsk = lista;
    while(wsk != NULL)
    {
        printf("%d\n",wsk->i);
        wsk=wsk->next;
    }
    printf("...........................\n");
}

void wyczysc( struct element* Lista)
{
    struct element* wsk = Lista;
    while (Lista != NULL)
    {
        Lista = Lista->next;
        free(wsk);
        wsk=Lista;
    }
}
struct element* znajdz(struct element* Lista, int a)
{
    while((Lista != NULL) && (Lista->i != a))
        Lista=Lista->next;
    return Lista;
};
struct element* usun_element (struct element* Lista, int a)
{
    struct element* wsk, *wsk2;
    if (Lista == NULL)
        return Lista;
    wsk = Lista;
    if (Lista->i == a)
    {
        Lista = Lista -> next;
        free(wsk);
    }
    else
    {
        while((wsk->next != NULL) && (wsk->next->i != a))
            wsk = wsk->next;
        if (wsk->next != NULL)
        {
            wsk2=wsk->next;
            wsk->next=wsk2->next;
            free(wsk2);
        }
    }
    return Lista;
};
int main()
{
    struct element* lista = utworz();
    struct element* lista2 = utworz();
    struct element* lista3 = utworz();
    struct element* lista4 = utworz();

    lista = dodaj(lista,2);
    lista = dodaj(lista,7);
    lista = dodaj(lista,4);
    lista = dodaj(lista,10);

    lista2 = dodajnakoniec(lista2,6);
    lista2 = dodajnakoniec(lista2,9);
    lista2 = dodajnakoniec(lista2,0);

    wyswietlListeBezGlowy(lista);
    wyswietlListeBezGlowy(lista2);

    lista3 = znajdz(lista, 2);
    wyswietlListeBezGlowy(lista3);

    lista4 = usun_element(lista2, 9);
    wyswietlListeBezGlowy(lista4);


//    wyczysc(lista);

    return 0;

}
