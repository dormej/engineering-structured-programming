#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int iloczyn (unsigned int n, unsigned int m, int tab[n][m])
{
    int i,j;
    int il_1 = 1;
    int il_2 = 1;
    for (i=0;i<m;i++)
    {
        il_1 = il_1 * (tab[i][i]);
    }
    for (j=0;j<n;j++)
    {
        il_2 = il_2 * (tab[n-1-j][j]);
    }
    int ilocz = il_1 * il_2;

    return il_1*il_2;
}

int main()
{
    unsigned int n,m;

    printf("Podaj ilosc kolumn: ");
    scanf("%i", &n);
    printf("Podaj ilosc wierszy: ");
    scanf("%i", &m);
    printf("Tablica o wym %i x %i\n", n,m);

    int tab[n][m];
    srand(time(NULL));

    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            tab[j][i] = rand()%11;
            printf("%i ", tab[j][i]);
        }
        printf("\n");
    }
    printf("Iloczyn przekatnych %d", iloczyn(n,m,tab));

    return 0;
}
