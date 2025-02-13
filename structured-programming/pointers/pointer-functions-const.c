#include <stdio.h>
#include <stdlib.h>

void foo (int const *a, int *b)
{
    *b=*a;
}
void foo1 (int const *a, int * const b)
{
    *b=*a;
}

int main()
{
    int x=4, y=8;
    foo(&x,&y);
    printf("%d %d\n",x,y);
    foo1(&x,&y);
    printf("%d %d",x,y);
    return 0;
}

