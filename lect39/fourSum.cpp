#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

 // 4 sum problem

//Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

//0 <= a, b, c, d < n
//a, b, c, and d are distinct.
//nums[a] + nums[b] + nums[c] + nums[d] == target
//You may return the answer in any order.

//using 2 pointer approach
//Time complexity: O(nlogn + n^3)

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n= nums.size();
        sort(nums.begin(), nums.end());

        for(int i=0;i<n;i++){
            if(i>0 && nums[i] == nums[i-1])
            continue;
            for(int j=i+1;j<n; ){
                int p=j+1;
                int q=n-1;
                while(p < q){
                long long sum = (long long)nums[i] +(long long)nums[j]+ (long long)nums[p]+                                (long long)nums[q];

                if(sum < target){
                p++;
                }
                else if(sum > target){
                q--;
                }
                else{
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++,q--;

                    while(p<q && nums[p] == nums[p-1])
                    p++;
                }
                }
                j++;
                while(j<n && nums[j] == nums[j-1])
                j++;
            }
            
        }
        return ans;
    }

 int main(){
    vector<int> nums={1,0,-1,0,-2,2};
    int target=0;
    vector<vector<int>> ans = fourSum(nums, target);
    for(auto x: ans){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }    return 0;   
