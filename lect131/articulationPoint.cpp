// Articulation point

#include<iostream>
#include<vector>
using namespace std;

class Graph{
    vector<vector<int>> adj;
    int V;

    public:
       Graph(int V){
        this->V = V;
        adj.resize(V);
       }

       void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
       }

       int articulationPoints(){

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