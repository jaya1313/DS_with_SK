#include<iostream>
#include<vector>
using namespace std;

class Edge{
    public:
    int u, v, wt;

    Edge(int u, int v, int wt){
        this->u = u;
        this->v = v;
        this->wt = wt;
    }

    //comparator => <
    bool operator<(const Edge &other) const{
       // return this->wt < other->wt;
    }
};

class Graph{
    public:
    int v;

    Graph(int v){
        this->v = v;
    }

    int addEdge(int u, int v, int wt){

    }
};

int main(){
    Graph graph(4);

    graph.addEdge(0,1,10);
    graph.addEdge(0,2,6);
    graph.addEdge(0,3,5);
    graph.addEdge(1,3,15);
    graph.addEdge(2,3,4);
}