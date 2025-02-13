#include <stdio.h>

int main()
{
    int liczba1, liczba2, liczba3;
    printf("Liczba1: ");
    scanf("%i", &liczba1);
    printf("Liczba2: ");
    scanf("%i", &liczba2);
    printf("Liczba3: ");
    scanf("%i", &liczba3);
    printf("SA %3f", (double) (liczba1+liczba2+liczba3)/3);

    return 0;
}
