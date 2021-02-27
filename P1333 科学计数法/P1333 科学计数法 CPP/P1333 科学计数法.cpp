#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int index = 0, tempIndex = 0;
		double baseNumber = 1, tempBaseNumber;
		tempBaseNumber = a;
		while (tempBaseNumber >= 10)
		{
			tempBaseNumber /= 10;
			tempIndex++;
		}
		while (b)
		{
			if (b % 2)
			{
				baseNumber *= tempBaseNumber;
				index += tempIndex;
			}
			while (baseNumber >= 10)
			{
				baseNumber /= 10;
				index++;
			}
			tempBaseNumber *= tempBaseNumber;
			tempIndex *= 2;
			while (tempBaseNumber >= 10)
			{
				tempBaseNumber /= 10;
				tempIndex++;
			}
			b /= 2;
		}
		cout << fixed << setprecision(3) << baseNumber << "*10^" << index << endl;
	}
	return 0;
}