#include <stdio.h>
#include <stdlib.h>

struct student{
	char imie[32];
	char nazwisko[32];
	char kierunek[32];
	char nr_legitymacji[15];
};

void foo(struct student *wsk)
{
	char imie_2[32];
	char nazwisko_2[32];
	char kierunek_2[32];
	char nr_legitymacji_2[15];

	printf("Podaj imie: ");
	gets(imie_2);
	printf("Podaj nazwisko: ");
	gets(nazwisko_2);
	printf("Podaj kierunek: ");
	gets(kierunek_2);
	printf("Podaj numer legitymacji: ");
	gets(nr_legitymacji_2);

	strcpy(wsk->imie, imie_2);
	strcpy(wsk->nazwisko, nazwisko_2);
	strcpy(wsk->kierunek, kierunek_2);
	strcpy(wsk->nr_legitymacji, nr_legitymacji_2);
}

void wczytaj()
{
	struct student studenci[5];
	int i;
	for(i = 0; i<5; i++)
	{
		foo(&studenci[i]);
	}
	printf("Dane 5 studentow: ");
	for(i = 0; i<5; i++)
	{
		wyswietl(studenci[i]);
	}
}
void wyswietl(struct student s1)
{
	printf("\n\n");
	printf("Imie: %s\n", s1.imie);
	printf("Nazwisko: %s\n", s1.nazwisko);
	printf("Kierunek: %s\n", s1.kierunek);
	printf("Numer legitymacji: %s\n", s1.nr_legitymacji);
}

int main()
{
	wczytaj();
}
