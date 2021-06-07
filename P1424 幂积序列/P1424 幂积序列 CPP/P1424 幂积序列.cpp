#include<iostream>

using namespace std;

int a[10000];

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int p, ans = 3;
        a[1] = 1;
        a[2] = 2;
        for (int i = 3; i <= n; i++)
        {
            p = i;
            while (p % 2 == 0)
            {
                p = p / 2;
            }
            while (p % 3 == 0)
            {
                p = p / 3;
            }
            if (p == 1)
            {
                a[ans] = i;
                ans++;
            }
        }
        ans = ans - 1;
        cout << ans << endl;
        cout << a[m] << endl;
    }
}