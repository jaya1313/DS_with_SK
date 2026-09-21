#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

// detect a cycle in graph using dfs traversal

class Graph{
    int V;  // no. of vertices of graph
    list<int>* l;    // a list 

public:
    Graph(int V){ //constructor
       this->V = V;
       l = new list<int> [V];   // like arr = new int[V]
    }
    
    void addEdge(int u, int v){

        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool isCycleUndirBFS(int src, vector<bool> &vis, int parent){  // O(V+E)

          queue<pair<int, int>> q;  //<node, par>
          q.push({src, -1});
          vis[src] = true;

          while(q.size() > 0){

            int u = q.front().first;
            int par = q.front().second;
            q.pop();

            for(int v : l[u]){
                if(!vis[v]){
                    q.push({v, u});
                    vis[v] = true;
                }
                else if(v != par){
                    return true;
                }
            }
          }
        return false;
    }

    bool isCycle(){
        vector<bool> vis(V, false);

        for(int i=0; i<V; i++){  // for all vertices(multiple source points)
            if(!vis[i]){
               if(isCycleUndirBFS(i, vis, -1)){
                return true;
               }
            }
        }
        return false;
    }
      
};

int main(){

    Graph g(5);
    g.addEdge(0,1);
    //g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,4);

    cout << g.isCycle() << endl;

    return 0;
}