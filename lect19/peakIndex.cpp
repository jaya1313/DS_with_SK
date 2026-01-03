#include<iostream>
#include<vector>
using namespace std;
// peak index in mountain array

int peakIndexInMountainArray(vector<int>arr){
    int st=0,end=arr.size()-1;
    // the more optimised way, we can assign st=1 and end=n-2, because it is given
    // in the question the array is always a mountain array hence first and last 
    // value of array cannot be the peak.and minium size of array =3.
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid-1]<arr[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}

int main(){
    vector<int>arr={0,3,8,9,5,2};
    cout << peakIndexInMountainArray(arr);

}