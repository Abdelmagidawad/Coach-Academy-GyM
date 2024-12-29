Problem Name: A. Era
Link of problem : https://codeforces.com/contest/1604/problem/A

Solve Problem:

#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long 


int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
      int *  arr=new int[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        int c=0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > (i + c + 1))
                c += (arr[i] - (i + c + 1));
        }
        cout << c<< endl;
    }
    

    return 0;
}

