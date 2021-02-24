#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    unsigned long count(int n);
    int n;
    unsigned long m;
    while (scanf("%d", &n) != EOF)
    {
        m = count(n);
        printf("%lu\n", m);
    }
    return 0;
}
unsigned long count(int n)
{
    unsigned long f;
    if (n == 1)
        f = 1;
    else if (n == 2)
        f = 2;
    else
        f = count(n - 1) + count(n - 2);
    return(f);
}