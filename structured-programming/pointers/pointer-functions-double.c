#include <stdio.h>
#include <stdlib.h>


int foo (int (*fun1) (int arg1) , int (*fun2) (int arg2), unsigned int n) //pobieram kolejno wartosci z wyslanych adresow
{
    for (int i=0;i<=n;i++)
    {
        if (fun1(i)!=fun2(i)) return 0;
    }
    return 1;
}
int f1(int n)
{
    return n;
}
int f2(int n)
{
    return n*n*n;
}
int f3(int n)
{
    return (n*n+2*n)/(n+2);
}
int main()
{
    printf("%d\n", foo(&f1,&f2,6)); // wysylam adresy do foo
    printf("%d\n", foo(&f1,&f3,10));
    printf("%d\n", foo(&f3,&f2,20));

}
