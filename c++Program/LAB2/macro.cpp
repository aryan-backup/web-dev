//? WAP to implement macro function.
#include<iostream>
using namespace std;

#define SUM(a,b) a+b


int main(){
  int a,b,sum;
  cout<<"Enter any two number(integer): ";
  cin>>a>>b;

  sum = SUM(a,b);

  cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;

  return 0;
}