//?  WAP to check input number is armstrong or not

#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int num,count=0,rem,new_num=0; 

  cout<<"Enter a number: ";
  cin>>num;

  count = log10(num)+1;

  //! cout<<count;

  int temp_num = num;;
  while(temp_num > 0){
    rem = temp_num%10;
    new_num += pow(rem,count);
    //! cout<<new_num<<endl;
    temp_num /= 10;
  }

  //! cout<<new_num;
  if(new_num == num){
    cout<<"The number "<<num<<" is armstrong number";
  }else{
    cout<<"The number "<<num<<" is not armstrong number";
  }

  return 0;
}