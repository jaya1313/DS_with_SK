// cheapest flights within k stops
// 787 on leetcode

#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k){
    vector<pair<int, int>> adj(n);
    for(auto vec : flights){
        int u = vec[0];
        int v = vec[1];
        int wt = vec[2];
        adj.push_back({v,wt});
    }

    vector<int> dist(n, INT_MAX);
    dist[src] = 0;

    queue<pair<int,pair<int,int>>> q;  // node,{cost, k}
    q.push({src,{0,-1}})
}

int main(){
    int n = 4;
    vector<vector<int>> flights = {{0,1,100},{1,2,100},{2,0,100},{1,3,600},{2,3,200}};
    return 0;
}