#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int numerator, denominator, n, temp;
	while (scanf("%d/%d%d", &numerator, &denominator, &n) != EOF)
	{
		cout << numerator / denominator << ".";
		temp = numerator % denominator;
		while (n && temp)
		{
			temp *= 10;
			cout << temp / denominator;
			temp %= denominator;
			n--;
		}
		cout << endl;
	}
	return 0;
}