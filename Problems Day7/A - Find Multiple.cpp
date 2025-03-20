
Problem Name : A - Find Multiple

Link of problem  : https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en

Solve Problem :

#include<iostream> 
using namespace std;

int main()
{
    int a, b, c,res;
    cin >> a >> b >> c;
    res = c;
    while (res < a) {
        res += res;
    }
    if (res <= b)cout << res << endl;
    else
        cout << -1 << endl;
  return 0;
}
