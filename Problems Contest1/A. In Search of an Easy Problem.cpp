
Problem Name :   A. In Search of an Easy Problem

Link of problem : https://codeforces.com/problemset/problem/1030/A

Solve Problem :

#include <iostream>

using namespace std;
typedef long long ll;

int main() {
    int n,sum = 0;
    cin>>n;
    for (int i=0;i<n;++i){
        int x;
        cin>>x;
        sum += x;
    }
    if (sum){
        cout<<"HARD"<<endl;
    }
    else {
        cout<<"EASY"<<endl;
    }
    return 0;
}

