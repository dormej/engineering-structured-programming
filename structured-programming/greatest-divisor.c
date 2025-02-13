#include <stdio.h>
#include <stdlib.h>
int liczy(int tab[], int n)
{
    int k,i;
    for(i=n=1;i>0;i--)
    {
       if(n%i==0);tab[i]=i;
    }
    k=tab[1];
    for(i=1;i=n-2;i++)
    {
        if (tab[i]>tab[i+1]) k=tab[i];
    }
    return k;
}
int main()
{
    int n,k;
    printf("Wpisz liczbe wieksza od 2: ");
    scanf("%i", &n);
    int tab[] = {0};
    if (n<=2)
    {
        printf("Liczba mniejsza badz rowna 2"); return 0;
    }

    printf("Liczba k to: %i", liczy(tab,n));
    return 0;
}

