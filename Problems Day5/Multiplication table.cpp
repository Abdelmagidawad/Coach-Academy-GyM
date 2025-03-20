
Problem Name : Multiplication table
 
Link of problem : https://basecamp.eolymp.com/en/problems/8545

Solve Problem:

#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 9) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int x = i * j;
                printf("%2d", x);
              
                cout <<" ";
            }

            cout << endl;
        }
    }
    return 0;
}