#include<iostream>
#include<vector>
using namespace std;

//fabonacci series using recursion    (509 on leetcode)

int fab(int n){                  //time compl. = O(2 to the power n)  space compl. =  O(n)
    if(n==0 || n==1){
        return n;
    }
    return fab(n-1) + fab(n-2);
}

// if array is sorted using recursion

bool isSorted(vector<int> arr, int n){   // time and space compl. =  O(n)
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int bSearch(vector<int> arr,int tar,int st,int end){
    if(st <= end){
        int mid = st + (end-st) / 2;
        if(arr[mid] == tar)
        return mid;

        else if(arr[mid] < tar){
            return bSearch(arr,tar,mid+1,end);
        }
        else{
            return bSearch(arr,tar,st,mid-1);
        }
    }
    return -1;
}

int main(){
    vector<int> arr ={1,2,3,4,5};
    int end=arr.size()-1;
    int tar=5;
    cout << bSearch(arr,tar,0,end);
    //cout << isSorted(arr, arr.size());
    //cout << fab(8);
    return 0;
}