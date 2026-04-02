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

    int expSum=0, actualSum=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            actualSum+=grid[i][j];
            if(s.find(grid[i][j]) != s.end()){
                a=grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    } 
    expSum= (n*n) *(n*n +1)/2;
    b=expSum + a - actualSum;
    ans.push_back(b);
    
    return ans;
}

int main(){

    return 0;
}