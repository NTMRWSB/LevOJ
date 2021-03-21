#include<iostream>
#include<string>
#include<stack>
#include<cstdio>
#include<cstring>
#include<cstdlib>

using namespace std;

int AnyNumSysToDec(int, string);
string DecToAppointedNumSys(int, int);

int main()
{
	int p, r;
	string n;
	while (cin >> p >> r >> n)
	{
		if (p == 0)
			return 0;
		cout << DecToAppointedNumSys(r, p) << endl;
	}
	return 0;
}

int AnyNumSysToDec(int b, string n)
{
	int ans = 0;

	return ans;
}

string DecToAppointedNumSys(int b, int n)
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
			s[k] += 55;
		else
			s[k] += 48;
	}
	string ans(&s[0], &s[m]);
	return ans;
}