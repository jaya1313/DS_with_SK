// Same as next greater element lect 69
// with an optimisation that element is connect to first, means a circular loop is there 
// so we have to traverse through a loop
// 503 on leetcode
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreaterII(vector<int>& arr){
    int n = arr.size();
    stack<int> s;
    vector<int> ans(n,-1);
    for(int i=2*n-1; i>=0; i++){
        while(s.size()>0 && arr[s.top()] <= arr[i%n]){
            s.pop();
        }
        arr[i%n] = s.empty() ? -1 : arr[s.top()];
        s.push(i%n);
    }

}

int main(){
    vector<int> arr={3,6,5,4,2};
    vector<int> nextGreaterII(arr);
    return 0;
}