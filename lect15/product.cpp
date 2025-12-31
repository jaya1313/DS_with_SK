#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
//product of array except self 
// we cannot use division operator
//238 on leetcode
// brute force approach

// int main(){
//     vector<int> nums={1,2,3,4};
//     int n=nums.size();
//     vector<int> ans(n);
//      for(int i=0;i<n;i++){
//         int product=1;
//         for(int j=0;j<n;j++){
//             if(i!=j){
//                 product*=nums[j];
//             }
//         }
//         ans[i]=product;
//      }
//      for(int i=0;i<n;i++){
//      cout<<ans[i] <<" ";
//      }
// }

// optimal approach

// int productExceptSelf(vector<int>nums,int size){
//     vector<int> prefix;
//     vector<int> suffix;
//     vector<int> ans;

//     for(int i=1;i<size;i++){
//         prefix[0]=1;
//         prefix[i]=prefix[i-1]*nums[i-1];
//     }
//     for(int i=size-2;i>=0;i--){
//         suffix[size-1]=1;
//         suffix[i]=suffix[i+1]*nums[i+1];
//     }
//     for(int i=0;i<size;i++){
//        ans[i]=prefix[i]*suffix[i];
//     }
//     return ans;
    
// }

//to enhance the space complexity, below code is there, the logic is same as the above.

int productExceptSelf(vector<int>nums,int size){
    vector <int> ans(size);
    for(int i=1;i<size;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    int suffix=1;
    for(int i=size-2;i>=0;i--){
        suffix*=nums[i+1];
        ans[i]*=suffix;
    }
    return ans[4];
}

int main(){
    vector<int>nums={1,2,3,4};
    int size=nums.size();
    cout << productExceptSelf(nums, size);
}