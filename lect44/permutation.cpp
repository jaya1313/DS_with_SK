#include<iostream>
#include<vector>
using namespace std;

// find permutations in array
void getPermutation(vector<int> &nums, int idx,vector<vector<int>> &ans){
    //base case
    if(idx == nums.size()){
        ans.push_back({nums});
        return;
    }
    for(int i=idx; i<nums.size();i++){
        swap(nums[idx], nums[i]);   // idx place => ith element choice
        getPermutation(nums,idx+1,ans);

        swap(nums[idx],nums[i]);  //backtrack
    }  
    
}

int main(){
    vector<int> nums ={1,2,3};
    vector<vector<int>> ans;
    //getPermutation(nums,0,ans);
    for(auto v : ans){
        for(auto x : v){
            cout<< x;
        }
        cout << endl;
    }
    return 0;
}
