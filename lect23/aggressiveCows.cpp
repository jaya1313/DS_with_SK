#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

bool isPossible(vector <int> arr,int n,int c,int maxMinLength){
    int cows=1, laststallPos=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-laststallPos>=maxMinLength){
            cows++;
            laststallPos=arr[i];
        }
        if(cows==c){
            return true;
        }
    }
   return false;
}

int maxMinDistance(vector<int>arr,int n,int c){
    sort(arr.begin(),arr.end());
    int st=1,end=arr[1]-arr[n],ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,c,mid)){
            ans=mid;
            st=mid+1;
        }else{
            end=mid -1;
        }
    }
}
int main(){
    vector <int> arr={1,2,8,4,9};
    int n=5;  // no.of stalls
    int c=3; //no.of cows
    cout<< maxMinDistance(arr,n,c) << endl;
    return 0;

}