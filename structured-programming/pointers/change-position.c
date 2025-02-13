#include <stdio.h>
#include <stdlib.h>

void idzPrawoDol (int *x, int *y) // dereferencja, wyluskiwanie wskaznika,
                                //ktory powoduje to ze na podstawie adresu
                                //przekazanego do funkcji bedzie odczytana wartosc
{
    *x = *x+1;
    *y = *y-1;// nie pracujemy na adresach czy wartosciach funkcji pochodzacej z main
                // tylko to oznacza ze bierzemy wartosc zmiennej, ktora stoi pod
                    // konkretnym adresem i na tym pracujemy
}
int main()
{
    int x=20, y=15;
    idzPrawoDol(&x,&y); //do funkcji przekazujemy adresy
    printf("Aktualna pozycja: [%d, %d]", x,y); // po wykonaniu funkcji dostajemy
                                            // zmodyfikowane wartoci
    return 0;
}
