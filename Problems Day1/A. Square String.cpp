Problem Name: A. Square String?
Link of problem : https://codeforces.com/contest/1619/problem/A

Solve Problem:

#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>
 
#include<cstdlib>
#include<stdio.h>
using namespace std;
#define ll long long 
 
int main()
{
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        string x = "",  y = "";
        if (s.size() % 2 != 0) {
            cout << "NO" << endl;
        }
        else {
            for (int i = 0; i < s.size() / 2; i++) {
                x += s[i];
            }
            for (int i = s.size() / 2; i < s.size(); i++) {
                y += s[i];
            }
            if (x == y)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    /* int t; cin >> t;
    while (t--) {
        string s; cin >> s;

        (s.substr(0, s.size() / 2) == s.substr(s.size() / 2)) ? cout << "YES" << endl : cout << "NO" << endl;
            
    }*/
   return 0;
}
 