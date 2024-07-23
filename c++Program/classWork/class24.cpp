//** Static member variable

// #include<iostream>
// using namespace std;

// class myclass{
//   private:
//   int x;
//   static int y;

//   public:
//   void setdata(int a){
//     x=a;
//     cout<<"x= "<<x<<endl;
//   }

//   static void setstatdata(int b){
//     y=b;
//     cout<<"y= "<<y<<endl;
//   }
// };

// int myclass:: y;

// int main(){
//   // myclass c1;
//   // c1.setdata(5);
//   // c1.setstatdata(10);
//   myclass::setstatdata(30);
//   return 0;
// }



//** Passing object as an argument and return object

// #include<iostream>
// using namespace std;

// class myclass{
//   private:
//   int a,b;

//   public:
//   void set_data(int x, int y){
//     a=x;
//     b=y;
//   }

//   void get_data(){
//     cout<<"a = "<<a<<" \t b = "<<b<<endl;
//   }

//   myclass add(myclass c){
//     myclass temp;
//     temp.a = a+ c.a;
//     temp.b = b+ c.b;
//     return temp;
//   }
// };

// int main(){
//   myclass c1,c2,c3;
//   c1.set_data(5,6);
//   c2.set_data(6,7);
//   c1.get_data();
//   c2.get_data();

//   c3 = c1.add(c2);

//   c3.get_data();

//   return 0;
// }


//? Write a program to find greatest number between two numbers by defining function outside the class


#include<iostream>
using namespace std;

class great{
  private:
  int x,y;

  public:
  void set_data(int , int );

  void get_data();
};

void great:: set_data(int a, int b){
  x=a;
  y=b;
};


void great:: get_data(){
  if(x>y){
    cout<<x<<" is greater than "<<y<<endl;
  }else if(y>x){
    cout<<y<<" is greater then "<<x<<endl;
  }else{
    cout<<"Both are equal";
  }
};

int main(){
  great c1;
  c1.set_data(10,20);
  c1.get_data();

  return 0;
}