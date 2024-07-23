/* #include<bits/stdc++.h>
using namespace std;

class iphone15{
  public:
  void camera() {cout<<"This is old camera";}
  void speaker() {}
};
class iphone15proMax: public iphone15{
  public:
  //? Function overriding
  void camera() {cout<<"This is new AI camera";}

  //? Function hiding
  void speaker(int x) {cout<<x;}
};

int main(){
  iphone15proMax ip;
  ip.camera();
  ip.speaker(8);
} */

//? WAP to ask the length and breadth from user and calculate area of a rectangle in parent class and calculate area of rectangle divide by 2 in child class and access the value by the object of child class using early binding;

#include<bits/stdc++.h>
using namespace std;

class area{
  protected:
  int l, b, area;
  public:
  void areaRect(int x, int y) {
    l=x;
    b=y;

    area = l*b;
  }
};

class areaHalf: public area{
  protected:
  int l2, b2,area2;
  public:
  void areaRect(int x, int y){
    l2=x;
    b2=y;
    area2 = l2*b2/2;

    cout<<area2;
  }
};

int main(){
  int x,y;
  cout<<"Enter length and breadth of rectangle: ";
  cin>>x>>y;
  areaHalf a;
  a.areaRect(x,y);
  return 0;
}