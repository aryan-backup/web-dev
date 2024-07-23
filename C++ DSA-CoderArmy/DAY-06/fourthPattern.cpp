// Fourth Pattern:

// F G H I J K  
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K

#include<bits/stdc++.h>
using namespace std;

int main(){
  for(int i=1; i<=5; i++){
    for(char j='F'; j<='K'; j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }

  return 0;
}