#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// print all subarrays
// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     for(int strt=0;strt<n;strt++){
//         for(int end=strt;end<n;end++){
//             for(int i=strt;i<=end;i++){
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// maximum subarray sum
// Brute force approach

int main(){
    int n=6;
    int arr[7]={-1,3,-2,4,-6,2};
    int maxsum=0;
    for(int strt=0;strt<n;strt++){
        int currsum=0;
        for(int end=strt;end<n;end++){
            currsum=currsum+arr[end];
            maxsum=max(currsum , maxsum);
}
    }
    cout << "maximum subarray sum is " << maxsum;
}

// maximum subarray sum 
// kadane's algorithm (most optimised)

// int main(){
//     int n=6;
//     int arr[6]={-1,3,-2,4,-6,2};
//     int currsum=0;
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currsum+=arr[i];
//         maxsum= max(currsum,maxsum);
//         if(currsum<0){
//             currsum =0;
//         }
//     }
//     cout << "maximum subarray sum = " << maxsum;
// }

