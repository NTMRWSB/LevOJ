#include<iostream>

using namespace std;

int main()
{
	int k;
	long long n;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> n;
		for (int i = 1; n > i; i++)
		{
			n -= i;
		}
		cout << (n - 1) % 9 + 1 << endl;
	}
	return 0;
}