// 1: Use Bubble Sort Algorithm to sort the array of integers in decreasing order.

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter the size of an array: ";
  cin>>n;

  int arr[n];

  cout<<"Enter an elements of an array: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  for(int i=0; i<n; i++){
    bool found = false;
    for(int j=0; j<n-1; j++){
      if(arr[j]<arr[j+1]){
        swap(arr[j],arr[j+1]);
        found = true;
      }
    }

    if(!found) break;
  }

  cout<<"Sorted array: "<<endl;
  for(int k=0; k<n; k++){
    cout<<arr[k]<<" ";
  }

  return 0;
}
