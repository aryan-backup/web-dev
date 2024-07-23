#include<iostream>

using namespace std;

class myData{
  private:
  int a,b;

  public:
  void set_data(int x, int y){
    a=x;
    b=y;
  }

  void get_data(){
    cout<<"a = "<<a<<"\n b = "<<b;
  }
};

int main(){
  myData d1;
  d1.set_data(80,20);
  d1.get_data();
  return 0;
}