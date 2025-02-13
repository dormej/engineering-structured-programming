# include <stdio.h>


unsigned int sequence (unsigned int n)
{
    if (n==0 || n==1) return 1;
    else return sequence(n-1) + 2*sequence(n-2) + 3;

}
unsigned int fibonacci(unsigned int n)
{
    if (n==0) return 0;
    if (n==1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}
unsigned int sequence1(unsigned int n)
{
    if (n==0 || n==1) return 1;
    if (n%2 == 0) return sequence1(n-1) + n;
    else return sequence1(n-1) *n;
}

int main()
{
    unsigned int n;
    printf("Insert n: ");
    scanf("%i", &n);
    printf("%i element of sequence a(n-1)+2*a(n-2)+3 is %i\n", n, sequence(n));
    printf("%i element of Fibonacci sequence is %i\n", n, fibonacci(n));
    printf("%i element of sequence1 is %i", n,sequence1(n));
    return 0;
}
