
Problem Name  :  J. Shaass and Oskols

Link of problem  : https://codeforces.com/gym/352012/problem/J 

Solve Problem  :

#include<iostream>
using namespace std;

int arr[100+5];

int main()
{

    int n; cin >> n;
    arr[n];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int s; cin >> s;
    while (s--) {
        int x, y;
        cin >> x >> y;

        arr[x + 1] += (arr[x] - y);
        arr[x - 1] += (y - 1);
        arr[x] = 0;
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << endl;
    }
  return 0;
}