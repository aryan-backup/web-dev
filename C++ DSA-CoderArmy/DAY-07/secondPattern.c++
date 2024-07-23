// Second Pattern:

//     A
//     A B
//     A B C
//     A B C D
//     A B C D E

#include<bits/stdc++.h>
using namespace std;

int main(){
  for(int i=0; i<=5; i++){
    for(int j=0; j<i; j++){
    char res = 'A' +j;
      cout<<res<<" ";
    }
    cout<<endl;
  }

  return 0;
}