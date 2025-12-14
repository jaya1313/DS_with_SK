//bitwise operator 
//how to find a number is power of 2 
#include <iostream>
using namespace std;
#include<math.h>

int main() {
    // int x;
    // cout << "enter any number:" << x;
    // cin >> x;   

    //reverse a number
    int rev=0,n=357;
    while(n>0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    cout << "reversed number is : " << rev;

}