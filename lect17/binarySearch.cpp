#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>arr,int target){
    int st=0;
    int end=arr.size()-1;
    while(st<=end){
        int mid=(st+end)/2;
        // optimisied way mid=st+ (end-st)/2;  when start and end both becomes the int_max
        // means infinite the mid gets overflow therefore we use the above formula for mid.
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            st=mid+1;
        }
        else if(target < arr[mid]){
            end=mid-1;
        }
        else
        return mid;
    }
    return -1;
}

int recBinarySearch(vector<int>arr,int target,int st,int end){
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            return recBinarySearch(arr,target,mid+1,end);
        }
        else if(target < arr[mid]){
            return recBinarySearch(arr,target,st,mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={-1,0,3,4,8,9,12};
    int target=12;
    // cout << BinarySearch(arr,target);
    int st=0;
    int end=arr.size()-1;
    cout << recBinarySearch(arr,target,st,end);
}