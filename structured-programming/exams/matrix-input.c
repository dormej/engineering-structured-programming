# include <stdio.h>
# include <stdlib.h>
void wczytaj(unsigned int n, unsigned int m, int tab[n][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Podaj element [%i][%i]", i, j);
            scanf("%d",&tab[i][j]);
        }
    }
}
int main()
{
    unsigned int n = 3;
    unsigned int m = 4;
    int tab[n][m];
    wczytaj(n,m,tab);

    return 0;

}
