// Third Pattern:
     
//        10
//        10 11
//        10 11 12
//        10 11 12 13
//        10 11 12 13 14
//        10 11 12 13 14 15


#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter total number of rows: ";
  cin>>n;
  for( int i=0; i<=n; i++){
    for(int j=0; j<i; j++){
      int res = 10 + j;
      cout<<res<<" ";
    }
    cout<<endl;
  }

  return 0;
}