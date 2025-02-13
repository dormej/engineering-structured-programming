#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void przepisuje(int n, int tab1[], int tab2[])
{
    printf("\n\ntab1: ");
    for (int i=0; i<n; i++)
    {
        tab1[i];
        printf("%i ", tab1[i]);
    }
    printf("\nPo zmianie tab2: ");
    for (int i=0; i<n; i++)
    {
        tab2[i] = tab1[i];
        printf("%i ", tab2[i]);
    }
}
void odwrotnie(int n, int tab1[], int tab2[])
{
    printf("\n\nOdwrotna kolejnsc:\n ");
    for (int i=1; i<n+1; i++)
    {
        tab2[i] = tab1[n-i];
        printf("%i ", tab2[i]);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%i", &n);
    srand(time(NULL));
    int tab1[n], tab2[n];
    printf("tab1: ");
    for (int i=0; i<n ; i++)
    {
        tab1[i] = rand()%11;
        printf("%i ", tab1[i]);
    }
    printf("\n");
    printf("tab2: ");
    for (int i=0; i<n ; i++)
    {
        tab2[i] = rand()%11;
        printf("%i ", tab2[i]);
    }
    przepisuje(n,tab1,tab2);
    odwrotnie(n,tab1,tab2);

    return 0;
}
