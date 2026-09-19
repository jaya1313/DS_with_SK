#include<iostream>
#include<list>
#include<vector>
using namespace std;

// New Chapter: Graphs

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

    void dfsHelper(int u, vector<bool> &vis){
          cout << u << " ";
          vis[u] = true;

          for(int v : l[u]){
            if(!vis[v]){
                dfsHelper(v, vis);
            }
          }
    }

    void dfs(){
        int u = 0;
        vector<bool> vis(V, false);

        for(int i=0; i<V; i++){  // for all vertices(multiple source points)
            if(!vis[i]){
                dfsHelper(i, vis);
            }
        }
        
    }
      
};

int main(){

    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.dfs();

    return 0;
}