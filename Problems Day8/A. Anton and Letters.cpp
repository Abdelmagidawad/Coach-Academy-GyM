
Problem Name  :  A. Anton and Letters

Link of problem  :  https://codeforces.com/gym/352012/problem/A

Solve Problem  :

#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>
#include<iomanip>

#include<cstdlib>
#include<stdio.h>
using namespace std;
//int arr[2000+5];

int main()
{
    string x;
    getline(cin, x);
    sort(x.begin(), x.end());
    int c = 0;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] >= 'a' && x[i] <= 'z'&&x[i]!=x[i+1])
            c++;
    }
    cout << c << endl;
    return 0;
}
 