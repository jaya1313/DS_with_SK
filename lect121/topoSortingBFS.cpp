// topological sorting using bfs

#include<iostream>
#include<list>
#include<vector>
#include<queue>
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

   void topoSort(){  // O(V+E)

    // calc indegree
    vector<int> indegree(V,0);
    for(int u=0; u<V; u++){
        for(int v : l[u]){
            indegree[v]++;
        }
    }

    //pushing 0 to queue
    queue<int>q;
    for(int i=0; i<V; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    // 
    vector<int>res; 
    while (q.size() > 0){
       int curr = q.front();
       q.pop();
       res.push_back(curr);
       for(int v: l[curr]){
         indegree[v]--;
         if(indegree[v] == 0){
            q.push(v);
         }
       }

    }
    for(int val : res){
        cout << val << " ";
    }
    cout << endl;
    
}
};

int main(){

    Graph g(6);


    g.addEdge(3,1);
    g.addEdge(2,3);
    g.addEdge(4,0);
    g.addEdge(4,1);
    g.addEdge(5,0);
    g.addEdge(5,2);
   
    g.topoSort();

    return 0;
}