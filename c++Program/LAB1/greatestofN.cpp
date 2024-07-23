//? WAP to find greatest number among "n" number

#include<iostream>

using namespace std;

int main(){
  int n;

  cout<<"Enter total number: ";
  cin>>n;

  int num[n];

for(int i=0; i<n; i++){
  cout<<"Enter number "<<i+1<<": ";
  cin>>num[i];
}

int greatest = num[0];
for(int i=0; i<n; i++){
  if(num[i]>greatest){
    greatest = num[i];
  }
}


cout<<"The greatest of n number i.e "<<n<<" number is "<<greatest;
return 0;
}