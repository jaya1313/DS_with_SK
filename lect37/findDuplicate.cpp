#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std; 

// find duplicate values in an array
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and using only constant extra space.
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

int findDuplicates(vector<int>& nums){
         int slow=nums[0];       
         int fast =nums[0];      
  do{
    slow= nums[slow];          //+1
    fast=nums[nums[fast]];      //+2
 }
  while(slow != fast);

 slow = nums[0];

  while(slow != fast){
     slow=nums[slow];    //+1
     fast=nums[fast];     //+1
 }
return slow;

}
int main(){
    vector<int> nums={3,1,3,2,4};
    cout << findDuplicates1(nums) << endl;
    cout << findDuplicates(nums)  << endl;

    return 0; 
}