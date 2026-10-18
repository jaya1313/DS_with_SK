// min cost to connect all point
// poins are given
// calculate min cost with manhattan distance

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int minCostToConnect(vector<vector<int>> &points){  // O(n^2 * logn)
    int n = points.size();
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    pq.push({0,0});
    vector<bool> mstSet(n, false);
    int minCost = 0;

    while(pq.size() > 0){
        int wt = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if(mstSet[u])continue;

        mstSet[u] = true;
        minCost += wt;
        for(int i=0; i<n; i++){
            int dist = abs(points[u][0] - points[i][0]) + abs(points[u][1] - points[i][1]);
            pq.push({dist,i});
        }
    }
    return minCost;
}

int main(){
    vector<vector<int>> points = {{0,0},{2,2},{3,10},{5,2},{7,0}};

    cout << minCostToConnect(points);
    return 0;
}