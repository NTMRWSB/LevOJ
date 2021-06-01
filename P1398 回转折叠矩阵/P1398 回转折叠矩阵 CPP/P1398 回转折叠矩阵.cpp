#include<iostream>

using namespace std;

int a[505][505];

int main()
{
	int n;
	while (cin >> n)
	{
		int m = 1, j = 0, k = 0;
		a[0][0] = m;
		for (int i = 1; i < n; i++)
		{
			if (i % 2 == 1)
			{
				k = i;
				for (j = 0; j <= i; j++)
				{
					a[j][k] = ++m;
				}
				j--;
				for (k = k - 1; k >= 0; k--)
				{
					a[j][k] = ++m;
				}
			}
			else
			{
				j = i;
				for (k = 0; k <= i; k++)
				{
					a[j][k] = ++m;
				}
				k--;
				for (j = j - 1; j >= 0; j--)
				{
					a[j][k] = ++m;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}