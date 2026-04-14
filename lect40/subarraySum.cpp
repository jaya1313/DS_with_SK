#include<iostream>
#include<vector>
#include<unordered_map>
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

int subarraySum2(vector<int>& arr, int k) {
        int n=arr.size();
        int count = 0;
        vector<int> prefixSum(n,0);
        prefixSum[0] = arr[0];
        for(int i=1; i<n; i++){
            prefixSum[i] = prefixSum[i-1] + arr[i];
        }
        unordered_map<int,int> m;
        for(int j=0; j<n; j++){
            if(prefixSum[j] == k) count++;

            int val = prefixSum[j] - k;
            if(m.find(val) != m.end()) {
                count+= m[val];
            }
            if(m.find(prefixSum[j]) == m.end()) {
                m[prefixSum[j]] == 0;
            }
             m[prefixSum[j]]++;
        }
        return count;
    

}

int main(){
    vector<int> nums={9,4,20,3,10,5,3};
    int k=33;
    vector<int> arr={9,4,0,20,3,10,5,3};
    //cout << subarraySum(nums, k) << endl;
    cout << subarraySum2(arr, k) << endl;
        return 0;
}