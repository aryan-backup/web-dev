//?? Print n’th Fibonacci number.

#include<iostream>
using namespace std;

int main(){
  int nth, first=0,second=1,next;

  cout<<"Enter n: ";
  cin>>nth;

  if(nth<0){
    cout<<"Enter valid nth position!"<<endl;
    return 1;
  }

  if(nth == 0){
    cout<<first<<endl;
    return 1;
  }else if(nth==1){
    cout<<second<<endl;
    return 1; 
  }

  for(int i=2; i<=nth; i++){
    next = first+second;
    first = second;
    second=next;
  }

  cout<<next<<endl;

  return 0;
}