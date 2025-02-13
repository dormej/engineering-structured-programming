#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *tab, *pom, i, maks;
    tab = (int*)malloc(sizeof(int) *5);
    pom = tab;

    printf("podaj element tablicy\n");
    for (i=0;i<5;i++)
    {
        scanf("%d", tab); 
        tab++;
    }
    tab = pom;
    maks = *tab;
    tab++;
    for (i=1;i<5;i++)
    {
        if(maks<*tab) maks = *tab;
        tab++;
    }
    printf("element najwiekszy: %d\n", maks);
    return 0;
}
