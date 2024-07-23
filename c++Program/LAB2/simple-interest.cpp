//? WAP to find simple interest by using default parameter.

#include<iostream>
using namespace std;

float simpleInterest(float principal=1000.00, float rate=10.00, float time = 3.00){
  return principal*time*rate/100;
}

int main(){
  float principal, rate, time, simple_interest;

  cout<<"Enter principal amount: ";
  cin>>principal;
  cout<<"Enter rate of interest: ";
  cin>>rate;
  cout<<"Enter time in year: ";
  cin>>time;

  simple_interest = simpleInterest(principal,rate,time);
  cout<<"Total SI = "<<simple_interest<<endl;

  simple_interest = simpleInterest();
  cout<<"Total SI = "<<simple_interest<<endl;

  return 0;

}