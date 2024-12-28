Problem Name: A. Div. 7
Link of problem : https://codeforces.com/contest/1633/problem/A

Solve Problem:

#include <iostream>

using namespace std;


int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n % 7 == 0)    //377 
            cout << n << endl;
        
        else {
            int num = (n / 10) * 10;
            int ans = 0;
            for (int i = 1; i <= 9; i++) {
                ans=num +i;
                if (ans % 7 == 0) {
                    cout << ans << endl;
                    break;
                }
            }

        }
    }
    return 0;
}
