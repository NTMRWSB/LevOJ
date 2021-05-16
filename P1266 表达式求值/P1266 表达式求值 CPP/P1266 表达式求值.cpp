#include <iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    int sum = 0;
    string f;
    stack<int> addend;
    while (cin >> f)
    {
        for (int i = 0; i < f.size(); i++)
        {
            if (f[i] != '+')
            {
                addend.push(f[i] - '0');
            }
            else
            {
                int add = 0, temp = 1, size = addend.size();
                for (int i = 0; i < size; i++)
                {
                    add += addend.top() * temp;
                    temp *= 10;
                    addend.pop();
                }
                sum += add;
                stack<int>().swap(addend);
            }
        }
        int add = 0, temp = 1, size = addend.size();
        for (int i = 0; i < size; i++)
        {
            add += addend.top() * temp;
            temp *= 10;
            addend.pop();
        }
        sum += add;
        stack<int>().swap(addend);
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}