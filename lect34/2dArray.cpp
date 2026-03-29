#include<iostream>
#include<climits>
#include<utility>
#include<algorithm>

using namespace std;

//2D Array

//linear search 
    pair<int,int>  linearSearch(int matrix[][3],int rows,int columns,int key){
        pair<int,int>p1={-1,-1};
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(matrix[i][j]==key){
                pair<int,int>p={i,j};
                return p;
            }
        }
    }
    return p1;
}

//maximum row sum

int maxRowsum1(int matrix[][3],int rows,int columns){
    int maxRowSum=INT_MIN;
    for(int i=0;i<rows;i++){
        int maxRowI=0;
        for(int j=0;i<columns;j++){
            maxRowI+=matrix[i][j];
        }
        maxRowSum=max(maxRowSum , maxRowI);
    }
    return maxRowSum;
}

// max column sum

int maxcolsum1(int matrix[][3],int rows,int columns){
    int maxcolSum=INT_MIN;
    for(int i=0;i<columns;i++){
        int maxcolsI=0;
        for(int j=0;i<rows;j++){
            maxcolsI+=matrix[j][i];
        }
        maxcolSum=max(maxcolSum , maxcolsI);
    }
    return maxcolSum;
}

int main(){

    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};   //declaration and formatio of 2d array
    int rows=4;
    int columns=3;
    int key=8;
    // pair<int,int> ans=linearSearch(matrix,rows,columns,key);
    // cout<< ans.first << " " << ans.second << endl; 
    cout << maxRowsum1(matrix,rows,columns) << endl;
    cout << maxcolsum1(matrix,rows,columns) << endl;


    // cout << matrix[2][1] << endl;    // acess element
    // matrix[2][1] = 18;
    // cout << matrix[2][1] << endl; 

    // //loops
    // //for printing
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<columns;j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // //for input

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<columns;j++){
    //         cin >> matrix[i][j];
    //     }
    // }

    return 0;
}
