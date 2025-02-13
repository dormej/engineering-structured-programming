#include <stdio.h>

void ostatnie(char [],int);

int main()
{
    char napis[100];
    int n;
    printf("podaj napis: ");
    gets(napis);
    printf("podaj ile chcesz zostawic ostatnich znakow napisu: ");
    scanf("%i", &n);
    ostatnie(napis, n);
    printf("napis po zmianie: %s\n", napis);
    return 0;
}

void ostatnie(char napis[],int n)
{
    int i = 0;
    while(napis[i] != '\0') i++;
    int dlugosc_napisu = i;
    int j = 0;
    for(i = dlugosc_napisu - n; i < dlugosc_napisu; i++)
    {
        napis[j] = napis[i];
        j++;
    }
    napis[j] = '\0';
}
