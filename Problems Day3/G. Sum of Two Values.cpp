Problem Name: G. Sum of Two Values
Link of problem : https://codeforces.com/problemset/gymProblem/102961/G

Solve Problem:

#include <iostream>
#include<map>

using namespace std;

int main()
{
  int n,x;   cin>>n>>x;
  int arr[n];
  map<int,int>mapz;
  for(int i=0;i<n;i++) cin>>arr[i];
  
  for(int i=0;i<n;i++){
      if(mapz.count(x-arr[i])){
          cout<<mapz[x-arr[i]]<<" "<<i+1<<endl;
          return 0;
      }
      mapz[arr[i]]=i+1;
  }
  cout<<-1<<endl;
 
    return 0;
}
