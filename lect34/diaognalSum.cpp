#include<iostream>
using namespace std;

// diagonal sum
//if i==j  primary diagonal
//if j = n-i-j  secondary diagonal

//get diagonal sum in O(n*n)
int diagonalSum(int mat[][3],int n){
    int sum=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=mat[i][j];
            }
            else if(j==n-i-1){
                sum+=mat[i][j];
            }
        }
       }
       return sum;
}

//get diaognal sum in O(n)
int getDiagonalSum(int mat[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=mat[i][i];
        if(i!=n-i-1){
            sum+=mat[i][n-i-1];
        }
    }
    return sum;
}
int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
   // cout << diagonalSum(mat,n) << endl;
    cout << getDiagonalSum(mat,n) << endl;
    return 0;
}