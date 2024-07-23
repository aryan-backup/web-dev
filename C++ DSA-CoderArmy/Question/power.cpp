//? WAP to find the power of a number 
#include<iostream>
using namespace std;

int main(){
  int n,p;
  cout<<"Enter number: ";
  cin>>n;
  cout<<"Enter power: ";
  cin>>p;

  int result =n;

  for(int i=1; i<p; i++){
    result *= n;
  }

  cout<<result<<endl;
  return 0;
}
