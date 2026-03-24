#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

// digits in a number

void sumDigits(int n){
    int sum=0;
    while(n!=0){          // time complexity  O[logn base 10]
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    cout << sum << endl;
}

// amstrong no.--- a number that is equal to the sum of cubes of its digit

bool isAmstrong(int n1){
    int copyN=n1;
    int sumOfCubes=0;

    while(n1!=0){
        int dig=n1%10;
        sumOfCubes+=(dig*dig*dig);
        n1=n1/10;
    }
   return sumOfCubes==copyN;
}

int main(){
    int n=6538;
    sumDigits(n);
    cout << (int)(log10(n)+1) << endl;   // it returns the count of digits(shortcut method)

    int n1=153;
    if(isAmstrong(n1)){
        cout << "is an amstrong number";
    }
    else{
        cout << "not an amstrong number";
    }
    return 0;
}