#include<iostream>
#include<string>
#include<vector>

using namespace std;

// math in c++
// 1. check prime or not
//2.count prime numbers between a given range(brute force approach)
// optimised approachfor counting prime no.s(Sieve of Eratosthenes)

string isPrime(int n){
      for(int i=2;i<n;i++){
        if(n%i==0){
            return "non prime";
        }
      }
      return "prime";
}

int main(){
    int n=47;
    cout << isPrime(n);
    
}