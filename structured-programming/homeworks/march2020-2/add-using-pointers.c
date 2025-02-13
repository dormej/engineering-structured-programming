#include <stdio.h>
#include <stdlib.h>


int fun(const int *a,const int *b)
{
    return *a+*b;
}

int main()
{
    int n1,n2;
    printf("Podaj n1:");
    scanf("%i",&n1);
    printf("Podaj n2:");
    scanf("%i",&n2);
    printf("%d",fun(&n1,&n2));
    return 0;
}
