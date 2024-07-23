#include<bits/stdc++.h>
using namespace std;


//^Abstract class
class parent {
  public:
  virtual void showData() = 0;  //^pure virtual function
  virtual void getData() =0;
  void sum() {}
};

//^concrete class
class child:public parent {
  public:
  //^function overriding
  void showData(){cout<<"This is child setData"<<endl;}
  void getData(){cout<<"This is child getData"<<endl;}
};

int main(){
  parent *p;
  child c;
  p = &c;
  p->showData();
  p->getData();
  return 0;
}