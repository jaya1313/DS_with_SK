#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std; 

// find duplicate values in an array
// 287 on leetcode

int findDuplicates1(vector<int> nums){ // in this ,time complex. is O(n) and space complex is also O(n)
   
    unordered_set<int> s;
    for (int i=0;i<nums.size();i++){
        if(s.find(nums[i]) != s.end()){
           return nums[i];
        }
        s.insert(nums[i]);
    }
}

// better approach , in which time complex is O(n) and space complex is O(1)
//using linked list

int findDuplicates(vector<int> nums){
    
}
int main(){
    vector<int> nums={3,1,3,2,4};
    cout << findDuplicates1(nums);

    return 0; 
}