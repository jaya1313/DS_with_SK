#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int> &arr,int st, int mid, int end){
    int i=st;
    int j = mid+1;
    vector<int> temp;
    while(i<=mid && j<=end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    //left
        while (i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
    //right
       while(j<=end){
         temp.push_back(arr[j]);
         j++;
       }   

        
}

void mergeSort(vector<int> &arr, int st, int end){
    if(st < end){
        int mid = st + (end-st)/2;
        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,st,mid,end);
        return;
    }
    
}

int main(){

    vector<int> arr = {12,8,32,31,54,35};
    mergeSort(arr,0,arr.size()-1);
    return 0;
}