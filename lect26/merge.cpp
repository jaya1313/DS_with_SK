#include<iostream>
#include<vector>
using namespace std;

// merge 2 sorted array in space(1) complexity

void merge(vector<int> &A,int m,vector<int> &B,int n,int idx){
    int i=m-1,j=n-1;
    while(i>=0 && j>=0){
        if(A[i]>=B[j]){
            A[idx]=A[i];        //alternate way A[idx--]=A[i--]
            idx--;          
            i--;
        }
        else{ 
            A[idx]=B[j];        //alternate way A[idx--]=A[j--]        
            idx--;
            j--;
        }
    }
    while(j>=0){
        A[idx--]=A[j--];
    }
}
void printArray(vector<int>A,int idx){
    for(int i=0;i<=idx;i++){
        cout << A[i] <<" ";
    }
    cout << endl;
}

int main(){
      vector<int>A={1,2,3,0,0,0};
      int m=3;
      vector<int>B={2,5,6};
      int n=3;
      int idx=m+n-1; 
      merge(A,m,B,n,idx);
      printArray(A,idx);
}