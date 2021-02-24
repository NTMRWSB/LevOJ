#include<iostream>
using namespace std;

int greatestCommonDivisor(int, int);

int main()
{
	int a, b, c, d;
	while (cin >> a >> b >> c >> d)
	{
		int numerator, denominator, temp;
		numerator = a * d + b * c;
		denominator = b * d;
		temp = greatestCommonDivisor(numerator, denominator);
		cout << numerator / temp
			<< '/'
			<< denominator / temp
			<< endl;
	}
	return 0;
}

int greatestCommonDivisor(int a, int b)
{
	int temp;
	if (a < b)
	{
		a ^= b ^= a ^= b;
	}
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}