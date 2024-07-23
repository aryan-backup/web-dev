#include<iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int rem=0;
        int sum=0;
      while(num>0){
        rem = num%10;
        sum = sum+rem;
        num /=10;
      }
      int rem2=0, sum2=0;
      if(sum>=10){
    while(sum>0){
            rem2= sum%10;
            sum2 +=rem2;
            sum = sum/10;
         }
    int rem3=0, sum3=0;
      if(sum2>=10){
         while(sum2>0){
            rem3 = sum2%10;
            sum3 = sum3+rem3;
            sum2 = sum2/10;
         }
         return sum3;
      }
      return sum2;
      }


      return sum;
    }
};

int main(){
  int sum=0;
  Solution c1;
  sum=c1.addDigits(38);
  cout<<sum;
  return 0;
}