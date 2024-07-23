#include<iostream>
using namespace std;

class myclass{
  private:
  int a,b;
  public:
  void setdata(int x, int y){
    a=x;
    b=y;
  }void getdata(){
    cout<<"a= "<<a<<" b= "<<b;
  }

  operator int(){
    return (a+b);
  }
};

int main(){
  int i;
  myclass c1;
  c1.setdata(5,6);
  i=c1;
  c1.getdata();
  cout<<"\nthe value of i is "<<i<<endl;
  return 0;
}