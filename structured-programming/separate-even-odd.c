#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int k = 0;
    int j = 0;
    int x;
    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &x);

    int tab1[x],tab2[x],tab3[x];
    srand(time(NULL));

    for (int i=0;i<x;i++)
    {
        tab1[i] = rand()%10;
        printf("%i ", tab1[i]);
    }
    for (int i=0;i<x;i++)
    {
        if (tab1[i] % 2 == 0)
        {
            tab2[j] = tab1[i];
            j++;
        }
        else
        {
            tab3[k] = tab1[i];
            k++;
        }
    }
    printf("\n");
    for (int i=0;i<j;i++)
    {
        printf("%i ", tab2[i]);
    }
    printf("\n");
    for (int i=0;i<k;i++)
    {
        printf("%i ", tab3[i]);
    }

    return 0;
}
