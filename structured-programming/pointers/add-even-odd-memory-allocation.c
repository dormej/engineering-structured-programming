#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int fun (unsigned int  n)
{
    if (n==0) return 1;
    if (n==1) return -1;
    if (n%2 == 0) return (fun(n-2)-n);
    return (fun(n-2)*n);
}
int suma (int a, int b, int tab[a][b])
{
    int sum = 0;
    for (int i=0;i<b;i++)
    {
        for (int j=0;j<a;j++)
        {
            if (j % 2 == 0) sum+=tab[j][i];
        }
    }
    return sum;
}
int suma2(int a, int b, int tab[a][b])
{
    int p;
    if (a<=b) p = a;
    else p = b;
    int suma = 0;
    for (int i=0;i<p;i++)
    {
        suma+=pow(tab[i][i],3);
    }
    return suma;
}
float rezerwuje()
{
    float *tab;
    tab = (double*)malloc(sizeof(double)*2);
    tab[0] = 5.2;
    tab[1] = -4.2;
    return *tab;
}
int main()
{
    int n = 2, m = 3;
    printf("a_%i = %i", n,fun(n));
    printf("\na_%i = %i\n", m,fun(m));

    srand(time(NULL));
    int a = 2;
    int b = 5;
    int tab[a][b];
    for (int i=0;i<b;i++)
    {
        for (int j=0;j<a;j++)
        {
            tab[j][i] = rand()%5;
            printf("%i ",tab[j][i]);
        }
        printf("\n");
    }
    printf("Suma = %i", suma(a,b,tab));
    printf("\nSuma szczescianow na przekatnej: %d", suma2(a,b,tab));
    printf("\n%.1f",rezerwuje());

    return 0;
}
