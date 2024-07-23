// //* Destructor 

// #include<iostream>
// using namespace std;

// class myClass{
//   private:
//   int a,b;
//   public:

//   ~myClass(){ 
//     cout<<"I am destructor \n";  //! Always run after constructor
//   }

//   myClass(){
//     cout<<"I am constructor\n";
//   }
// };

// int main(){
//   myClass c1;
//   return 0;
// }


//? /=================================================/ //

//static member variable
//local member variable

#include<iostream>
using namespace std;

void myfun(){
  int x=5;
  static int y=5;
  cout<<"\n x="<<x<<"\t y="<<y;
  x=x+2;
  y=y+2;
  
}

int main(){
  myfun();
  myfun();
}