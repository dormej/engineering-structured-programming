#include <stdio.h>

void funkcja1(int n,int tab1[],int tab2[],int tab3[])
{

    for (int i=0;i<n;i++)
    {
        tab3[i] = tab1[i]+tab2[i];
        printf("%i ", tab3[i]);
    }
}
void funkcja2(int n,int tab1[],int tab2[],int tab3[])
{
    for (int i=0;i<n;i++)
    {
        if (tab1[i] >= tab2[i])
            tab3[i] = tab1[i];
        else
            tab3[i] = tab2[i];
        printf("%i ",tab3[i]);
    }
}
void funkcja3(int n,int tab1[],int tab2[],int tab3[])
{
    printf("\nTab2: ");
    for (int i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
        printf("%i ", tab2[i]);
    }
    printf("\ntab1:");
    for (int i=0;i<n;i++)
    {
        tab1[i]=tab3[i];
        printf("%i ", tab1[i]);
    }
    printf("\n");
    for (int i=0;i<n;i++)
    {
        tab3[i]=tab2[i];
        printf("%i ", tab2[i]);
    }
}

int main()
{
    int tab1[]={9,1,7,2};
    int tab2[]={5,6,7,8};
    int tab3[]={9,10,11,12};
    int n = 4;

    printf("Tab1: ");
    for (int i=0;i<n;i++)
        printf("%i ", tab1[i]);
    printf("\nTab2: ");
    for (int i=0;i<n;i++)
        printf("%i ", tab2[i]);
    printf("\nTab3: ");
    for (int i=0;i<n;i++)
        printf("%i ", tab3[i]);
    printf("\n\nTab3 suma: ");
    funkcja1(n,tab1,tab2,tab3);

    printf("\nTab3 wieksza: ");
    funkcja2(n,tab1,tab2,tab3);

    printf("\nTablice po zmianie: ");
    funkcja3(n,tab1,tab2,tab3);
    return 0;
}
