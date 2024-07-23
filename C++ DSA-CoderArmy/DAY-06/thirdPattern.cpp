  //  Third Pattern:
  
  //   1 8 27 64 125 216
  //   1 8 27 64 125 216
  //   1 8 27 64 125 216
  //   1 8 27 64 125 216
  //   1 8 27 64 125 216

  #include<bits/stdc++.h>
  using namespace std;

  int main(){
    for(int i=1; i<=5; i++){
      for(int j=1; j<=6; j++){
        cout<<pow(j,3)<<" ";
      }
      cout<<endl;
    }

    return 0;
  }