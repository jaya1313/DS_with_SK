#include<iostream>
#include<string>
#include<vector>

using namespace std;

// math in c++
// 1. check prime or not
//2.count prime numbers between a given range(brute force approach)
// optimised approachfor counting prime no.s(Sieve of Eratosthenes)
//204 on leetcode

bool isPrime(int n){
      for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
      }
      return true;
}

int countPrimes(int n1){          // optimed approach(Sieve of Eratosthenes)
         vector<bool>isprime(n1+1,true);  // find count of prime no.s less than n1
         int count=0;
         for(int i=2;i<n1;i++){
            if(isprime[i]){
                 count++;
                 for(int j=i*2;j<n1;j=j+i){
                    isprime[j]=false;
                 }
            }
         }
         return count;
}

int main(){
    int n=47;
    cout << isPrime(n) << endl;
   
    int L=2;
    int R=50;
    int count=0;
    for(int i=L;i<=R;i++){         // brute force approch
        if(isPrime(i)){
            count++;
        }
    }
    cout << "no.of prime :" << count<< endl;
    cout << countPrimes(50);
    
}