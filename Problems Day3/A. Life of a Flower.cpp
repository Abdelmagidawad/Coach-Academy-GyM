
Problem Name: A. Life of a Flower
Link of problem : https://codeforces.com/contest/1591/problem/A

Solve Problem:

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define ll long long 

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int* arr = new int[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        int sum = 1;
        bool x = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0 && arr[i - 1] == 0) {  //1 0 1
                                                    //0 1 1
                x = true;
                break;
            }

            if (arr[i]==1&&arr[i-1]==1) sum += 5;
            else if (arr[i] == 1) sum += 1;
        }
        if (x) cout << -1 << endl;
        else
            cout << sum << endl;
    }               
    return 0;
}
