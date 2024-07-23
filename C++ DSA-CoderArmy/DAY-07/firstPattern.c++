
// First Pattern:
       
//      1
//      1 2
//      1 2 3
//      1 2 3 4
//      1 2 3 4 5 
//      1 2 3 4 5 6 
//      1 2 3 4 5 6

#include<bits/stdc++.h>
using namespace std;

int main(){
  for(int i=1; i<=7; i++){
    int limit = (i<=6)? i:6;
    for(int j=1; j<=limit; j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }

  return 0;
}
