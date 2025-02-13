#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[4]={1,-3,4,2}; //przypisanie
    int *wsk1, *wsk2;
    wsk1=tab;
    wsk2=&tab[2];
    printf("%d\n",*wsk2);

    int tab2[4]={1,-3,4,7};
    int *wsk3, *wsk4;
    wsk3=tab2;
    wsk4=wsk3+3;
    printf("%p %p\n",wsk3,wsk4); // adresy ? system szestnastkowy
    printf("%d %d\n",*wsk3,*wsk4);
/*
Mozliwe jest znalezienie ronicy miedzy dwoma wskaznikami.
Dzialanie to jest wykonywane zwykle na wskaznikach do elementow
tej samej tablicy i w celu okreslenia, jak daleko od siebie sie znajduja.
Wynik jest wyrazony w jednostce o rozmiarze typu.
*/

    int tab3[4]={1,-3,4,10};
    int *wsk5, *wsk6;
    wsk5=&tab3[2];
    wsk6=&tab3[3];
    printf("\n%d",wsk6-wsk5);

    return 0;
}
