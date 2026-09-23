#include<iostream>
#include<list>
#include<vector>
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

    bool isCycleUndirDFS(int src, vector<bool> &vis, int parent){  // O(V+E)
          
          vis[src] = true;
          list<int> neighbors = l[src]; 

          for(int v : neighbors){
            if(!vis[v]){
                if(isCycleUndirDFS(v, vis, parent)){
                   return true;
                }
            }
            else if(v!=parent){
                    return true;
                }
          }
          return false;
    }

    bool isCycle(){
        int u = 0;
        vector<bool> vis(V, false);

        for(int i=0; i<V; i++){  // for all vertices(multiple source points)
            if(!vis[i]){
               if(isCycleUndirDFS(i, vis, -1)){
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
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,4);

    cout << g.isCycle() << endl;

    return 0;
}