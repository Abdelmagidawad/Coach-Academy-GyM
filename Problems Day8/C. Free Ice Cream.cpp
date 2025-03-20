
Problem Name  :  C. Free Ice Cream

Link of problem  :  https://codeforces.com/gym/352012/problem/C

Solve Problem  :

#include<iostream>
using namespace std;


int main()
{
    //C. Free Ice Cream
    long long n, x;
    cin >> n >> x;
    long long coun = 0;

    while (n--) {
        char c;
        long long num;
        cin >> c >> num;
        if (c == '+') {
            x += num;
        }
        else {
            if (num > x)
                coun++;
            else
                x -= num;
        }
    }
    cout << x << " " << coun << endl;

  return 0;
}