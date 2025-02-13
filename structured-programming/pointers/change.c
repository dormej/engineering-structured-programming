#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a)
{
    *a = 10;
    printf("%d\n",*a);
}
int main()
{
    int liczba = 1;

    zamiana(&liczba);
    printf("%d\n", liczba);
    return 0;
}
