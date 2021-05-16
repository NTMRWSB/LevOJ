#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* bullion = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> bullion[i];
	}
	sort(bullion, bullion + n);
	cout << bullion[n - 1] << " " << bullion[0] << endl;
	delete[] bullion;
	return 0;
}