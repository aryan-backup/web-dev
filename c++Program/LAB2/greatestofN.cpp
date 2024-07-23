//? WAP to find greatest number among n by using function.

#include<iostream>
using namespace std;

int greatestNum(int n,int nums[]){
  int greatest = nums[0];
  for(int i=0; i<n; i++){
    if(nums[i]>greatest){
      greatest = nums[i];
    }
  }

  return greatest;
}


int main(){
  int n, greatest;
  cout<<"Enter total no. of Number: ";
  cin>>n;

  int num[n];

  for(int i=0; i<n; i++){
    cout<<"Enter number "<<i+1<<": ";
    cin>>num[i];
  }

  greatest = greatestNum(n,num);

  cout<<"The greatest number among "<<n<<" number is "<<greatest<<endl;

  return 0;
}