#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	long long a;
	while(cin >> a)
	{
		a %= 86400000;
		a /= 1000;
		int h = a / 3600, m = (a % 3600) / 60, s = a % 60;
		cout << setw(2) << setfill('0') << h << ":"
			<< setw(2) << setfill('0') << m << ":"
			<< setw(2) << setfill('0') << s << endl;
	}
	return 0;
}