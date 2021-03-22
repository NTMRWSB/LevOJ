#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<cstdlib>

using namespace std;

int AnyNumSysToDec(int, string);
void DecToAppointedNumSys(int, int);

int main()
{
	int p, r;
	string n;
	while (cin >> p >> r >> n)
	{
		if (p == 0)
			return 0;
		DecToAppointedNumSys(r, AnyNumSysToDec(p, n));
		cout << endl;
	}
	return 0;
}

int AnyNumSysToDec(int b, string n)
{
	int ans = 0, i = 0;
	while (n.size() != i)
	{
		ans *= b;
		if (n[i] >= '0' && n[i] <= '9')
			ans += n[i] - '0';
		else if (n[i] >= 'A' && n[i] <= 'Z')
			ans += n[i] - 55;
		else if (n[i] >= 'a' && n[i] <= 'z')
			ans += n[i] - 87;
		i++;
	}
	return ans;
}

void DecToAppointedNumSys(int b, int n)
{
	int m = 0, temp, s[1000];
	while (n != 0) 
	{
		temp = n % b;
		n = n / b;
		m++;
		s[m] = temp;
	}

	for (int k = m; k >= 1; k--)
	{
		if (s[k] >= 10)
			cout << (char)(s[k] + 55);
		else
			cout << s[k];
	}
}