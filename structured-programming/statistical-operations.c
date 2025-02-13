#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float fun(unsigned int n, int tab[])
{
    float sum = 0;
    for (int i=0;i<n;i++)
    {
        sum +=tab[i];
    }
    return sum/n;
}
float fun2(unsigned int n, int tab[])
{
    float sum2 = 0;
    for (int i=0;i<n;i++)
    {
        sum2 +=tab[i]*tab[i];
    }
    return sum2;
}
float fun3(unsigned int n, int tab[])
{
    float product = 1;
    for (int i=0;i<n;i++)
    {
        product *= tab[i];
    }
    return pow(product,1./n);
}
int main()
{
    srand(time(NULL));
    unsigned int n;
    printf("Insert n: ");
    scanf("%i",&n);
    int tab[n];
    for (int i=0;i<n;i++)
    {
        tab[i]=rand()%11+1;
        printf("%i ", tab[i]);
    }

    printf("\nArithmetic average = %.2f\n", fun(n,tab));
    printf("Sum of squares: %.2f\n", fun2(n,tab));
    printf("Geometric average = %.2f", fun3(n,tab));
    return 0;
}
