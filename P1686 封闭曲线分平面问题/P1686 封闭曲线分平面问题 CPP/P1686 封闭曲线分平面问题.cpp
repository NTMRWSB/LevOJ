#include<iostream>

using namespace std;

long long a[10005];

int main()
{
	int n;
	while (cin >> n)
	{
		a[0] = 0;
		a[1] = 2;
		for (int i = 2; i <= n; i++)
			a[i] = a[i - 1] + 2 * (i - 1);
		cout << a[n] << endl;
	}
	return 0;
}