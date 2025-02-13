#include <stdio.h>
int potega (int n, int m)
{
    int wynik;
    wynik=pow(n,m);
    return wynik;
}
int main()
{
    int n,m;
    printf("Podaj n: ");
    scanf("%i", &n);
    printf("Podaj m: ");
    scanf("%i", &m);
    if(m==0 && n==0) printf("Blad");
    printf("%i^%i = %i", n,m,potega(n,m));
    return 0;
}
