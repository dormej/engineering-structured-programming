#include <stdio.h>

unsigned int ciag (unsigned int n)
{
    if(n==0) return 1;
    else return 2*ciag(n-1) + 5;
}
int main()
{
    unsigned int n;
    printf("Podaj liczbe n: ");
    scanf("%i", &n);
    printf("Elem. ciagu o indeksie %i jest %i", n, ciag(n));
    return 0;
}
