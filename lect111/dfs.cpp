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

    void printAdjlist(){
        for(int i=0; i<V; i++){
            cout << i << ": ";
            for(int neighbor : l[i]){
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
      
};