#include<iostream>

using namespace std;

int main()
{
	int n;
	long long a[44], b[44];
	a[1] = 3; b[1] = 0;
	a[2] = 6; b[2] = 3;
	for (n = 3; n < 41; n++)
	{
		a[n] = 2 * b[n - 1] + a[n - 1];
		b[n] = a[n - 1] + b[n - 1];
	}
	while (cin >> n)
		cout << a[n] + b[n] << endl;
	return 0;
}