#include<iostream>
#include<climits>
using namespace std;

// int sum_product(int arr[],int size){
//     int sum=0,pro=1;
//     for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//         pro=pro*arr[i];
//     }
//     cout << sum << endl;
//     cout << pro <<endl;
// }
// void max_min(int arr[],int size){
//      int smallest= INT_MAX;
//     int largest= INT_MIN;
//     int minindex=0,maxindex=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//             minindex=i;
//         }
//         largest=max(arr[i],largest);
//         maxindex=i;
//     }
//     swap(arr[minindex],arr[maxindex]);
//     for(int i=0;i<size;i++){
//         cout << arr[i] << " ";
//     }
// }

void unique(int arr[],int size){
     for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
            count++;
            }
        }
     
     if(count==1){
        cout << arr[i] << endl;
     }
    }
}
void intersection(int arr[],int size,int arr1[],int s2){
      for(int i=0;i<size;i++)
{
    for(int j=0;j<s2;j++){
          if(arr[i]==arr1[j]){
            cout << arr[i] << " ";
            break;
          }
    }
}
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=6;
   // sum_product(arr,size);
    //max_min(arr,size);
    unique(arr,size);
    int arr1[5]={2,3,6,8,9};
    int s2=5;
    intersection(arr,size,arr1,s2);
    
}