#include <stdio.h>

void funkcja1(int tab1[], int tab2[], double tab3[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        tab3[i] = tab1[i];
    }
    for(i = i; i < 2*n; i++)
    {
        tab3[i] = tab2[i-n];
    }
}

void funkcja2(int tab1[], int tab2[], double tab3[], int n)
{
    int i, j = 0;
    for(i = 0; i < 2*n; i = i + 2)
    {
        tab3[i] = tab1[j];
        j++;
    }
    j = 0;
    for(i = 1; i < 2*n; i = i + 2)
    {
        tab3[i] = tab2[j];
        j++;
    }
}

int main()
{
    int i, n = 4;
    int tab1[4] = {1,2,3,4};
    int tab2[4] = {5,6,7,8};
    double tab3[8];
    funkcja1(tab1, tab2, tab3, n);
    printf("tab1 a: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", tab1[i]);
    }
    printf("\n");
    printf("tab2 a: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", tab2[i]);
    }
    printf("\n");
    printf("tab3 a: ");
    for(i = 0; i < 2*n; i++)
    {
        printf("%f ", tab3[i]);
    }
    printf("\n");
    printf("\n");
    funkcja2(tab1, tab2, tab3, n);
    printf("tab1 b: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", tab1[i]);
    }
    printf("\n");
    printf("tab2 b: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", tab2[i]);
    }
    printf("\n");
    printf("tab3 b: ");
    for(i = 0; i < 2*n; i++)
    {
        printf("%f ", tab3[i]);
    }
    return 0;
}
