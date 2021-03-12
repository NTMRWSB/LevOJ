#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<string> str;
    string temp;

    while (cin >> temp)
    {
        str.push_back(temp);
        if (cin.get() == '\n')
            break;
    }

    cout << str.size() << endl;

    return 0;
}