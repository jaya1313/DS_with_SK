#include<iostream>

using namespace std;

//2D Array

int main(){

    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};   //declaration and formatio of 2d array
    int rows=4;
    int columns=3;

    cout << matrix[2][1] << endl;    // acess element
    matrix[2][1] = 18;
    cout << matrix[2][1] << endl; 

    //loops
    //for printing
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //for input

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin >> matrix[i][j];
        }
    }
    return 0;
}
