#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>

using namespace std;

const int L = 100005;
int a[L];

string factorial(int);

int main()
{
    int n;
    while (cin >> n)
        cout << factorial(n) << endl;
    return 0;
}

string factorial(int n)
{
    string ans;
    if (n == 0)
        return "1";
    fill(a, a + L, 0);
    int s = 0, m = n;
    while (m)
    {
        a[++s] = m % 10;
        m /= 10;
    }
    for (int i = n - 1; i >= 2; i--)
    {
        int w = 0;
        for (int j = 1; j <= s; j++)
        {
            a[j] = a[j] * i + w;
            w = a[j] / 10;
            a[j] = a[j] % 10;
        }
        while (w)
        {
            a[++s] = w % 10;
            w /= 10;
        }
    }
    while (!a[s])
        s--;
    while (s >= 1)
        ans += a[s--] + '0';
    return ans;
}