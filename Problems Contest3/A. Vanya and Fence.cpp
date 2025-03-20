
Problem Name  :  A. Vanya and Fence

Link of problem  :  https://codeforces.com/problemset/problem/677/A

Solve Problem  :

#include <iostream>
 
using namespace std;
 
int main()
{
     int n, h,sum=0;
    cin >> n >> h;
    while (n--) {
        int i;
        cin >> i;
        if (i <= h)
            sum++;
        else if (i > h)
            sum += 2;
    }
    cout << sum << endl;
 
   
    return 0;
}