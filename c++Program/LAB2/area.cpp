//? WAP to find area of a circle by using inline function.

#include<iostream>
using namespace std;

inline float areaCircle(float r){
  const float PI = 3.14f;
  return PI*r*r;
}

int main(){
  float radius,area;

  cout<<"Enter radius of circle: ";
  cin>>radius;

  area = areaCircle(radius);
  cout<<"The area of circle with radius "<<radius<<" is "<<area<<endl;
  return 0;
}