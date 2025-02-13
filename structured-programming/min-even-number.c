/*
Zad. 10
funkcja  int minParzysta(int  tablica[],int rozmiar)
zwraca w wyniku najmniejsza parzyst¹ wartoœæ z tablicy
tablica: {3, 5, 8, 1, 9, 4, 7 } wynik 4
*/
#include <stdio.h>
#include <time.h>

int minParzysta(int tablica[], int rozmiar)
{
    int min = 12;
    int i;
    for (i=0;i<rozmiar;i++)
    {
        if (tablica[i]<min && tablica[i]%2==0)
            min=tablica[i];
    }
    return min;
}
int main()
{
    int rozmiar;
    int i;
    srand(time(NULL));
    printf("Podaj rozmiar tablicy: ");
    scanf("%i", &rozmiar);
    int tablica[rozmiar];
    for(i=0;i<rozmiar;i++)
    {
        tablica[i]=rand()%11;
        printf("%i ", tablica[i]);
    }
    if (tablica[i]!=12)
    printf("Najmniejsza parzysta: %i", minParzysta(tablica, rozmiar));
    else printf("BRAK");
    return 0;
}

