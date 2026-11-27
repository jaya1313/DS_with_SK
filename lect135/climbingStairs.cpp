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

// tabulation
  int climbStairs(int n) {

       if(n==1 || n==2) return n;

        vector<int> dp(n+1);
        dp[1] = 1;
        dp[2] = 2;
        
        for(int i=3; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }

int main(){

}