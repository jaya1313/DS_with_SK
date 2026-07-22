#include<iostream>
#include<vector>
#include<deque>
using namespace std;

// finding the maximum element from window size = k
// 239 on leetcode

vector<int> slidingWindowMaximum(vector<int> &nums, int k){
    deque<int> dq;
    vector<int> ans;
    int n = nums.size();
    for(int i=0; i<k; i++){
          while(dq.size() > 0 && nums[dq.back()] <= nums[i]){
            dq.pop_back();
          }
          dq.push_back(i);
    }

    for(int i=k; i<n; i++){
        ans.push_back(nums[dq.front()]);
        
        // remove ele from dq which are not part of curr window
        while(dq.size() > 0 && dq.front() < i-k ){
            dq.pop_front();
        }

        while(dq.size() > 0 && nums[dq.back()] <= nums[i]){
            dq.pop_back();
          }
          dq.push_back(i);
    }
   ans.push_back(nums[dq.front()]);
   return ans;
}

int main(){
    int k=3;
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    vector<int> res = slidingWindowMaximum(nums, k);
    for(auto a : res){
        cout << a << " ";
    }
    return 0;
}