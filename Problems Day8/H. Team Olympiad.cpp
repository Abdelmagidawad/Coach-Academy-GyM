
Problem Name  :  H. Team Olympiad

Link of problem  :  https://codeforces.com/gym/352012/problem/H

Solve Problem  :

#include<iostream>

using namespace std;


int main()
{

    int n;
    cin >> n;
    int ar1[6000];
    int ar2[6000];
    int ar3[6000];
     
    int n1 = 0,n2=0,n3=0;

    for (int i = 1; i <= n; i++) {

        int t;
        cin >> t;
        if (t == 1) {
            ar1[n1] = i;
            n1++;
        }
        if (t == 2) {
            ar2[n2] = i;
            n2++;
        }
        if (t == 3) {
            ar3[n3] = i;
            n3++;
        }
    }
    cout << min({ n1,n2,n3 }) << endl;

    for (int i = 0; i <min({ n1,n2,n3 }); i++) {

        cout << ar1[i] << " " << ar2[i] << " " << ar3[i]<<endl;
    }
    
  return 0;
}