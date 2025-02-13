#include <stdio.h>

unsigned int function1 (unsigned int n, unsigned int m)
{
    if (m==0) return n;
    if (n==0) return m;
    else return n - m + function1(n-1,m) + function1(n,m-1);
}

int main()
{
    unsigned int n, m;
    printf("Insert n: ");
    scanf("%i", &n);
    printf("Insert m: ");
    scanf("%i", &m);
    printf("f(%i,%i) = %i", n,m,function1(n,m));

    return 0;
}
