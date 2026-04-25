#include<iostream>
#include<vector>
using namespace std;

//fabonacci series using recursion    (509 on leetcode)

int fab(int n){
    if(n==0 || n==1){
        return n;
    }
    return fab(n-1) + fab(n-2);
}

// if array is sorted using recursion

bool isSorted(vector<int> arr, int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int main(){
    vector<int> arr ={1,2,3,4,5};
    cout << isSorted(arr, arr.size());
    //cout << fab(8);
    return 0;
}