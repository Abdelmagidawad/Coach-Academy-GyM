Problem Name: B. Ordinary Numbers
Link of problem : https://codeforces.com/contest/1520/problem/B

Solve Problem:

#include <iostream>
using namespace std;
#define ll long long

int main()
{
	int t;  cin >> t;
	while (t--) {
		int n,x=0;  cin >> n;
		for (int i = 1; i <= n; i=i* 10 + 1) {
			for (int j = 1; j <= 9; j++) {
				if (i * j <= n)
					x++;
			}
		}
		cout << x << endl;
	}

	return 0;
}

