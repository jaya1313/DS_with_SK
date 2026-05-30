#include<iostream>
#include<vector>
using namespace std;

//count inversions

//brute force approach

int countInversions(vector<int> &arr,int count){
  for(int i=0; i<arr.size(); i++){
    for(int j=i+1; j<arr.size();j++){
        if(arr[i] > arr[j])
        count++;
    }
  }
  return count;
}

int main(){
    return 0;
}