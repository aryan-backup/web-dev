// #include<bits/stdc++.h>
// using namespace std;
// class fruit{
//   public:
//   void taste() { cout<<" Different fruit have different taste."<<endl; }
// };

// class apple: public fruit{
//   public:
//   void taste() { cout<<"Apple has sweet taste"<<endl; }
// };

// class orange:public fruit{
//   public:
//   void taste() { cout<<"Orange has sour and sweet taste"<<endl; }
// };

// int main(){
//   apple a;
//   orange o;
//   a.taste();
//   o.taste();
//   return 0;
// }

//& WAP to take length, breadth and height as a input in parent class and calculate area of a rectangle in one base class, area of a square in another base class and volume of cuboid in an another base class

#include<bits/stdc++.h>
using namespace std;

class area{
  protected:
  int l,b,h;

  public:
  void getData(int x, int y, int z){
    l=x;
    b=y;
    h=z;
  }
};

class areaOfRect:public area{
  public:
  void calc(){
    cout<<"Area = "<<l*b<<endl;
  }
};

class areaOfSquare:public area{
  public:
  void calc(){
    cout<<"Area = "<<l*l<<endl;
  }
};

class  VolumeOfCuboid:public area{
  public:
  void calc(){
    cout<<"Volume = "<<l*b*h<<endl;
  }
};

int main(){
  areaOfRect a1;
  areaOfSquare a2;
  VolumeOfCuboid v1;

  a1.getData(4,5,0);
  a1.calc();

  a2.getData(4,0,0);
  a2.calc();

  v1.getData(2,3,4);
  v1.calc();
}