
Problem Name  :  D. Helpful Maths

Link of problem  :  https://codeforces.com/gym/352012/problem/D

Solve Problem  :

#include<iostream>
using namespace std;

int main()
{
    
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+' && i != s.size() - 1)
            cout << s[i] << '+';

        if (i == s.size() - 1)
            cout << s[i];
    }

  return 0;
}