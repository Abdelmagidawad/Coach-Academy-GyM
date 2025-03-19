
Problem Name: A. Nearly Lucky Number

Link of problem : https://codeforces.com/problemset/problem/110/A

Solve Problem:

#include <iostream>

using namespace std;
typedef long long ll;

int main() {
   ll n,cnt = 0;
   cin>>n;
    while (n > 0){
        int res = n % 10;
        if (res == 4 || res == 7){
            ++cnt;
        }
        n /= 10;
    }
    if (cnt == 7 || cnt == 4){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<< endl;
    }
    return 0;
}
