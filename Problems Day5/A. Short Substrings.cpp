
Problem Name :  A. Short Substrings

Link of problem : https://codeforces.com/problemset/problem/1367/A

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << s[0];
        for (int i = 1; i < s.size(); i += 2) {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}