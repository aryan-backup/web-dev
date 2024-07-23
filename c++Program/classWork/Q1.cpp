// ? WAP to find area of rectangle using inline function method

#include<iostream>

using namespace std;
inline int area(int l, int b){
  return l*b;
}

int main(){
  int length, breadth;

  cout<<"Enter length: ";
  cin>>length;

  cout<<"Enter breadth: ";
  cin>>breadth;

  cout<<area(length,breadth);

  return 0;
}