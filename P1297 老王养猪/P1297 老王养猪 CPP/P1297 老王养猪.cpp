#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1005;

struct pigData
{ 
    int initialWeight, decliningWeight;
}pig[N];

int f[N][N];

bool cmp(pigData x, pigData y)
{
    return x.decliningWeight > y.decliningWeight;
}

int main()
{
    int n, k, ans = 0;
    while (cin >> n >> k)
    {
        for (int i = 1; i <= n; i++)
            cin >> pig[i].initialWeight;
        for (int i = 1; i <= n; i++)
            cin >> pig[i].decliningWeight;
        sort(pig + 1, pig + n + 1, cmp);
        for (int i = 1; i <= n; i++)
            for (int j = k; j; j--)
                f[i][j] = max(f[i - 1][j], f[i - 1][j - 1] + pig[i].initialWeight - pig[i].decliningWeight * (j - 1));
        for (int i = 1; i <= k; i++)
            ans = max(ans, f[n][i]);
        cout << ans << endl;
    }
    return 0;
}