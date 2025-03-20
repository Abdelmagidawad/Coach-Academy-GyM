
Problem Name  :  F. Juicer

Link of problem  :  https://codeforces.com/gym/352012/problem/F

Solve Problem  :

#include<iostream>
using namespace std;



int main()
{

    long long n, b, d;
    cin >> n >> b >> d;
    long long sum = 0,ans=0;
    while (n--) {
        long long x;
        cin >> x;
        if (x <= b) {
            sum += x;
        }
        if (sum > d) {
            sum = 0;
            ans++;
        }
    }
    cout << ans << endl;
  return 0;
}
 