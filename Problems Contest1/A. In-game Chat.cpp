
Problem Name :  A. In-game Chat

Link of problem : https://codeforces.com/problemset/problem/1411/A

Solve Problem :

#include <iostream>

using namespace std;

int main() {
   int t;
   cin>>t;
    while (t--){
        string x;
        int n,cnt = 0;
        cin>>n>>x;
        for (int i=n-1;i>=0;--i){
            if (x[i] == ')'){
                ++cnt;
            }
            else {
                break;
            }
        }
        int rem = x.size() - cnt;
        if (cnt > rem){
            puts("Yes");
        }
        else {
            puts("No");
        }
    }
    return 0;
}
