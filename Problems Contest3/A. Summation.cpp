
Problem Name  :  A. Summation

Link of problem  :  https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

Solve Problem  :

#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
  long long *arr=new long long[n];
    long long sum = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << abs(sum) << endl;
   
    return 0;
}