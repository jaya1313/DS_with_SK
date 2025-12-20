#include<iostream>
using namespace std;

// buy and sell stock
// binary exponentiation 
double myPow(double x,int n){
    long binForm=n;
    double ans=1;
    while(binForm>0){
        if(binForm%2==1){
            ans*=x;
        }
        x*=x;
        binForm /=2;
    }
    return ans;
}
int main(){
    int n=10;
    double x=2.0;
    cout<< myPow(x,n);
    
}