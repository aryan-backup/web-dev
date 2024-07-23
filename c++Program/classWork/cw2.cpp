//? WAP to find area of rectangle by defining member function outside the class 

#include<iostream>
using namespace std;

class area{
  private:
  int area;

  public:
  void get_data(int, int);
  void set_data();
};



void area:: get_data(int l, int b){
  area = l*b;
};

void area:: set_data(){
  cout<<area;
}

int main(){
  int l,b;
  cout<<"Enter length and breadth: ";
  cin>>l>>b;

  area ar;
  ar.get_data(l,b);
  ar.set_data();

  return 0;
}