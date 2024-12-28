Problem Name: B. Squares and Cubes
Link of problem : https://codeforces.com/problemset/problem/1619/B

Solve Problem:

#include<iostream>
#include<string>
#include<cmath>

using namespace std;
#define ll long long 

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        //n=10
        // 3+2-1=5-1=4
        cout << int(sqrt(n)) + int(cbrt(n)) - int(sqrt(cbrt(n))) << endl;
    }

   return 0;
}
