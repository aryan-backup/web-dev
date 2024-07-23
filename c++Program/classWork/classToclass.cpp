
//! Private
// #include<iostream>
// using namespace std;

// class father{
//   private:
//   int x,y;

//   public:
//   void setdata(int a, int b){
//     x=a;
//     y=b;
//   }

//   void getdata(){
//     cout<<"this is parent section\n";
//     cout<<"x= "<<x<<" y= "<<y<<endl;
//   }
// };

// class child:public father{
// };

// int main(){
//   child c1;
//   c1.setdata(4,5);
//   c1.getdata();
//   return 0;
// }



//^ Protected
// #include<iostream>
// using namespace std;

// class father{
//   protected:
//   int x,y;
// };

// class child:public father{
//   public:
//   void setdata(int a, int b){
//     x=a;
//     y=b;
//   }

//   void getdata(){
//     cout<<"x= "<<x<<" y= "<<y<<endl;
//   }
// };

// int main(){
//   child c;
//   c.setdata(4,5);
//   c.getdata();
//   return 0;
// }



//* Public
// #include<iostream>
// using namespace std;

// class father{
//   public:
//   int x,y;
// };

// class child:public father{
//   public:
//   void setdata(int a, int b){
//     x=a;
//     y=b;
//   }

//   void getdata(){
//     cout<<"x= "<<x<<" y= "<<y<<endl;
//   }
// };

// int main(){
//   child c;
//   c.setdata(4,5);
//   c.getdata();
//   return 0;
// }



#include<iostream>
using namespace std;

class gfather{
  protected:
  int l,b;
};

class father:public gfather{
    public:
    void setdata(int x, int y){
      l=x;
      b=y;
    }
};

class child:public father{
  public:
  void getdata(){
    cout<<"Area of rectangle= "<<l*b<<endl;
  }
};

int main(){
  child c;
  c.setdata(2,3);
  c.getdata();
  return 0;
}