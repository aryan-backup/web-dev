//?? Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;

  for(int i=1; i<=n; i++){
    if(i%4!=0) {
      continue;
    }
    cout<<i<<" ";
  }

  cout<<endl;
  return 0;
}