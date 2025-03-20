
Problem Name : A. Football

Link of problem  : https://codeforces.com/gym/353332/problem/A

Solve Problem :

#include<iostream> 
#include<algorithm>
#include<cmath>
#include<sstream>

#include<deque>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a,t1;
    cin >> a;
    int x = 1, y = 0;
    n--;
    while (n--) {
        string b;
        cin >> b;
        if (b != a) {
            y++;
            t1=b;
        }
        else {
            x++;
            
        }
   }
    if (y >= x)
        cout << t1 << endl;
    else
        cout << a << endl;
   
   
    return 0;
}

 