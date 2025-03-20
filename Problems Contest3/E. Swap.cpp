
Problem Name  :  E. Swap

Link of problem  :  https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E

Solve Problem  :

#include <iostream>

using namespace std;

void swapping(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << x << " " << y << endl;
}
int main()
{
	int x, y;
	cin >>x>> y;
	swapping(x, y);
	
	
	return 0;
}
 
