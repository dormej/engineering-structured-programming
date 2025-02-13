#include <stdio.h>

unsigned int euklides(unsigned int a, unsigned int b)
{
    while (a!=b)
    {
        if (a<b) b-=a;
        else a -=b;
    }
    return a;
}
int main()
{
    unsigned int a, b;
    printf("Insert a: ");
    scanf("%i", &a);
    printf("Insert b: ");
    scanf("%i", &b);
    printf("NWD %i, %i is %i", a,b,euklides(a,b));
    return 0;
}
