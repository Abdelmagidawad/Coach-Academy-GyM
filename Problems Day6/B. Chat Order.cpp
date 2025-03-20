
Problem Name : B. Chat Order

Link of problem  : https://codeforces.com/problemset/problem/637/B

Solve Problem :

#include<iostream>
#include<map>

using namespace std;

#define ll long long 

int main()
{
    int n;
    cin >> n;
    string* arr = new string[n];
    map<string, string>mp;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;

        arr[i] = name;

        mp.insert({ name,name });
    }
    
    for (int i = (n-1); i >= 0; i--) {
        if (mp.count(arr[i]) == 0)
            continue;
        else {
            mp.erase(arr[i]);
            cout << arr[i] << endl;
        }
            
    }
   
   return 0;
}