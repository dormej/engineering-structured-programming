#include <stdio.h>
#include <stdlib.h>

int bezwzgledna(int liczba)
{
    if (liczba>=0)
    {
        return liczba;
    }
    else
    {
        liczba=(-1)*liczba;
        return liczba;
    }
}
int main ()
{
    int liczba;
    printf("Podaj liczbe: ");
    scanf ("%i", &liczba);
    printf("Wartosc bezwzgledna: %i", bezwzgledna(liczba));
    return 0;
}


#include <stdio.h>
#include <math.h>
int potega(int liczba)
{
   int pot;
   pot = pow(2,liczba);
   return pot;
}
int main ()
{
    int liczba;
    printf("Podaj liczbe: ");
    scanf("%i", &liczba);
    printf("2^%i = %i", liczba, potega(liczba));
}

