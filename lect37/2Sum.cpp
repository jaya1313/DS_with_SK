#include<iostream>
#include<vector>

using namespace std;

//2Sum , sum of pair of 2 no.s is equal to target

// brute forch approach(O(n*n))
// int twoSum(vector<int> arr,int target){
//     for(int i=0;i<arr.size();i++){
//       int first =arr[i];
//       for(int j=i+1; j<arr.size();j++){
//         int second=arr[j];
//         if(first+second == target){
//         //return ans;
//       }
//     }
//     }
// }

//better approach (O(nlogn))
// int twoSum(vector<int> arr,int target){
//     sort(arr);
//     int st=0;
//     int end=arr.size()-1;
//     while(st<end){
//         int sum=arr[st] + arr[end];
//         if(sum == target){
//             return st,end;
//         }
//         else if(sum < target)
//         st++;
//         else{
//             end--;
//         }
//     }
// }

//optimised approach  (using hashing)





int main(){

}