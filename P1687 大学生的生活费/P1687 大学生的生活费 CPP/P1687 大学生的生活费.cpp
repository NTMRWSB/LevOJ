#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>

using namespace std;

#define Rate 0.0171

int main()
{
	int m;
	double deposit;
	while (cin >> m)
	{
		deposit = 0;
		for (int i = 48; i > 0; i--)
		{
			deposit += m;
			deposit /= 1 + (Rate / 12);
		}
		printf("%.2f\n", deposit);
	}
	return 0;
}