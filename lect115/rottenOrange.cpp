#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

// finding the time in which all oranges gets rotten"

   int rottenOranges(vector<vector<char>> &grid){
         
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        queue<pair<pair<int,int>, int>> q;

        // pushing all rotten oranges to queue
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 2 && !vis[i][j]){
                    q.push({{i,j}, 0});
                    vis[i][j] == true;
                }
            }
        }

        while(q.size() > 0){

             int i = q.front().first.first;
             int j = q.front().first.second;
             int time = q.front().second;

             ans = max(ans, time);

             if(i-1 >= 0 && grid[i][j] == 1 && !vis[i][j]){
                q.push({{i,j}, time+1});
                vis[i][j] == true;
             }

             if(i-1 >= 0 && grid[i][j] == 1 && !vis[i][j]){
                q.push({{i,j}, time+1});
                vis[i][j] == true;
             }

             if(i-1 >= 0 && grid[i][j] == 1 && !vis[i][j]){
                q.push({{i,j}, time+1});
                vis[i][j] == true;
             }

             if(i-1 >= 0 && grid[i][j] == 1 && !vis[i][j]){
                q.push({{i,j}, time+1});
                vis[i][j] == true;
             }

        }
   }

int main(){

    vector<vector<char>> grid = {
    {'1', '1', '0', '0', '0'},
    {'1', '1', '0', '0', '0'},
    {'0', '0', '1', '0', '0'},
    {'0', '0', '0', '1', '1'}
};

     //cout << island(grid) << endl;

    return 0;
}