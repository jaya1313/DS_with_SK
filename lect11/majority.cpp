#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//brute force approach
// majority element > n/2 times where n is size of array

int majorityElement(vector <int> nums ){
    int n= nums.size();
            for(int val:nums){
                int freq=0;
                for(int el:nums){
                    if(val==el){
                        freq++;
                    }
                }
                if(freq>n/2){
                    return val;
                }
            }
}

// more optimise approach
// by doing sorting first

int majorityElement2(vector <int> nums ){
         int n=nums.size();
         sort(nums.begin() , nums.end());
         int freq=1,ans=nums[0];
         for(int i=0;i<n;i++){
            if(nums[i]==nums[i-1]){
                freq++;
            }
            else{
                freq=1;
                ans=nums[i];
            }
            if(freq>n/2)
            return ans;
         }
}

//moore's voting algorithm
//the more optimised one
int majorityElement3(vector <int> nums){
    int n=nums.size();
    int freq=0,ans=0;
    for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    int count=0;
    for(int val:nums){
        if(val==ans){
            count++;
        }
    }
    if(count>n/2){
       return ans;
    }
    else{
        return -1;
    }
}

int main(){
    vector <int> nums={1,2,2,1,1};
//    cout<< majorityElement(nums);
// cout<< majorityElement2(nums);
cout<< majorityElement3(nums);
}