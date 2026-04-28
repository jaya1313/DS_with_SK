#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//backtracking with recursion
// find all subsets of an array    (time complexity = O(2 to the power n  * n))

void printSubsets(vector<int> &arr,vector<int> ans, int i){
    if(i == arr.size()){
        //print ans
        for(int val : ans){
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // Include
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i+1);

    // Exclude
    ans.pop_back();    //backtrack
    printSubsets(arr, ans, i+1);

}

//subset 2  (array with duplicate number) (same t(c) = O(n* 2 to the power n))

void printSubsetwithDup(vector<int> &arr,vector<int> ans, int i){

    if(i == arr.size()){
        //print ans
        for(int val : ans){
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // Include
    ans.push_back(arr[i]);
    printSubsetwithDup(arr, ans, i+1);

    
    ans.pop_back();    //backtrack
    int idx = i+1;
    while(idx < arr.size() && arr[idx] == arr[idx-1]) idx++;

    // Exclude
    printSubsetwithDup(arr, ans, idx);
    

}

int main(){
    vector<int> arr ={1,2,2};
    vector<int> ans;
    sort(arr.begin(), arr.end());
    printSubsetwithDup(arr, ans, 0);
    //printSubsets(arr, ans, 0);
    return 0;
}