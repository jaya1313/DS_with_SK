#include<vector>
#include<iostream>
using namespace std;

// 70 on leetcode
// climbing stairs- memoization
int climbingStairs(int n, vector<int> &dp){
   if(n==1 || n==2) return n;

   if(dp[n] != -1) return dp[n];

   return dp[n] = dp[n-1] + dp[n-2];

}

int main(){

}