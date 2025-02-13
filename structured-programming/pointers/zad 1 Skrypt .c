//Napisz funkcjê otrzymuj¹c¹ jako argumenty wskaŸniki do dwóch
//zmiennych typu int, która zwraca jako wartoœæ mniejsz¹ z
//liczb wskazywanych przez argumenty.

// lokalna kopia zmiennej

#include <stdio.h>
#include <stdlib.h>

int funkcja (int *a, int *b ) // wartosc przekazana pod adresem z main
{
        return (*a<*b)?*a:*b; // symbol * - praca na wartosciach pod danym adresie
}
int *foo (int *a, int*b) // wyrzucamy adres wiec int *
{
        return (*a<*b)?a:b; // zwracamy adres , Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch
//zmiennych typu int, która zwraca jako wartość wskaźnik na zmienną
//przechowującą mniejszą z liczb wskazywanych przez argumenty.
}
void zamiana(int *a, int *b)
{
    if (*a > *b)
    {
        int pom = *a;
        *a = *b;
        *b = pom;
    }
}

//Napisz funkcję, której argumentami
//są dwa wskaźniki do stałych typu int, zaś zwracaną wartością
//jest suma wartości zmiennych wskazywanych przez argumenty.
int suma(const int *a,const int *b) // const - stała,nie możemy wartosci zmodyfikować
{
    return *a + *b; // const int == int const
}
void przepisuje(int n, int *w) //6 Napisz funkcję, której argumentami
//są n typu int oraz w wskaźnik
//do int, która przepisuje wartość n do zmiennej wskazywanej przez w
{
    *w = n; // wartosc została zmodyfikowana
}
int *rezerwa(int k)
{
    return malloc(k*sizeof(int));//double // Napisz funkcjê, która dostaje
//jako argument dodatni¹ liczbê ca³kowit¹
//n, rezerwuje w pamiêci blok n zmiennych typu double i zwraca jako
//wartoœæ wskaŸnik do pocz¹tku zarezerwowanego bloku pamiêci.

}
int* rezerwacja () //rezerwacja zmiennej typu double, double : int
{
    return malloc(sizeof(int));
}
double foo2 (double (*fun) (int arg), int a)
{
    return fun(a);
}
double funkcja2(int x1)
{
    return x1*x1;
}
int main()
{
    int n=3;
    int x=7, y=5;
    printf("x=%i y=%i", x,y);
    printf("\nMniejsza: %i\n",funkcja(&x,&y)); // przekazujemy adresy
    zamiana(&x,&y);
    printf("Zamiana x= %i, y=%i",x,y);
    printf("\n%p", foo(&x,&y)); // !! %p ! flaga musi być w systemie szesnastkowym!!
    printf("\nSuma: %d", suma(&x,&y));
    przepisuje(x,&y); // przekazanie wartosci, przekazanie adresu
    printf("\n%d %d",x,y);
    printf("%p",rezerwa(5)); // p - odpowiedni znacznik wartosci zwrocony przez funkcje

    printf("\n%p", rezerwacja());
    int x1=4;
    printf("\n%1f", foo2((&funkcja2),x1));

    return 0;
}
