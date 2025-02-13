#include <stdio.h>

int silnia (int liczba)
{
    int i;

    for (i=liczba-1;i>0;i--)
    {
        liczba=liczba*i;
    }
    return liczba;
}
int main ()
{
    int liczba;
    printf("Podaj liczbe: ");
    scanf("%i", &liczba);
    if (liczba<0)
    {
         printf("Musi byc liczba dodatnia."); return 0;
    }
    else
    printf("Silnia z liczby %i to %i", liczba, silnia(liczba));
    return 0;
}
