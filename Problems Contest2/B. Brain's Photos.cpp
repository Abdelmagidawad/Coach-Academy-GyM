
Problem Name : B. Brain's Photos

Link of problem  : https://codeforces.com/gym/353332/problem/B

Solve Problem :

#include<iostream> 
#include<algorithm>
#include<cmath>
#include<sstream>


using namespace std;
//char arr[100 + 5][100 + 5];

int main()
{
    int n, m;
    cin >> n >> m;
    char* arr = new char[n * m];
    //arr[n][m];

    for (int i = 0; i < n*m; i++) {
        cin >> arr[i];
    }
    int x = 0, y = 0;
        for (int j = 0; j < n*m; j++) {
            if (arr[j] == 'W' || arr[j] == 'B' || arr[j] == 'G') {
                
                x ++;
            }
            else {
                y++;
            }
        }
    
    if (y>0)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
        
    return 0;
}