#include<iostream>
#include<vector>
using namespace std;

//combination sum
void combinationSum(vector<int> &arr, int i, vector<int> &combi, vector<vector<int>> &ans, int target){
    // base cases
    int n = arr.size();
    if(i==n || target < 0){
        return;
    }
    if(target == 0){
        ans.push_back(combi);
        return;
    }

    combi.push_back(arr[i]);

    //inclusion condition
    combinationSum(arr, i+1, combi, ans, target-arr[i]);
    //multiple inclusion condition
    combinationSum(arr, i, combi, ans, target-arr[i]);

    combi.pop_back();   //backtracking step
    //exclusion condition
    combinationSum(arr, i+1, combi, ans, target);
}

int main(){
    vector<int> arr = {2,3,5};
    int target = 8;
    vector<int> combi;
    vector<vector<int>> ans;

    combinationSum(arr, 0, combi, ans, target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}