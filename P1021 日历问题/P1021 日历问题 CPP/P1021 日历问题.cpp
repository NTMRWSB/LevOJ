#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n <= 0)
		{
			cout << "Error, wrong number.";
			break;
		}
		while (n)
		{
			if (n > 7)
				n -= 7;
			if (n <= 7)
				break;
		}
		cout << n << endl;
	}
	return 0;
}