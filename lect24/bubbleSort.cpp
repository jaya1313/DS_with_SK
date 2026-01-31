//bubble sort
#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        bool isSwap=false;         // opimisation in bubblr sort(already sorted array)
        for(int j=0;j<n-i-1;j++){
             if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSwap=true;
             }
        }
        if(!isSwap)     //array is already sorted
        return;
    }
}

void printArray(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr={3,6,1,8,4};
    int n=5;
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}