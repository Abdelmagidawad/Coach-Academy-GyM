
Problem Name : A. Vanya and Cubes
 
Link of problem : https://codeforces.com/problemset/problem/492/A

Solve Problem : 

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0, coun = 0;
    for (int i = 1; i <= n; i++) {
        x += i;
        n -= x;
        if (n >= 0)
            coun++;
    }
    cout << coun << endl;
    return 0;
}