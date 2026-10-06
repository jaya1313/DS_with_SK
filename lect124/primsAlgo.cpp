#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// prims algorithm

class Edge{
    public:
    int v;
    int wt;

    Edge(int v, int wt){
        this->v = v;
        this->wt = wt;
    }

};