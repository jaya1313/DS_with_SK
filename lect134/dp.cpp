// dp series lect 1
// fabonacci recursion

#include<iostream>
#include<vector>
using namespace std;

int fb(int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    return fb(n-1) + fb(n-2);
}

// fabonacci dp - memoization
int fabbDP(int n, vector<int> &dp){
    if(n <= 1){
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    }

    return dp[n] = fabbDP(n-1, dp) + fabbDP(n-2, dp);
}

// DP - tabulation - fabonacci

int fabonacci(int n) {

       if(n==1 || n==0) return n;

        vector<int> dp(n+1);
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }

    // space optimization
int fabonacci(int n) {

    if(n==1 || n==2) return n;

        int prev2 = 0;
        int prev1 = 1;
        int result = prev1;
        
        for(int i=2; i<=n; i++){
            result = prev1 + prev2;

            prev2 = prev1;
            prev1 = result;
        }

        return result;
    }


int main(){
    int n = 5;
    vector<int> dp(n+1, -1);
    cout << fabbDP(n, dp) << endl;
    cout << fb(n);
    return 0;
}