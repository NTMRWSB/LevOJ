#include <iostream>

using namespace std;

int count(int);

int main()
{
    int n;
    while (cin >> n)
    {
        cout << count(n) << endl;
    }
    return 0;
}

int count(int n)
{
    unsigned long f;
    if (n == 1)
        f = 1;
    else if (n == 2)
        f = 2;
    else
        f = count(n - 1) + count(n - 2);
    return f;
}