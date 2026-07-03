//496 on leetcode
// next greater element

#include<iostream>
#include<unordered_map>
#include<vector>
#include<stack>
using namespace std;

 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int,int> next;
        for(int i = nums2.size()-1; i>=0; i--){
           while(s.size() >0 && s.top() <= nums2[i]){
            s.pop();
           }
          if(s.empty()){
            next[nums2[i]] = -1;
         }
          else{
            next[nums2[i]] = s.top();
        }
          s.push(nums2[i]);
    }
    vector<int> res;
    for(int num: nums1){
        res.push_back(next[num]);
    }
    return res;
    }

int main(){

    vector<int> nums2 = {1,3,4,2};
    vector<int> nums1 = {4,1,2};
    vector<int> anss =  nextGreaterElement(nums1,nums2);
    for(int a: anss){
        cout << a << " ";
    }
    cout << endl;
}