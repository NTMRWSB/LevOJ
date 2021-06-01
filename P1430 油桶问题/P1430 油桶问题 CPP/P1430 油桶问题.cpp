#include<iostream>

using namespace std;

int p(int, int, int*);

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		int* a = new int[n + 1];
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		if (p(n, m, a) == 0)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
		delete[] a;
	}
	return 0;
}

int p(int n, int m,int* a)
{
	if (n == 0 || m < 0)
		return 0;
	else
	{
		if (m == a[n])
			return 1;
		else
		{
			if (p(n - 1, m - a[n], a) == 1)
				return 1;
			if (p(n - 1, m, a) == 1)
				return 1;
		}
	}
	return 0;
}