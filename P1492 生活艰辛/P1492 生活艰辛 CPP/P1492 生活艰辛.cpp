/*
д��¥��д�ּ䣬
д�ּ������Ա��
������Աд����
���ó��򻻷�Ǯ��
*/

#include <iostream>
//#include<�����ӻ��ں�ͷ��.jpg>

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