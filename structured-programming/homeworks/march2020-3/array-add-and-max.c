#include <stdio.h>

void funkcja1(int tab1[], int tab2[], int tab3[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        tab3[i] = tab1[i] + tab2[i];
    }
}

void funkcja2(int tab1[], int tab2[], int tab3[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(tab1[i] > tab2[i])
        {
            tab3[i] = tab1[i];
        }
        else
        {
            tab3[i] = tab2[i];
        }
    }
}
int main()
{
    int i, n = 4;
    int tab1[4] = {1,2,3,4};
    int tab2[4] = {5,6,7,8};
    int tab3[4] = {9,10,11,12};
    printf("tab1: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", tab1[i]);
    }
    printf("\n");
    printf("tab2: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", tab2[i]);
    }
    printf("\n");
    printf("tab3: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", tab3[i]);
    }
    printf("\n");
    printf("\n");
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
    for(i = 0; i < n; i++)
    {
        printf("%d ", tab3[i]);
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
    for(i = 0; i < n; i++)
    {
        printf("%d ", tab3[i]);
    }
    printf("\n");

    return 0;
}
