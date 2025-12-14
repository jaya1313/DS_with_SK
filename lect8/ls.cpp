#include <iostream>
using namespace std;

// int linearSearch(int arr[6],int target){
//     int i;
//     for(int i=0;i<6;i++){
//         if(arr[i]==target)
//         return i;
//     }
//     return -1;
// }
int reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[6]={1,2,4,6,7,8};
    // int target=9;
    int size=6;
    // cout << linearSearch(arr,target) << endl;
    reverse(arr,size);
    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }
}