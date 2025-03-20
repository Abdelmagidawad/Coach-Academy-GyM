
Problem Name :  A - Calc

Link of problem : https://atcoder.jp/contests/abc172/tasks/abc172_a?lang=en

Solve Problem :

#include<iostream>

using namespace std;

int main()
{
    int a,x=0;
    cin >> a;
    for (int i = 1; i <= 3; i++) {
        x += pow(a, i);
    }
    cout << x << endl;
    return 0;
}