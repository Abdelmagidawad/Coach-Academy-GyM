
Problem Name : E. Is it rated?

Link of problem  : https://codeforces.com/gym/353332/problem/E

Solve Problem :

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    vector<int>vec;
    bool k = false;
    for (int i = 0; i < n; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        if (n1 != n2) {
            cout << "rated";
            return 0;
        }
        else if(n1==n2)
            vec.push_back(n1);
    }
    for (int i = 0; i < vec.size(); i++)
    {
 
        if ((i+1)<vec.size()) {
            if (vec[i] < vec[i + 1])
            {
                k = true;
                break;
            }
        }
    }
    if (k == false)cout << "maybe";
    else cout << "unrated";
 
}
 