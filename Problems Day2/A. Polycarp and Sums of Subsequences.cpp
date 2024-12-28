Problem Name: A. Polycarp and Sums of Subsequences
Link of problem : https://codeforces.com/contest/1618/problem/A?fbclid=IwAR0L7pjrm-jVuQq_FxnvXGTdEifYEoPWkCDetdXkPY3gPlo-6Mg-XAtLRAE

Solve Problem:

#include<iostream>

using namespace std;
#define ll long long 
 
int main()
{
    int t; cin >> t;
    while (t--) {
        ll* arr = new ll[7];
        for(int i=0;i<7;i++) cin >> arr[i];
        cout << arr[0] << " " << arr[1] << " " << arr[6] - (arr[0] + arr[1]) << endl;
    }
   return 0;
}