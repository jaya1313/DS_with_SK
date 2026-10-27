// Articulation point

#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Graph{
    public:
    vector<vector<int>> adj;
    int V;

    int time;
    vector<int> dt, low;

       Graph(int V){
        this->V = V;
        adj.resize(V);
       }

       void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
       }

       void dfs(int u, int parU, set<int> &criticalPoints){
        dt[u] = low[u] = ++time;
        int children = 0;

        for(int i=0; i<adj[u].size(); i++){
           int v = adj[u][i];

           if(dt[u] == -1){
            children++;
            dfs(v, u, criticalPoints);
            low[u] = min(low[u], low[v]);

            if(parU != -1 && low[v] >= dt[u]){
                // articulation point
                criticalPoints.insert(u);
            }
            else if(v!= parU){
                low[u] = min(low[v], dt[u]);
            }
            
           }
        }
        if(parU == -1 && children > 1){
            // articulation point
            criticalPoints.insert(u);
        }

       }

       int articulationPoints(){
            time = 0;
            dt.resize(V, -1);
            low.resize(V);

            set<int> criticalPoints;

            for(int i=0; i<V; i++){
                if(dt[i] == -1){
                    dfs(i, -1, criticalPoints);
                }
            }
            return criticalPoints.size();
       }
};

int main(){
    Graph g(6);

    g.addEdge(1,0);
    g.addEdge(1,2);
    g.addEdge(4,3);
    g.addEdge(4,5);
    g.addEdge(4,1);
    
    cout << g.articulationPoints() << endl;
}