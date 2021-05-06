#include<iostream>

using namespace std;

long long C(long long n, long long m)
{
	long long ans = 1;
	for (long long i = n, j = 1; i >= (n - m + 1); i--, j++)
	{
		ans = ans * i / j;
	}
	return ans;
}

long long Traversal(long long);

int main()
{
	long long n;
	while (cin >> n)
	{
		if (n == 1)
		{
			cout << 1 << endl;
		}
		else
		{
			cout << Traversal(n) << endl;
		}
	}
	return 0;
}

long long Traversal(long long n)
{
	for (long long i = 3;; i++)
		for (long long j = 1; j < i; j++)
		{
			if (C(i - 1, j) == n)
			{
				return (i - 1) * i / 2 + j + 1;
			}
		}
}