//? Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.

#include<iostream>
using namespace std;

int main(){
  int number;
  cout<<"Enter a number: ";
  cin>>number;

  if(number<1 || number>12){
    cout<<"Enter valid month"<<endl;
  }

  if(number==1) cout<<"Jan"<<endl;
  else if(number==2) cout<<"Feb"<<endl;
  else if(number==3) cout<<"Mar"<<endl;
  else if(number==4) cout<<"Apr"<<endl;
  else if(number==5) cout<<"May"<<endl;
  else if(number==6) cout<<"Jun"<<endl;
  else if(number==7) cout<<"Jul"<<endl;
  else if(number==8) cout<<"Aug"<<endl;
  else if(number==9) cout<<"Sep"<<endl;
  else if(number==10) cout<<"Oct"<<endl;
  else if(number==11) cout<<"Nov"<<endl;
  else if(number==12) cout<<"Dec"<<endl;

  return 0;
}