Problem Name: A. Mathematical Addition
Link of problem : https://codeforces.com/contest/1589/problem/A

Solve Problem:


#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        long long u,v; cin>>u>>v;
        long long g=__gcd(u,v);
        long long x,y;
        x= -(u*u)/g;   y=(v*v)/g;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
