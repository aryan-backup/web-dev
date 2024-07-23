//? WAP to find sum of two number by using class and object

#include<iostream>

using namespace std;

class sum{
  private:
  int sum;

  public:
  void sum_data(int a, int b){
    sum = a+b;
  }

  void get_sum(){
    cout<<"The sum of two number a and b is "<<sum;
  }
};


int main(){
  sum Sum;

  Sum.sum_data(10,20);
  Sum.get_sum();

  return 0;
}


