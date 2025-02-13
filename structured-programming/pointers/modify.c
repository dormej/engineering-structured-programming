#include <stdio.h>
#include <stdlib.h>

int tab[] = {1,5,9};

void modyfikuj (int *tab)
{
    printf("%d\n", *(tab+2));
}

int main()
{
    modyfikuj(tab);

    return 0;
}
