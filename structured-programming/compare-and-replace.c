#include <stdio.h>

void funkcja1(int n,int tab1[],int tab2[],int tab3[])
{
    for (int i=0;i<n;i++)
    {
        if ((tab2[i] >= tab1[i]) && (tab2[i] >= tab3[i]))
            tab1[i]=tab2[i];
        if ((tab3[i] > tab1[i]) && (tab3[i] > tab2[i]))
            tab1[i]=tab3[i];
        printf("%i ", tab1[i]);
    }
}

int main()
{
    int tab1[]={9,1,7,2};
    int tab2[]={5,6,7,8};
    int tab3[]={4,10,11,12};
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
    printf("\na)\n ");
    funkcja1(n,tab1,tab2,tab3);

    return 0;
}
