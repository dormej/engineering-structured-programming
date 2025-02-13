#include <stdio.h>
#include <stdlib.h>

void wczytaj(unsigned int n, int tab[n][n])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Podaj element [%i][%i]", i, j);
            scanf("%d",&tab[i][j]);
        }
    }
}
int suma(unsigned int n, int tab[n][n])
{
    int i;
    int p = 0, q =0;
    for(i=0;i<n;i++)
        p=p+tab[i][i];
    for(i=0;i<n;i++)
        q=q+tab[i][n-i-1];

    if(p == q)
        return p;
    return (p<q) ? q : p;
}
int main()
{
    unsigned int wymiar;
    while(wymiar > 10 || wymiar <= 0)
    {
        printf("Podaj wymiar tablicy (0 < wymiar =< 10): ");
        scanf("%i", &wymiar);
    }
    int tab[wymiar][wymiar];
    wczytaj(wymiar, tab);

    printf("Wieksza z sum: %i", suma(wymiar, tab));

    return 0;
}
