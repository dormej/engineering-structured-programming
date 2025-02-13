
#include <stdio.h>
#include <stdlib.h>

void foo ()
{
    static int liczbaWywolan=0;
    liczbaWywolan++;
    printf("%d\n",liczbaWywolan);
}
int main ()
{
    foo();
    foo();
    foo();
    foo();
    foo();
    return 0;

}
