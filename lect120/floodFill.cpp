
// flood fill
// 733 on leetcode

#include<iostream>
#include<list>
#include<vector>
#include<stack>
using namespace std;

void dfs(vector<vector<int>>& image, int i, int j, int newColor, int orgColor){
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j] == newColor
          ||  image[i][j] != orgColor){
            return;
          }

          image[i][j] = newColor;

          dfs(image, i-1, j, newColor, orgColor);
          dfs(image, i, j+1, newColor, orgColor);
          dfs(image, i+1, j, newColor, orgColor);
          dfs(image, i, j-1, newColor, orgColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {

        int orgColor = image[sr][sc];
        dfs(image, sr, sc, newColor, orgColor);

        return image;
        
    }