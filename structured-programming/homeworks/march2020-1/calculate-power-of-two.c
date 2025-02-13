#include <stdio.h>
int potega (int n)
{
    int wynik;
    wynik=pow(2,n);
    return wynik;
}
int main()
{
    int n;
    printf("Program liczy wartosc liczby 2^n\n");
    printf("Podaj n: ");
    scanf("%i", &n);
    printf("2^%i = %i", n, potega(n));
    return 0;
}
