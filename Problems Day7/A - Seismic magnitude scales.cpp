
Problem Name : A - Seismic magnitude scales

Link of problem  : https://atcoder.jp/contests/abc221/tasks/abc221_a?lang=en

Solve Problem :

#include<iostream> 
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x =abs( a - b);
    int y = pow(32, x);
    cout << y<< endl;
  return 0;
}
 