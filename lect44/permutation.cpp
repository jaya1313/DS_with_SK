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

vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getPermutation(nums, 0, ans);
        return ans;
        
    }


// permutation in strings code
void permute2(string s, string ans) {
    if (s.length() == 0) {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        string left = s.substr(0, i);
        string right = s.substr(i + 1);
        //permute(left + right, ans + ch);
    }
}


int main(){
    vector<int> nums ={1,2,3};
    permute(nums);
    return 0;
}
