
Problem Name :  B. Fair Numbers

Link of problem : https://codeforces.com/problemset/problem/1411/B

Solve Problem :

#include <iostream>

using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        for (ll i = n;;++i){
            bool ok = 1;
            ll num = i;
            while (num > 0){
                int res = num % 10;
               if ((res % 10) != 0){
                   if (i % res != 0){
                       ok = 0;
                       break;
                   }
               }
                num /= 10;
            }
            if (ok){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
