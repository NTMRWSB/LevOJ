#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, k;
	while (cin >> n >> k)
	{
		bool* bulb = new bool[n + 1]();
		for (int i = 1; i <= k; i++)
		{
			for (int j = i; j <= n; j += i)
			{
				bulb[j] = !bulb[j];
			}
		}
		string ans;
		for (int i = 1; i <= n; i++)
		{
			if (!bulb[i])
			{
				ans += to_string(i);
				ans += " ";
			}
		}
		ans.pop_back();
		cout << ans << endl;
		delete[] bulb;
	}
	return 0;
}