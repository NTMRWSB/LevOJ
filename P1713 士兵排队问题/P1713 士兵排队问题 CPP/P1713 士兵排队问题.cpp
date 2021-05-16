#include<iostream>
#include<algorithm>

using namespace std;

int x[10500], y[10500];

int main()
{
    int n, x1, y1, ans = 0;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }
        sort(x, x + n);
        sort(y, y + n);
        for (int i = 0; i < n; i++)
        {
            x[i] -= i;
        }
        sort(x, x + n);
        x1 = x[(n - 1) / 2];
        y1 = y[(n - 1) / 2];
        for (int i = 0; i < n; i++)
        {
            ans += abs(x[i] - x1);
            ans += abs(y[i] - y1);
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}