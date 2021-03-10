#include<iostream>

using namespace std;

int main()
{
	int n;
	int(*a)[1001] = new int[1001][1001];
	//initialize array
	for (int i = 0; i < 1001; i++)
		for (int j = 0; j < 1001; j++)
			a[i][j] = 0;

	while (cin >> n)
	{
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= i; j++)
				cin >> a[i][j];

		for (int i = n - 1; i >= 1; i--)
			for (int j = 1; j <= i; j++)
			{
				if (a[i + 1][j] < a[i + 1][j + 1])
					a[i][j] += a[i + 1][j];
				else
					a[i][j] += a[i + 1][j + 1];
			}
		cout << a[1][1] << endl;
		//reset array
		for (int i = 0; i < 1001; i++)
			for (int j = 0; j < 1001; j++)
				a[i][j] = 0;
	}
	return 0;
}