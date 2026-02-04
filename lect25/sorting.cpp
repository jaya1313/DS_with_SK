#include<iostream>
#include<vector>
using namespace std;

//Sorting an array with 0s,1s and 2s.  Or sort colors(leetcode)

void sortColors(vector<int>&arr,int n){
    int count0=0,count1=0,count2=0;      //tc is O(n)

     for(int i=0;i<n;i++){
     if(arr[i]==0)
     count0++;
     else if(arr[i]==1)
     count1++;
     else
     count2++;
}
    int idx=0;
    for(int i=0;i<count0;i++){
        arr[idx++]=0;
    }
    for(int i=0;i<count1;i++){
        arr[idx++]=1;
    }
    for(int i=0;i<count2;i++){
        arr[idx++]=2;
    }
}

//here the time complexity remains same but it is the more optimised way to sort

void sortColors2(vector<int> &arr,int n){    //DNF(dutch national flag) approach
    int mid=0,low=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
        swap(arr[low],arr[mid]);
        mid++,low++;
    }
    else if(arr[mid]==1)
    mid++;
    else{
    swap(arr[high],arr[mid]);
    high--;
    }
    }
}

void printArray(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int>arr={2,0,1,0,2,1,0,1,2,0};
    int n=arr.size();
    sortColors2(arr,n);
    printArray(arr,n);
    return 0;
}