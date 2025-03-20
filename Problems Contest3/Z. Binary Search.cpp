
Problem Name  :  Z. Binary Search

Link of problem  :  https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

Solve Problem  :


#include<iostream>
#include <algorithm>

using namespace std;

int main()
{      
    int n, q;
    cin >> n >> q;
  int *arr=new int [n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        
    }
    sort(arr, arr + n);
    while (q--) {
        int x;
        cin >> x;
        bool y = false;
        int l =0, h = n - 1;
 
            while (l <= h) {
                int m = (l + h) / 2;
                if (arr[m] == x)
                    y = true;
 
                if (arr[m] > x)
                    h = m - 1;
                else
                    l = m + 1;
            }
        
            if (y)
                cout << "found" << endl;
            else
                cout << "not found" << endl;
        
    }
    return 0;
}