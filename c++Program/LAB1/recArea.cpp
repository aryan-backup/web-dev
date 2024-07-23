//? Write a program to find area of a rectangle

#include<iostream>

using namespace std;


int main(){
  int length, breadth,area;
  cout<<"Enter length of rectangle: ";
  cin>>length;

  cout<<"Enter breadth of rectangle: ";
  cin>>breadth;


  area= length*breadth;
  cout<<"The area of rectangle with length "<<length<<" and breadth "<<breadth<<" is "<<area;

  return 0;
}