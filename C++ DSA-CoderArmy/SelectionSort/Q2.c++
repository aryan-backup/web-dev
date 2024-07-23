// 2: Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 

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



  for(int i=0; i<n-1; i++){
    int index =0;
    int greatest = arr[0];
    for(int j=0; j<n-i; j++){
        if(greatest<arr[j]){
          greatest = arr[j];
          index = j;
        }
    }
    swap(arr[index],arr[n-i-1]);
  }

    cout<<"Sorted array: "<<endl;
    for(int k=0; k<n; k++){
    cout<<arr[k]<<" ";
  }


  return 0;
}