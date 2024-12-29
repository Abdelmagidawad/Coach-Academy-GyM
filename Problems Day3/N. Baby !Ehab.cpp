Problem Name: N. Baby !Ehab
Link of problem : https://codeforces.com/gym/102881/problem/N

Solve Problem:

#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<set>

using namespace std;

#define ll long long 

int main()
{
    freopen("equal.in", "r", stdin);
    int t;  cin >> t;
    while (t--) {
        set<int>s;
        int n;
        for (int i = 0; i < 3; i++) {
             cin >> n;
            s.insert(n);
        }
        (s.size()<3)?cout << "YES" << endl:cout << "NO" << endl;
    }
   
    return 0;
}
