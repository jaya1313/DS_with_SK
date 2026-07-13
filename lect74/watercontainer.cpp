#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// trapping rainwater problem
//42 on leetccode
//better approach
int trappingRainwater(vector<int> &height){
    int n = height.size();
    int ans=0;
    vector<int> leftMax(n,0);
    vector<int> rightMax(n,0);
    leftMax[0] = height[0];
    rightMax[n-1] = height[n-1];
    for(int i=1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], height[i]);
    }
    for(int i=n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1], height[i]);
    }
    for(int i=0; i<n; i++){
       ans+=(min(leftMax[i], rightMax[i]))-height[i];
    }
    return ans;

}
int main(){
    vector<int> height={4,2,0,3,2,5};
    cout << trappingRainwater(height);
    return 0;
}