Problem Name: A. Divan and a Store
Link of problem : https://codeforces.com/contest/1614/problem/A

Solve Problem:

#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
using namespace std;
#define ll long long 

int main()
{
    int t; cin >> t;
    while (t--) { 
        int n, l, r, k;  cin >> n >> l >> r >> k;

        int* arr = new int[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n);
        int c=0;
        for (int i = 0; i < n; i++) {

            if (arr[i] < l) continue;
            if (arr[i] > r || arr[i] > k) break;
            c++;
            k -= arr[i];
        }
        cout << c << endl;
    }
        
   return 0;
}
