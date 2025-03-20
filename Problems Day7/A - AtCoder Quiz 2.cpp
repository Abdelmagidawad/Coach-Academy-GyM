
Problem Name : A - AtCoder Quiz 2

Link of problem  : https://atcoder.jp/contests/abc219/tasks/abc219_a?lang=en

Solve Problem :

#include<iostream> 
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x >= 0 && x < 40)
        cout << 40 - x << endl;
    else if (x >= 40 && x < 70)
        cout << 70 - x << endl;
    else if (x >= 70 && x < 90)
        cout << 90 - x << endl;
    else
        cout << "expert" << endl;

  return 0;
}
   
