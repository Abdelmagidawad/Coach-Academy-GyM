
Problem Name : C - Comma
 
Link of problem : https://atcoder.jp/contests/abc195/tasks/abc195_c?lang=en

Solve Problem:

#include <iostream>

using namespace std;
typedef long long ll;
int main() {
    ll n,ans = 0;
    cin>>n;
    if (n>=1000) ans+=n-999;
    if (n>=1000000) ans+=n-999999;
    if (n>=1000000000) ans+=n-999999999;
    if (n>=1000000000000) ans+=n-999999999999;
    if (n>=1000000000000000) ans+=n-999999999999999;
    cout<<ans<<endl;
    return 0;
}
