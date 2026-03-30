#include<iostream>
#include<vector>
using namespace std;

// search a 2d array in which 
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.
// code must be in O(log(n*m)) time complexity

//240 on leetcode

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size();
        int n=matrix[0].size();

        int r=0, c=n-1;
        while(r < m && c >= 0){
            if(target == matrix[r][c] ){
                return true;
            }
            else if(target < matrix[r][c]){
                c--;
            }
            else{
                r++;
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