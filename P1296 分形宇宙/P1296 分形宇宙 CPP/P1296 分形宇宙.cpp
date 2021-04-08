#include<iostream>
#include<cmath>

using namespace std;

char martix[3000][3000];

void fractal(int, int, int);

int main()
{
	int n;
	while (cin >> n)
	{
		int size = pow(3.0, n - 1);
		for (int i = 0; i <= size; i++)
			for (int j = 0; j <= size; j++)
				martix[i][j] = ' ';
		fractal(n, 1, 1);
		for (int i = 1; i <= size; i++)
		{
			for (int j = 1; j <= size; j++)
				cout << martix[i][j];
			cout << endl;
		}
		cout << "-" << endl;
	}
	return 0;
}

void fractal(int n, int x, int y)
{
	if (n == 1)
	{
		martix[x][y] = 'X';
	}
	else
	{
		int size = pow(3.0, n - 2);
		fractal(n - 1, x, y);
		fractal(n - 1, x, y + 2 * size);
		fractal(n - 1, x + size, y + size); 
		fractal(n - 1, x + 2 * size, y);
		fractal(n - 1, x + 2 * size, y + 2 * size);
	}
	return;
}