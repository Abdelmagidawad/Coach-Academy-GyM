Problem Name: B. Minority
Link of problem : https://codeforces.com/contest/1633/problem/B

Solve Problem:

#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;


int main()
{
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        if (s.size() < 3) cout << 0 << endl;
        
        else {
            int x = 0, y = 0;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '0') x++; else y++;
            }
            if (x == y) cout << x - 1 << endl;  else cout << min(x, y) << endl;
        }
    }
    return 0;
}


