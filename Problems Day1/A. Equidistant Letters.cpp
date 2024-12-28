Problem Name: A. Equidistant Letters
Link of problem : https://codeforces.com/contest/1626/problem/A

Solve Problem:

#include <iostream>
#include<algorithm>
using namespace std;


int main()
{
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        sort(s.begin(), s.end());
        cout << s << endl;
        
    }
    return 0;
}
 