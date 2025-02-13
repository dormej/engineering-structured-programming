#include <stdio.h>
#include <stdlib.h>

    enum Plec{
        mezczyzna , kobieta
        };
    enum mezczyzna{
        wolny , zonaty
        };
    enum kobieta{
        wolna , mezatka
        };
    union czlowiek {
        enum mezczyzna m;
        enum kobieta k;
        };
    struct dane_osobowe{
        char imie [ 30] ;
        char nazwisko [30 ];
        enum Plec plec ;
        union czlowiek stan_cywilny ;
        };
    //void wczytaj (struct dane_osobowe tab [] , int n)
    //
    int n = 5;
    int i ,d;
    for( i =0;i<n; i++)
    {
        printf ("Czy␣teraz␣wczytujemy␣dane␣kobiety ␣(1)␣") ;
        printf ("czy␣mezczyzny␣(2) ?") ;
        scanf ("%d",&d) ;
        if (d==1)
            tab [ i ] . plec=kobieta ;
        else tab [ i ] . plec=mezczyzna ;
        {
            printf ("podaj␣imie␣") ;
            scanf ("%s" , tab [ i ] . imie ) ;
            printf ("podaj␣nazwisko ") ;
            scanf ("%s" , tab [ i ] . nazwisko ) ;
            printf ("podaj␣stan␣cywilny ␣") ;

        }
        if ( tab [ i ] . plec==kobieta )
            printf ("(wolna␣−␣0 ,␣mezatka␣−␣1)␣") ;

        else
        {
            printf ("(wolny␣−␣0 ,␣zonaty ␣−␣1)") ;
            scanf ("%d",&tab [ i ] . stan_cywilny . k) ;

        }
    }

