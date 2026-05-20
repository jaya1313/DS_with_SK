#include<iostream>
#include<vector>
using namespace std;


vector<string> findPath(vector<vector<int>> &mat){
    int n = mat.size();
    vector<string> ans;
    string path = "";

    //helper(mat, 0, 0, path, ans);
    return ans;
}

int main(){
    vector<vector<int>> mat = {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };
    findPath(mat);
}