Problem Name: A. Collecting Coins
Link of problem : https://codeforces.com/problemset/problem/1294/A

Solve Problem:

#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int a, b, c, n;   cin >> a >> b >> c >> n;
        int y = max({ a,b,c });
        int x = a + b + c + n;
        ((x % 3 == 0 && x / 3 >= y) ? cout << "YES" << endl : cout << "NO" << endl);
    }
    return 0;
}