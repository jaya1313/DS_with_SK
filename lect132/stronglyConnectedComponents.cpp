// stongly connected components
// kosaraju algo

#include<iostream>
#include<vector>
#include<stack>
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
        
       }

      void topoSort(int curr, vector<bool> &vis, stack<int> &s){
        vis[curr] = true;

        for(auto v : adj[curr]){
            if(!vis[v]){
                topoSort(v, vis, s);
            }
        }
        s.push(curr);
      }

       void kosaraju(){
        // step1 - topo order
        stack<int> s;
        vector<bool> vis(V, false);

        for(int i=0; i<V; i++){
            if(!vis[i]) {
                topoSort(i, vis, s);
            }
        }

        // step2

       }
    };


int main(){

    Graph g(5);

    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,0);
    g.addEdge(2,1);
    g.addEdge(3,4);

    g.kosaraju();
    return 0;
}