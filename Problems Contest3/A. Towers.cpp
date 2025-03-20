
Problem Name  :  A. Towers

Link of problem  :  https://codeforces.com/problemset/problem/37/A

Solve Problem  :

#include<iostream>

using namespace std;

const int x = 5e5 + 5;
int fr[x];

int main()
{
    int n;
    cin >> n;
    while (n--) {
        int y;
        cin >> y;
        fr[y]++;
    }

    int sum = 0, mx = 1;
    for (int i = 0; i <= 1000; i++) {
        if (fr[i] != 0) {
            sum++;
        }
        if (fr[i] > mx)
            mx = fr[i];
    }
    cout << mx << " " << sum << endl;
        
    return 0;
}
