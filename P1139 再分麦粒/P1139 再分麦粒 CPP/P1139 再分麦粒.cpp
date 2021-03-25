#include<iostream>

using namespace std;

int main()
{
	int a[505], l, n;
	while (cin >> n)
	{
		l = 1;
		a[0] = 1;
		for (int i = 1; i < 504; i++)
			a[i] = 0;
		while (n--)
		{
			for (int i = 0; i < l; i++)
				a[i] *= 2;
			for (int i = 0; i < l; i++)
			{
				a[i + 1] += a[i] / 10;
				a[i] %= 10;
			}
			for ( ; a[l] && l < 501; l++)
			{
				a[l + 1] += a[l] / 10;
				a[l] %= 10;
			}
		}
		a[0]--;
		for (l = 499; l >= 0; l--)
			cout << a[l];
		cout << endl;
	}
	return 0;
}