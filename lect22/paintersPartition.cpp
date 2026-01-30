#include<iostream>
#include<algorithm>
#include<limits.h>
#include<vector>
using namespace std;

bool isPossible(vector<int>arr,int n,int m,int maxAllowedTime){
    int painters=1,time=0;               
    for(int i=0;i<n;i++){                      //O(n)
         if(time+arr[i]<=maxAllowedTime){
            time+=arr[i];
         }else{
            painters++;
            time=arr[i];
         }
    }
    return painters<=m;
}
int minTimetoPaint(vector<int>arr,int n,int m){
    int sum=0,maxval=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxval=max(maxval,arr[i]);
    }
    int st=maxval,end=sum,ans=-1;
    while(st<=end){                // O(logsum * n)
        int mid=st+(end-st)/2;

        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr={40,30,20,10};       //array of board length
    int n=4;          // no.of boards
    int m=2;          // no.of painters
    cout<<minTimetoPaint(arr,n,m) << endl;
    return 0;
}