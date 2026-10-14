#include<iostream>
#include<vector>
using namespace std;

int main(){
    Graph graph(4);

    graph.addEdge(0,1,10);
    graph.addEdge(0,2,6);
    graph.addEdge(0,3,5);
    graph.addEdge(1,3,15);
    graph.addEdge(2,3,4);
}