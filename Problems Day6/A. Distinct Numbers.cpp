
Problem Name : A. Distinct Numbers

Link of problem  : https://codeforces.com/gym/102961/problem/A

Solve Problem :

#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int * arr=new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int c = 0;
    for(int i = 0; i < n; i++) {
        if (arr[i] != arr[i + 1])
            c++;
    }
    cout << c << endl;
  return 0;
}