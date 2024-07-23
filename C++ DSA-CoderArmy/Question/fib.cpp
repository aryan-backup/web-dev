//? WAP to find the fibonacci number

#include<iostream>
using namespace std;

int main(){
  int n,first=0, second=1, next;

  cout<<"Enter n: ";
  cin>>n;

  for(int i=0; i<=n; i++){
    cout<<first<<" ";
    next=first+second;
    first=second;
    second=next;
  }

  cout<<endl;

  return 0;
}