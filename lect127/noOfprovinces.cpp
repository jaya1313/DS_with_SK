// number of provinces
// 547 on leetcode
// given n*n matrix n= no.of cities
// return provinces = no. of groups that are connected directly or indirectly

#include<vector>
#include<iostream>
using namespace std;

void dfsHelper(int i, vector<vector<int>> &adj, vector<bool> &vis, int n){
    vis[i] = true;
    for(int j=0; j<n; j++){
        if(adj[i][j]==1 && !vis[j]){
            dfsHelper(j, adj, vis, n);
        }
    }
}

int dfs(vector<vector<int>> &adj, int n){
    vector<bool> vis(n, false);
    int ans = 0;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfsHelper(i, adj, vis, n);
            ans++;
        }
    }
    return ans;
}

int main(){

    vector<vector<int>> adj = {{1,1,0},{1,1,0},{0,0,1}};
    cout << dfs(adj, 4);

    return 0;
}
