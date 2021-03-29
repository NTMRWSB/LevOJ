#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int haabDate, haabYear;
		string haabMonth;
		int data;
		cin >> haabDate >> haabMonth >> haabYear;
		if (haabMonth == "pop")
			data = 0 * 20;
		else if (haabMonth == "no")
			data = 1 * 20;
		else if (haabMonth == "zip")
			data = 2 * 20;
		else if (haabMonth == "zotz")
			data = 3 * 20;
		else if (haabMonth == "tzec")
			data = 4 * 20;
		else if (haabMonth == "xul")
			data = 5 * 20;
		else if (haabMonth == "yoxkin")
			data = 6 * 20;
		else if (haabMonth == "mol")
			data = 7 * 20;
		else if (haabMonth == "chen")
			data = 8 * 20;
		else if (haabMonth == "yax")
			data = 9 * 20;
		else if (haabMonth == "zac")
			data = 10 * 20;
		else if (haabMonth == "ceh")
			data = 11 * 20;
		else if (haabMonth == "mac")
			data = 12 * 20;
		else if (haabMonth == "kankin")
			data = 13 * 20;
		else if (haabMonth == "muan")
			data = 14 * 20;
		else if (haabMonth == "pax")
			data = 15 * 20;
		else if (haabMonth == "koyab")
			data = 16 * 20;
		else if (haabMonth == "cumhu")
			data = 17 * 20;
		else
		{
			cout << "Error";
			system("pause");
			return 0;
		}
		data += haabYear * 365 + haabDate;
		cout << data % 13 + 1 << " ";
		int t = data % 20;
		switch (t)
		{
		case 0:		cout << "imix"; break;
		case 1:		cout << "ik"; break;
		case 2:		cout << "akbal"; break;
		case 3:		cout << "kan"; break;
		case 4:		cout << "chicchan"; break;
		case 5:		cout << "cimi"; break;
		case 6:		cout << "manik"; break;
		case 7:		cout << "lamat"; break;
		case 8:		cout << "muluk"; break;
		case 9:		cout << "ok"; break;
		case 10:	cout << "chuen"; break;
		case 11:	cout << "eb"; break;
		case 12:	cout << "ben"; break;
		case 13:	cout << "ix"; break;
		case 14:	cout << "mem"; break;
		case 15:	cout << "cib"; break;
		case 16:	cout << "caban"; break;
		case 17:	cout << "eznab"; break;
		case 18:	cout << "canac"; break;
		case 19:	cout << "ahau"; break;
		}
		cout << " " << data / 260 << endl;
	}
}