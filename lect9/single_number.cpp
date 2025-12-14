#include<iostream>
#include<vector>
using namespace std;

// find the unique element from the given vector
int single_num(vector <int> nums){
int ans=0;
 for(int val: nums){
    ans=ans^val;
 }
 return ans;
 }

 int linearSearch(vector <int> nums,int target){
       int count=0;
       for(int val:nums){
        count++;
        if(val==target){
            cout << " number is found at : " << count<< endl;
        }
       }
 }

 int reverse(vector <int> nums){
    
 }
int main(){
    
    vector <int> nums={1,5,8,8,1};
    int target=5;
    //cout << single_num(nums);
    linearSearch(nums,target);
   
}