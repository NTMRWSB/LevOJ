#include<iostream>

using namespace std;

int AmicableNumber(int);

int main()
{
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		if (AmicableNumber(a) == b && AmicableNumber(b) == a)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}

int AmicableNumber(int n)
{
	int ans = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			ans += i;
	return ans;
}