#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n = 5;
    float *element;

    element = (float*)calloc(n,sizeof(float));

    printf("\n");
    for (i=0; i<n; i++)
    {
        printf("Number %d: ", i+1);
        scanf("%f", element+i);
    }
    for (i=1;i<n;i++)
    {
        if(*element<*(element+i))
            *element=*(element+i);
    }
    printf("\nLiczba : %2.f", *element);

    return 0;
}
