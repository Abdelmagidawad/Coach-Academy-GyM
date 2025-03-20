
Problem Name : A. Dawid and Bags of Candies

Link of problem  : https://codeforces.com/problemset/problem/1230/A

Solve Problem :

#include<iostream> 

using namespace std;


int main()
{
     //freopen("pails.in", "r", stdin);
     //freopen("pails.out", "w", stdout);
    int b1, b2, b3, b4;
    cin >> b1 >> b2 >> b3 >> b4;
    if (b1 + b2 == b3 + b4 || b1 + b3 == b2 + b4 || b1 + b4 == b2 + b3 || b1 + b2 + b3 == b4 || b1 + b3 + b4 == b2 || b1 + b2 + b4 == b3 || b2 + b3 + b4 == b1)cout << "yes";
    else cout << "no" << endl;
    return 0;
}