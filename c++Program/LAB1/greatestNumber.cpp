//? Write a program to find greatest number among three numbers

#include<iostream>

using namespace std;

int main(){
  int num1,num2,num3;

  cout<<"Enter num1 ";
  cin>>num1;
  cout<<"Enter num2 ";
  cin>>num2;
  cout<<"Enter num3 ";
  cin>>num3;

if(num1==num2 && num2==num3){
  cout<<"All numbers are equal";
}
else if(num1>=num2){
    if(num1>=num3){
      cout<<"num1 is greatest i.e "<<num1;
    }else{
      cout<<"num3 is greatest i.e "<<num3;
    }
  }else if(num2>=num1){
    if(num2>=num3){
      cout<<"num2 is greatest i.e "<<num2;
    }else{
      cout<<"num3 is greatest i.e "<<num3;
    }
  }

return 0;
}
