#include<iostream>
#include<vector>

using namespace std;

// GCD (greatest common divisor)
//to find the gcd of 2 no.s a,b
//brute force approach

int findGCD(int a, int b){
    int gcd=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return gcd;
}

// Euclids algorithm (optimised approach for finding GCD)
// it says if we have to find gcd(a,b)then we can find it by continuous repeating with this
// gcd(a-b,b) if a>b
// gcd(a,b-a) if b>a
// eg- gcd(20,28)-> gcd(20,8)-> gcd(12,8)-> gcd(4,8)-> gcd(4,4)-> gcd(0,4)
//hence if 1 no. becomes 0 then opp no. is the gcd hence gcd is 4

// now a more optimised way of doing this ,means instead of substracting we can do modulus
// for gcd(a,b)
// gcd(a%b,b)  if a>b
//gcd(a,b%a)   if b>a and is known as euclids algorithm

//code
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a= a % b;
        }
        else{
            b = b % a;
        }
    }
    if(a==0)
    return b;
    else
    return a;
}

int main(){
    int a=20;
    int b=28;
    cout << findGCD(a,b) << endl;
    cout << gcd(a,b) << endl;
    return 0;
}