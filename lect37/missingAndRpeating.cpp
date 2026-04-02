#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

//Repeating and missing value
// range is [1,n*n]
// a which is repeating value in a grid
// and b is the value which is missing in the grid

vector<int> findMissingAndRepeatingValues(vector<vector<int>>grid){
    vector<int> ans;
    int n=grid.size();
    unordered_set<int> s;
    int a,b;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s.find(grid[i][j]) != s.end()){
                a=grid[i][j];
                ans.push_back(a);
                break;
            }
            s.insert(grid[i][j]);
        }
    }
}

int main(){

    return 0;
}