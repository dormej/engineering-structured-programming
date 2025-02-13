#include <stdio.h>
#include <stdlib.h>
void usun(unsigned int n, char *tab1, char *tab2)
{
	int ile = 0;
	int i = 0, j = 0;
	while(tab1[i] != '\0')
	{
		if((tab1[i] == 'a' || tab1[i] == 'A') && (ile < n))
		{
			ile++;
		}
		else
		{
			tab2[j] = tab1[i];
			j++;
		}
		i++;
	}
	tab2[j] = '\0';
}
int main()
{
	char napis[32];
	char *napis2 = malloc(sizeof(char));
	printf("Podaj napis: ");
	gets(napis);
	printf("Napis wczytany: %s", napis);
	usun(2, napis, napis2);
	printf("\nNapis2 po usunieciu: %s", napis2);

	return 0;
}
