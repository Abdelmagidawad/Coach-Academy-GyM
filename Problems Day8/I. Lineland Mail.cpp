
Problem Name  :  I. Lineland Mail

Link of problem  :  https://codeforces.com/gym/352012/problem/I

Solve Problem  :

#include<iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int *arr=new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << abs(arr[0] - arr[1])<<" "<<abs(arr[n-1] - arr[0])<<endl;
        }
        else if (i == n - 1) {
            cout << abs(arr[n - 1] - arr[n - 2]) << " " << abs(arr[n - 1] - arr[0]) << endl;
        }
        else {
            cout << min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1])) << " ";
            cout << max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1])) << endl;
        }
    }
  
  return 0;
}