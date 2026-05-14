#include<iostream>
#include<vector>
using namespace std;

//54 on leetcode

bool isSafe(vector<vector<char>> &board, int row, int col, char dig){
    
}

bool sudukoSolver(vector<vector<char>> &board, int row, int col){
    if(row == board.size()){
        return true;
    }
    
    int nextRow = row, nextCol = col +1;
    if(row == 9){
        nextRow = row + 1;
        nextCol = 0;
    }
    for(char dig=1; dig<=9; dig++){
        if(board[row][col] != '.'){
            int nextRow; 
            int nextCol;
            sudukoSolver(board, nextRow , nextCol);
        }
        if(isSafe(board,row,col,dig)){
            board[row][col] = dig;
            if(sudukoSolver(board, nextRow , nextCol)){
                return true;
            }
              board[row][col] = '.';
        }
    }
}

int main(){
    return 0;

}