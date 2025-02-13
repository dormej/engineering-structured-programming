#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 4

int main()
{
    int tab[ROZMIAR] = {[2] = 34};
    for (int i=0;i<ROZMIAR;i++)
    {
        printf("%d  ",tab[i]);
    }

    printf("\n");

    int tab1[] = {2,3,-2,0};
    for (int i=0;i<sizeof tab1/sizeof(int);i++)
        {
            printf("%d  ",tab1[i]);
        }
    printf("\n");

    int tab3[ROZMIAR] = {1,-2,3};
    printf("%d",tab3[-1]); // zakres tablic

    int n = 5;int m = 8;
    int tabb1[5];// ok
    int tabb2[3*2+1];// ok
    int tabb3[sizeof(int)+1];// ok
    //int tabb4[-2]; // nie,  bo <0
    int tabb5[0];// nie ???
    //int tabb6[6.5]; // nie, boe nie ca³k.
    //int tabb7[int(2.5)]; // ok, mamy rzut
    int tabb8[n];// brak dla C90
    int tabb9[m];// Brak dla C()


    return 0;
}

