#include <stdio.h>
#include <stdlib.h>

void fun(int*a, int*b)
{
    if (*a<=*b)
        printf("n1=%i, n2=%i", *a,*b);
    else
        printf("n1=%i, n2=%i", *b,*a);
}
int main()
{
    int n1,n2;
    printf("Podaj n1:");
    scanf("%i",&n1);
    printf("Podaj n2:");
    scanf("%i",&n2);
    fun(&n1,&n2);
    return 0;
}
