#include<iostream>
using namespace std;

// buy and sell stock
// binary exponentiation (to calculate x to the power n)
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

// buy the products and sell it and  return the maximum profit.
  int maxProfit(int price[],int size){
    int maxprofit= 0;
    int bestBuy=price[0];
    for(int i=1;i<size;i++){
          if(price[i]>bestBuy){
            maxprofit=max(maxprofit,price[i]-bestBuy);
          }
          bestBuy=min(price[i],bestBuy);
    }
    return maxprofit;
  }
int main(){
    // int n=10;
    // double x=2.0;
    // cout<< myPow(x,n);
    int price[6]={7,1,5,3,6,2};
    int size=6;
    cout << maxProfit(price,size);
    
}