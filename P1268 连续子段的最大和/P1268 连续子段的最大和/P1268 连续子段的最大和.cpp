#include<iostream>

using namespace std;

int main()
{
	int n, a, count = 0, max = 0;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			count += a;
			if (count > max)
				max = count;
			if (count < 0)
				count = 0;
		}
		cout << max << endl;
	}
	return 0;
}