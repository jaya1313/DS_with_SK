#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int> &arr, int st, int end){
    
}

void quickSort(vector<int> &arr, int st, int end){
    if(st < end){
        int pivotIdx = partition(arr, st, end);
        quickSort(arr, st, pivotIdx-1);
        quickSort(arr, pivotIdx+1, end);
        return;
    }
}

int main(){
    return 0;
}