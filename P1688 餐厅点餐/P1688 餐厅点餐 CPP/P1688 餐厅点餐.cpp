#include<iostream>

using namespace std;

int main()
{
	int t;
	int a, b, c, d, e;
	int max, min;
    int count = 0;
    int s1, s2, s3, s4, s5;  //From 0 to the end,traverse.
    int sum;
    int sum1, sum2, sum3, sum4; //Sun at each stage
	cin >> t;
    while (t--)
	{
		cin >> a >> b >> c >> d >> e;
		int* aMenu = new int[a]();
		for (int i = 0; i < a; i++)
			cin >> aMenu[i];

		int* bMenu = new int[b]();
		for (int i = 0; i < b; i++)
			cin >> bMenu[i];

		int* cMenu = new int[c]();
		for (int i = 0; i < c; i++)
			cin >> cMenu[i];

		int* dMenu = new int[d]();
		for (int i = 0; i < d; i++)
			cin >> dMenu[i];

		int* eMenu = new int[e]();
		for (int i = 0; i < e; i++)
			cin >> eMenu[i];
		cin >> min >> max;
        for (s4 = 0; s4 < d; s4++)
        {
            for (int i = s4; i < d; i++)
            {
                if (i == s4)
                    sum1 = dMenu[s4];
                else
                    sum1 = dMenu[s4] + dMenu[i];
                for (s5 = 0; s5 < e; s5++)
                {
                    for (int j = s5; j < e; j++)
                    {
                        if (j == s5)
                            sum2 = eMenu[s5];
                        else
                            sum2 = eMenu[s5] + eMenu[j];
                        for (s2 = 0; s2 < b; s2++)//Good mood
                            for (s1 = 0; s1 < a; s1++)
                            {
                                sum3 = bMenu[s2] + aMenu[s1];
                                sum = sum1 + sum2 + sum3;
                                if (sum >= min && sum <= max)
                                    count++;
                            }
                        for (s3 = 0; s3 < c; s3++)//Bad mood
                        {
                            sum4 = cMenu[s3];
                            int sum = sum1 + sum2 + sum4;
                            if (sum >= min && sum <= max)
                                count++;
                        }
                    }
                }
            }
        }
        cout << count << endl;
        count = 0;
        delete[] aMenu;
        delete[] bMenu;
        delete[] cMenu;
        delete[] dMenu;
        delete[] eMenu;
	}
	return 0;
}