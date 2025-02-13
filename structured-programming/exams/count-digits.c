#include <stdio.h>
#include <stdlib.h>

void foo(char *tab)
{
	int ile = 0;
	int i = 0;
	while(tab[i] != '\0')
	{
		if(tab[i] >= '0' && tab[i] <= '9')
		{
			ile++;
		}
    i++;
    }
    printf("Ilosc cyfr w napisie: %i", ile);
}

int main()
{
    char napis[32];

    printf("Podaj napis: ");
    gets(napis);

    foo(napis);

    return 0;
}
