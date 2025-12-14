// binary number system
// decimal to binary

#include<iostream>
#include<math.h>
using namespace std;

// int DecToBinary( int num){
//       int ans=0;               //binary number
//       int pow=1;
//       while(num>0){
//         int rem=num%2;
//         num=num/2;
//         ans=ans+(rem*pow);
//         pow=pow*10;
//       }
//       cout << ans << endl;
// }
//    int main(){
//      DecToBinary(1);
//      DecToBinary(2);
//      DecToBinary(3);
//      DecToBinary(4);
//      DecToBinary(5);
//      DecToBinary(6);
//      DecToBinary(7);
//      DecToBinary(8);
//      DecToBinary(9);
// }

// binary to decimal

int BinToDecimal( int num){
      int ans=0;               //binary number
      int pow=1;
      while(num>0){
        int rem=num%10;
       ans=ans+(rem*pow);
       num=num/10;
        pow=pow*2;
      }
      return ans;
}
   int main(){
     cout<< BinToDecimal(101);
     return 0;
}