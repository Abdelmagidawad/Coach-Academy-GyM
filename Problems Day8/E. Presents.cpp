
Problem Name  :  E. Presents

Link of problem  :  https://codeforces.com/gym/352012/problem/E

Solve Problem  :

#include<iostream>
using namespace std;

int arr[100+5];

int main()
{
    int n;
    cin >> n;
    arr[n];
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        arr[x] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
  return 0;
}