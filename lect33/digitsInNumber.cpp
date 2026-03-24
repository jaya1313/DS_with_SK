#include<iostream>
#include<string>
#include<vector>

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

int main(){
    sumDigits(6538);
}