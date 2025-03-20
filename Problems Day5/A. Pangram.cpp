
Problem Name : A. Pangram
 
Link of problem : https://codeforces.com/problemset/problem/520/A

Solve Problem :

#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != s[i + 1])
            c++;
    }
    if (c==26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
return 0;
}

