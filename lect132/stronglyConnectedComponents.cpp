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

      void dfs(int curr, vector<bool> &vis, vector<vector<int>> &transpose){
        vis[curr] = true;
        cout << curr << " ";

        for(auto v : transpose[curr]){
            if(!vis[v]){
                dfs(v, vis, transpose);
            }
      }
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

        // step2 - transpose graph

        vector<vector<int>> transpose(V);

        for(int u=0; u<V; u++){ // u--> v
            vis[u] = false;
            for(int v : adj[u]) {
                transpose[v].push_back(u);  // v --> u
            }
        }

        // step 3 - dfs on transpose
        cout << "Printing the SCC: \n";
        while(s.size() > 0){
            int curr = s.top();
            s.pop();

            if(!vis[curr]){
                dfs(curr, vis, transpose);
                cout << endl;
            }
        }

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