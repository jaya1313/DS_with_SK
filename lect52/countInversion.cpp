#include<iostream>
#include<vector>
using namespace std;

//count inversions (follows 2 conditions i<j && arr[i] > arr[j])

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
    vector<int> arr={6,3,2,7,1};
    cout << countInversions(arr,0);
    return 0;
}