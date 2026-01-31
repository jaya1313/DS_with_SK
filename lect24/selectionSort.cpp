#include<iostream>
#include<vector>
using namespace std;

//Selection sort

void selectionSort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
         int si=i;
         for(int j=i+1;j<n;j++){
            if(arr[j] < arr[si]){
                si=j; 
            }
         }
         swap(arr[i],arr[si]);
    }
}

void printArray(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr={4,1,5,2,3};
    int n=5;
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}