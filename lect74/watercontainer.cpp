#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// trapping rainwater problem
//42 on leetccode
//better approach t(n): O(n), s(c): O(n)
// int trappingRainwater(vector<int> &height){
//     int n = height.size();
//     int ans=0;
//     vector<int> leftMax(n,0);
//     vector<int> rightMax(n,0);
//     leftMax[0] = height[0];
//     rightMax[n-1] = height[n-1];
//     for(int i=1; i<n; i++){
//         leftMax[i] = max(leftMax[i-1], height[i]);
//     }
//     for(int i=n-2; i>=0; i--){
//         rightMax[i] = max(rightMax[i+1], height[i]);
//     }
//     for(int i=0; i<n; i++){
//        ans+=(min(leftMax[i], rightMax[i]))-height[i];
//     }
//     return ans;
// }

// optimal approach(two pointer approach)  t(n): O(n), s(c): O(1)
int trappingRainwater2(vector<int> &height){
    int n = height.size();
    int ans=0;
    int l=0;
    int r=n-1;
    int leftMax, rightmax=0;
    while(l<r){
        leftMax = max(leftMax, height[l]);
        rightmax = max(rightmax, height[r]);
        if(leftMax < rightmax){
            ans+= leftMax - height[l];
            l++;
        }
        else{
            ans+= rightmax - height[r];
            r--;
        }
    }
    return ans;
}


int main(){
    vector<int> height={4,2,0,3,2,5};
    // cout << trappingRainwater(height);
    cout << trappingRainwater2(height);
    return 0;
}