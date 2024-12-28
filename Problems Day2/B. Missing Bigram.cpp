Problem Name: B. Missing Bigram
Link of problem : https://codeforces.com/contest/1618/problem/B

Solve Problem:

#include<iostream>
#include <algorithm>
#include<string>

using namespace std;
#define ll long long 

int main()
{
    int t; cin >> t;
    while (t--) {       //ab bb ba aa ba
        int n; cin >> n;
        string s="";
        string* arr=new string[n - 2];
        for (int i = 0; i < n-2; i++) {
            cin >> arr[i];

            if (i == 0)   s += arr[i];

            else if (s[s.size() - 1] == arr[i][0])  s += arr[i][1];
            
            else       s += arr[i];

            
        }
        if (s.size() != n)
            s += 'a';
        cout << s << endl;

    }
   return 0;
}
