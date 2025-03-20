
Problem Name  :  A. Team

Link of problem  :  https://codeforces.com/problemset/problem/231/A

Solve Problem  :

#include <iostream>

using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            counter++;
        }
    }
    cout << counter << endl;

    return 0;
}