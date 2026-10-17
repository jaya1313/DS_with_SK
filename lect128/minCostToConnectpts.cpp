// min cost to connect all point
// poins are given
// calculate min cost with manhattan distance

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int minCostToConnect(vector<vector<int>> &points){
    int n = points.size();
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    pq.push({0,0});
    vector<bool> mstSet(n, false);
    int minCost = 0;

    while(pq.size() > 0){
        
    }
}

int main(){
    vector<vector<int>> points = {{0,0},{2,2},{3,10},{5,2},{7,0}};


}