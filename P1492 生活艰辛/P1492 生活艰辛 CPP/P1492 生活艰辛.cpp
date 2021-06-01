/*
写字楼里写字间，
写字间里程序员。
程序人员写程序，
又拿程序换房钱。
*/

#include <iostream>
//#include<好日子还在后头咧.jpg>

using namespace std;

int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        int netIncome, finalDeposite, year = 0, deposite = 0;
        netIncome = n - k;
        if (netIncome <= 0)
        {
            cout << "Impossible" << endl;
            continue;
        }
        else
        {
            finalDeposite = netIncome * 20;
            if (finalDeposite >= 200)
            {
                while (deposite < 200)
                {
                    deposite += netIncome;
                    year++;
                }
                cout << year << endl;
                continue;
            }
            else
            {
                cout << "Impossible" << endl;
                continue;
            }
        }
    }
	return 0;
}