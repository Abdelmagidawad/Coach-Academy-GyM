Problem Name: B. Cover Points
Link of problem : https://codeforces.com/problemset/problem/1047/B

Solve Problem:


#include <iostream>
#include<cmath>
using namespace std;

int main()
{
int n;  cin>>n;
int mx=0;
while(n--){
    int a,b;
    cin>>a>>b;
    
    mx=max(mx,a+b);
}
cout<<mx<<endl;

    return 0;
}
