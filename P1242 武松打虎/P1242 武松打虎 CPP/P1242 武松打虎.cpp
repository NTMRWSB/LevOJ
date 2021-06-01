#include<iostream>
#include <algorithm>

using namespace std;

int a[50001];

int main()
{
	int n, t, i;
	while (cin >> n >> t)
	{
		for (i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		for (i = 0; i < n && t>0; i++)
			t -= a[i];
		if (t < 0)
			i--;
		cout << i << endl;
	}
	return 0;
}