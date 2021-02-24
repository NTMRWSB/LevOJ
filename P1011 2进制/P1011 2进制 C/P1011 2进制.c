#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int bin(int n)
{
	if (n < 2)
		return n;
	else
		return bin(n / 2) * 10 + n % 2;
}

int main()
{
	int i, t;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		int a;
		scanf("%d", &a);
		printf("%d\n", bin(a));
	}
}