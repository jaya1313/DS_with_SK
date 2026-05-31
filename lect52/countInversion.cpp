#include<iostream>
#include<vector>
using namespace std;

//count inversions (follows 2 conditions i<j && arr[i] > arr[j])

//brute force approach

// int countInversions(vector<int> &arr,int count){
//   for(int i=0; i<arr.size(); i++){
//     for(int j=i+1; j<arr.size();j++){
//         if(arr[i] > arr[j])
//         count++;
//     }
//   }
//   return count;
// }

//optimised approach (using merge sort)

int merge(vector<int> &arr,int st, int mid, int end){
    int i=st;
    int j = mid+1;
    int invCount = 0;
    vector<int> temp;
    while(i<=mid && j<=end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);  
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            invCount = mid-i+1;
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
       for(int idx=0; idx<temp.size(); idx++){
        arr[idx + st] = temp[idx];
       } 

     return invCount;   
}

int mergeSort(vector<int> &arr, int st, int end){
    if(st < end){
        int mid = st + (end-st)/2;
        int leftCount = mergeSort(arr,st,mid);
        int rightCount = mergeSort(arr,mid+1,end);

        int invCount = merge(arr,st,mid,end);
        return leftCount + rightCount + invCount;
    }
 return 0;   
}


int main(){
    vector<int> arr={6,3,2,7,1};
    //cout << countInversions(arr,0);
    int ans = mergeSort(arr,0,arr.size()-1);
    cout << "Inv Count: " << ans << endl;
    return 0;
}