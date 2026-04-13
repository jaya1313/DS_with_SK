#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//subarray sum equals to k problem
//Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
//A subarray is a contiguous non-empty sequence of elements within an array.

//560 on leetcode

//using brute force approach

int subarraySum(vector<int>& nums, int k){
    int n= nums.size();
    int count =0;

    for(int i=0; i<n ;i++){
        int sum=0;
        for(int j=i; j<n ; j++){
            sum+= nums[j];
            if(sum == k){
                count++;
            }
        }
    }
    return count;
}

int subarraySum2(vector<int>& nums, int k){
    

}

int main(){
    vector<int> nums={9,4,20,3,10,5,3};
    int k=33;
    cout << subarraySum(nums, k) << endl;
        return 0;
}