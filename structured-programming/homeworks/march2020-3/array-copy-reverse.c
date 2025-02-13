#include <stdio.h>

void funkcja1(int tab1[], int tab2[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        tab2[i] = tab1[i];
}

void funkcja2(int tab1[], int tab2[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        tab2[i] = tab1[n-1-i];
}

int main()
{
    int i;
    int n = 7;
    int tab1[7] = {1,2,3,4,5,6,7};
    int tab2[7];
    printf("tab1: ");
    for(i = 0; i < n; i++)
        {
            printf("%d ", tab1[i]);
        }
    printf("\ntab2 a: ");
    funkcja1(tab1, tab2, n);
    for(i = 0; i < n; i++)
    {
        printf("%d ", tab2[i]);
    }
    printf("\ntab2 b: ");
    funkcja2(tab1, tab2, n);
    for(i = 0; i < n; i++)
    {
        printf("%d ", tab2[i]);
    }
    return 0;
}
