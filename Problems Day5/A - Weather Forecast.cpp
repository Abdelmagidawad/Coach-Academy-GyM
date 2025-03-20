
Problem Name :  A - Weather Forecast

Link of problem : https://atcoder.jp/contests/abc218/tasks/abc218_a?lang=en

Solve Problem :

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
  
    if (s[n-1] == 'o')
        cout << "Yes"<<endl;
    else
        cout << "No"<<endl;
  
return 0;
}
