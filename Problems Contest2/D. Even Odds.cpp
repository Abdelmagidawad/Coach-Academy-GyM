
Problem Name : D. Even Odds

Link of problem  : https://codeforces.com/gym/353332/problem/D

Solve Problem :

#include<iostream> 
using namespace std;


int main()
{
    long long n, k;
    cin >> n >> k;
    long long m = (n+1) / 2;
    if (k > m) 
        cout << (k - m) * 2 << endl;
    else
        cout << (k * 2) - 1 << endl;
    
      return 0;
}