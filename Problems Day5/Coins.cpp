

Problem Name : Coins

Link of problem : https://basecamp.eolymp.com/en/problems/2218

Solve Problem :

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n,c1=0,c2=0;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        if (x == 0)
            c1++;
        else
            c2++;

    }
    cout << min(c1, c2) << endl;

    return 0;
}