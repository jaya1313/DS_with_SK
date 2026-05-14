#include<iostream>
#include<vector>
using namespace std;

bool sudukoSolver(vector<vector<char>> &board, int row, int col){
    if(row == board.size()){
        return true;
    }
    
    for(int dig=1; dig<=9; dig++){
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