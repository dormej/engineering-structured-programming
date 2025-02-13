#include <stdio.h>
#include <stdlib.h>

void foo(unsigned int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        tab[i] = 0;
        printf("%i ",tab[i]);
    }
}
void foo1(unsigned int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        tab[i] = i;
        printf("%i ",tab[i]);
    }
}
void foo2(unsigned int n, int *tab)
{
    float suma=0;
    for (int i=0;i<n;i++)
    {
        suma+=tab[i];
    }
    printf("Sr. arytm. = %.2f", suma/n);
}
int main()
{
    int x=8;
    int tab[x];
    foo(x,tab);
    printf("\n");
    foo1(x,tab);
    printf("\n");
    foo2(x,tab);
    return 0;
}
