// Fourth Pattern:

//       A B C D
//       A B C
//       A B
//       A

#include<bits/stdc++.h>
using namespace std;

int main(){
  for(int i=0; i<4; i++){
    for(int j=0; j<4-i; j++){
      char res = 'A'+j;
      cout<<res<<" ";
    }
    cout<<endl;
  }

  return 0;
}