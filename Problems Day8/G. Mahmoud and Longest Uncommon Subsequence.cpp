
Problem Name  :  G. Mahmoud and Longest Uncommon Subsequence

Link of problem  :  https://codeforces.com/gym/352012/problem/G

Solve Problem  :

#include<iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    
    if (a == b)
        cout << -1 << endl;
    else
        cout << max(a.size(), b.size()) << endl;
  return 0;
}

 