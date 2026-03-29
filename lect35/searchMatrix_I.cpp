#include<iostream>
#include<vector>
using namespace std;

bool searchInRow(vector<vector<int>>& matrix, int target ,int row){
        int n=matrix[0].size();
        int st=0;
        int end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target ==matrix[row][mid]){
                return true;
            }
            else if(target > matrix[row][mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int stR=0;int endR=m-1;
        while(stR<=endR){
        int midRow=stR+(endR-stR) /2;
        if(target >=matrix[midRow][0] && target<= matrix[midRow][n-1]){
           return searchInRow(matrix,target,midRow);
        }
        else if(target > matrix[midRow][n-1]){
            stR=midRow + 1; 
        }
        else if(target < matrix[midRow][0]){
            endR=midRow -1;
        }
        }
        return false;
    }

int main(){
    vector<vector<int>>matrix ={{1,2,3},{4,5,6},{7,8,9}};
    int target=8;

    cout << searchMatrix(matrix,target);

    return 0;
}