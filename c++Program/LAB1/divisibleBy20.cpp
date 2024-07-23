//? WAP to check input number is divisible by 20 or not

#include<iostream>

using namespace std;

int main(){
  int num;

  cout<<"Enter number: ";
  cin>>num;

  if(num%20==0){
    cout<<"The input number "<<num<<" is divisible by 20";
  }else{
    cout<<"The input number "<<num<<" is not divisible by 20";
  }

  return 0;
}

