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

        for(int i=0;i<n;i++){
            if(i>0 && nums[i] == nums[i-1]) continue; // skip duplicates

            int j= i+1;
            int k= n-1;

            while(j < k){
                int sum= nums[i] + nums[j] + nums[k];
                if(sum < 0){
                    j++;
                }
                else if(sum > 0){
                    k--;
                }
                else{
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    // skip duplicates
                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k--;
                }
            }
        }
    }


int main(){

    return 0;
}