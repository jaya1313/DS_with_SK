#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

 // 3 sum problem

//  Given an integer array nums, return all the triplets [nums[i], nums[j],
// nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets.

// 15 on leetcode

// brute force approach
// vector<vector<int>> threeSum(vector<int>& nums) {
//         int n= nums.size();
//         vector<vector<int>> ans;

//         set<vector<int>> s;

//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 for(int k=j+1; k<n; k++){
//                     if(nums[i] + nums[j] +nums[k] == 0){
//                           vector<int> trip = {nums[i] , nums[j] , nums[k]};
//                           sort(trip.begin(), trip.end());

//                           if(s.find(trip) == s.end()){
//                           s.insert(trip);
//                           ans.push_back(trip);

//                           }
//                     }
//                 }
//             }
//         }
//         return ans;
//     }

    // better approach
    // using hashing
    // vector<vector<int>> threeSum(vector<int>& nums) {
    //      int n= nums.size();
    //      vector<vector<int>> ans;
    //         set<vector<int>> uniqueTriplets;
    //         for(int i=0;i<n;i++){
    //             int tar= - nums[i];
    //             set<int> s;
    //             for(int j=i+1;j<n;j++){
    //                 int third= tar-nums[j];
    //                 if(s.find(third) != s.end()){
    //                      vector<int>trip={nums[i],nums[j],third};
    //                      sort(trip.begin(),trip.end());
    //                     uniqueTriplets.insert(trip);
    //                 }
    //                 s.insert(nums[j]);
    //             }
    //         }
    //         return ans;
    // }
    

    //optimal/best approach
    //using two pointer approach
    // sort the array first
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
    }


int main(){

    return 0;
}