#include <stdio.h>
#include <stdlib.h>

void zamien (char *tekst)
{
    char *koniec, temp;
    while (*tekst != ' ' && *tekst!=' ' && *tekst != 0)
    {
        tekst++;
    }
    tekst++;
    koniec = tekst;
    while (*koniec != ' '&& *koniec!=' ' && *koniec != 0)
    {
        koniec++;
    }
    koniec--;
    int i = ((koniec - tekst)+1) / 2;
    for (;i>0;i--)
    {
        temp = *tekst;
        *tekst = *koniec;
        *koniec = temp;
        tekst ++;
        koniec--;
    }
}

char tekst[] = "Kurs programowania C";
int main()
{
    zamien(tekst);
    printf("%s\n", tekst);
    return 0;
}
