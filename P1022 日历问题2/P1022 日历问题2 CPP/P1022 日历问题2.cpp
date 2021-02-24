#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	int yyyy = 2007,
		mm = 10,
		dd = 10;
	while (cin >> n)
	{
		if (n < 1)
		{
			cout << "Error, wrong number." << endl;
			break;
		}
		for (int i = 0; i < n; i++)
		{
			dd++;
			if ((yyyy % 4 == 0 && mm == 2) && dd == 30)
			{
				dd = 1;
				mm++;
			}
			else if ((yyyy % 4 != 0 && mm == 2) && dd == 29)
			{
				dd = 1;
				mm++;
			}
			else if ((mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10) && dd == 32)
			{
				dd = 1;
				mm++;
			}
			else if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd == 31)
			{
				dd = 1;
				mm++;
			}
			else if (mm == 12 && dd == 32)
			{
				yyyy++;
				mm = 1;
				dd = 1;
			}
		}
		cout << yyyy << "-"
			<< setw(2) << setfill('0') << mm << "-"
			<< setw(2) << setfill('0') << dd << endl;
		//reset
		yyyy = 2007;
		mm = 10;
		dd = 10;
	}
	return 0;
}