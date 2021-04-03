#include<iostream>

using namespace std;

int allocatedSolution(int, int);

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		cout << allocatedSolution(m, n) << endl;
	}
	return 0;
}

int allocatedSolution(int m, int n)
{
	if (m == 0 || n == 1)
		return 1;
	if (m < n)
		return allocatedSolution(m, m);
	else
		return allocatedSolution(m, n - 1) + allocatedSolution(m - n, n);
}