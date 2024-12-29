Problem Name: A. Anti Light's Cell Guessing
Link of problem : https://codeforces.com/contest/1610/problem/A

Solve Problem:

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
#define ll long long 

int main()
{
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        if (n > m) swap(n, m);
        if (m < 2) cout << 0 << endl;
        else if (n < 2) cout << 1 << endl;
        else cout << 2 << endl;


    }

    return 0;
}


