#include <stdio.h>
#include <stdlib.h>

void fun(int n, int *w)
{
    *w=n;
}
int main()
{
    int n1,n2;
    printf("Podaj n1:");
    scanf("%i",&n1);
    printf("Podaj n2:");
    scanf("%i",&n2);
    fun(n1,&n2);
    printf("%d",n2);
    return 0;
}
