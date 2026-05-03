#include<iostream>
#include<vector>
using namespace std;


// N Queens problem   51 on leetcode

bool isSafe(vector<string> &board, int row, int col, int n){
        for(int i=0; i<n; i++){       //horizontal
            if(board[row][i] == 'Q'){
            return false;
        }
        }

        for(int j=0; j<n; j++){     //vertical
            if(board[j][col] == 'Q'){
            return false;
        }
        }

        for(int i=row, j=col; i>=0&& j>=0; i--,j--){       // left diagonal
            if(board[i][j] == 'Q'){
            return false;
            }
        }

        for(int i=row, j=col; i>=0 && j<n; i--,j++){       // right diagonal
            if(board[i][j] == 'Q'){
            return false;
        }
        }
        return true;
    }

void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans){
        if(row == n){
            ans.push_back({board});
            return;
        }
        for(int j=0; j<n; j++){
            if(isSafe(board, row, j, n)){
                board[row][j] = 'Q';
                nQueens(board, row+1,n,ans);
                board[row][j] = '.';
            }
        }
    }

int main(){
    return 0;
}