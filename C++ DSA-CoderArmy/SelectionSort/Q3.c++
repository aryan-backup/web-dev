// 3: Selection Sort Algorithm to sort the array of char in ascending order.

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter the size of an array: ";
  cin>>n;

  char arr[n];
  cout<<"Enter an element of an array: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
      }
    }
  }

  cout<<"Sorted array: "<<endl;
  for(int k=0; k<n; k++){
    cout<<arr[k]<<" ";
  }

return 0;
}