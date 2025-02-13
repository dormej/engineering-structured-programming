#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a, int *b)
{
    if (*a > *b)
    {
        int pom = *a;
        *a = *b;
        *b = pom;
    }
}
int main()
{
    int x,y;
    printf("Podaj x: ");
    scanf("%i", &x);
    printf("Podaj y: ");
    scanf("%i", &y);
    zamiana(&x,&y);
    printf("x=%i, y=%i",x,y);
    return 0;
}
