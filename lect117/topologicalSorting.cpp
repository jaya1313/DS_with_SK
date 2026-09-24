// topological sorting using dfs

#include<iostream>
#include<list>
#include<vector>
using namespace std;

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
       
    }

    bool isCycleDirDFS(int curr, vector<bool> &vis, vector<bool> &recPath){  // O(V+E)
          
          vis[curr] = true;
          recPath[curr] = true;
          list<int> neighbors = l[curr]; 

          for(int v : neighbors){
            if(!vis[v]){
                if(isCycleDirDFS(v, vis, recPath)){
                   return true;
                }
            }
            else if(recPath[v]){
                    return true;
                }
          }
          recPath[curr] = false;
          return false;
    }

    bool isCycle(){
        vector<bool> vis(V, false);
         vector<bool> recPath(V, false);

        for(int i=0; i<V; i++){  // for all vertices(multiple source points)
            if(!vis[i]){
               if(isCycleDirDFS(i, vis, recPath)){
                return true;
               }
            }
        }
        return false;
    }
      
};

int main(){

    Graph g(4);
    g.addEdge(1,0);
    g.addEdge(0,2);
    g.addEdge(2,3);
    //g.addEdge(3,0);
   
    cout << g.isCycle() << endl;

    return 0;
}