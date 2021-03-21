#include<iostream>

using namespace std;

int ConversionOfNumberSystem(int x, int B);

int main()
{
	int t, p, q, r;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> p >> q >> r;
		int ans = 0;
		for (int j = 2; j <= 16; j++)
			if (ConversionOfNumberSystem(p, j) * ConversionOfNumberSystem(q, j) == ConversionOfNumberSystem(r, j))
			{
				ans = j;
				break;
			}
		cout << ans << endl;
		ans = 0;
	}
	return 0;
}

int ConversionOfNumberSystem(int x, int B)
{
	int value = 1, num = 0;
	while (x != 0)
	{
		if ((x % 10) >= B)
			return 114514;
		num += ((x % 10) * value);
		value *= B;
		x /= 10;
	}
	return num;
}