//?? Print Sum of cube of first n natural number

#include<iostream>
using namespace std;

int main(){
  int n,sum=0;
  cout<<"Enter n: ";
  cin>>n;

  for(int i=1; i<=n; i++){
    sum += i*i*i;
  }

  cout<<sum<<endl;
  return 0;
}