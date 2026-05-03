#include<iostream>
#include<vector>
using namespace std;


// N Queens problem   51 on leetcode

void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans){
        if(row == n){
            ans.push_back({board});
            return;
        }
        for(int j=0; j<n; j++){
            //if(isSafe(board, row, j, n)){
                board[row][j] = 'Q';
                nQueens(board, row+1,n,ans);
                board[row][j] = '.';
            }
        }
    //}

int main(){
    return 0;
}