// 2: Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number to first place by starting from the last. Question was explained in the class.

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter the size of an array: ";
  cin>>n;

  int arr[n];
  cout<<"Enter an element of an array: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  for(int i=0; i<n; i++){
    bool found = false;
    for(int j=n-1; j>0; j--){
      if(arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        found= true;
      }
    }

    if(!found) break;
  }


  cout<<"Sorted Array: "<<endl;
  for(int k=0; k<n; k++){
    cout<<arr[k]<<" ";
  }

  return 0;
}