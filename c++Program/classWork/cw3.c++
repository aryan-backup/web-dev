#include<iostream>
using namespace std;

class myClass{
  private:
  int a,b;
  public:
  myClass(int x, int y){
    a=x;
    b=y;
    cout<<"\na = "<<a<<" b = "<<b;
  }

  myClass(int k){
    a=k;
    cout<<"\na = "<<a<<endl;
  }

  myClass(){
  }
};

int main(){
  myClass v1(10,20), v2, v3(25,45),v4(40);
  return 0;
}

