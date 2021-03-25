#include<iostream>
#include<string>

using namespace std;

bool isSubsequence(string, string);

int main()
{
	string s, t;
	while (cin >> s >> t)
	{
        if (isSubsequence(s, t))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
	}
    return 0;
}

bool isSubsequence(string s, string t)
{
    int n = s.length();
    int m = t.length();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s[i] == t[j])
            i++;
        j++;
    }
    return i == n;
}