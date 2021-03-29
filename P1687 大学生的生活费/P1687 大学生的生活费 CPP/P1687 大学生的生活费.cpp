#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>

using namespace std;

#define Rate 0.0171

int main()
{
	int m;
	double deposit[48];
	while (cin >> m)
	{
		deposit[47] = (double)m;
		for (int i = 47; i > 0; i--)
			deposit[i - 1] = ((double)m + deposit[i]) / (1 + Rate / 12);
		printf("%.2f\n", deposit[0]);
	}
	return 0;
}