Problem Name: C. Minimum Extraction
Link of problem : https://codeforces.com/contest/1607/problem/C

Solve Problem:

#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

void fasting()
{
	cin.tie(0);
	cin.sync_with_stdio(0);
}

int main()
{
	//fasting();
	int t; cin >> t;
	while (t--) {
		int n;  cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		
		sort(arr, arr + n);

		int mx = arr[0], c = 0;
		for (int i = 0; i < n; i++) {
			arr[i] -= c;
			mx = max(mx, arr[i]);
			c += arr[i];
		}
		cout << mx << endl;
	}

	return 0;
}
	



