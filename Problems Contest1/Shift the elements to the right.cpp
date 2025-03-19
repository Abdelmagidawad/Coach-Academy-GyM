
Problem Name : Shift the elements to the right

Link of problem : https://basecamp.eolymp.com/en/problems/922

Solve Problem :

#include <iostream>
using namespace std;
int a[100 + 1];

int main()
{
    int n;
    cin >> n;
   
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
  
    cout << a[n - 1]<<" ";

    for (int i = 0; i < n - 1; i++)
        cout << a[i]<<" ";
    return 0;
}
