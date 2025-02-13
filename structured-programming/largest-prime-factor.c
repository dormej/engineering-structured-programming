/*
#include <stdio.h>
int czy_pierwsza(int n)
{
    if(n<2) return 0;
    for (int i=2; i*i<=n; i++)
        if(n%i==0) return 0;
    return 1;
}
int main()
{
    int n;
    printf("Insert n: ");
    scanf("%i", &n);
    if (czy_pierwsza(n))
        printf("Liczba %i jest pierwsza", n);
    else
        printf("Liczba %i nie jest pierwsza", n);
    return 0;
}

#include<stdio.h>
 int main()
 {
   int i, prime,upper,lower, n;
   printf(" ENTER THE LOWER LIMIT : ");
   scanf("%d", &lower);
   printf("\n ENTER THE UPPER LIMIT : ");
   scanf("%d", &upper);
   printf("\n PRIME NUMBERS LIST IS : ");
   for(n=lower+1; n<upper; n++)
   {
     prime = 1;
     for(i=2; i<n/2; i++)
       if(n%i == 0)
       {
         prime = 0;
         break;
       }
     if(prime)
       printf("\t%d", n);
   }
   return 0;
 }
*/

#include <stdio.h>
#include <math.h>

int LargestPrime(int TheNum)
{
	int FactorCount = 0;

	for (int i=TheNum; i>=2; --i)
	{

		for (int j=2; j<sqrt(i) + 1; ++j)
		{
			if (i % j == 0)
			{
		            ++FactorCount;
                            break;
			}
		}
		if (FactorCount == 0)
		{
			return i;
			break;
		}

		FactorCount = 0;
	}
	return 0;
}
int main()
{
    int TheNum;
        printf("Enter TheNum: ");
        scanf("%i", &TheNum);

    printf("Result: %i", LargestPrime(TheNum));

    return 0;
}
