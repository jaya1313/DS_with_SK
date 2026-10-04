#include<iostream>
#include<vector>
#include<list>
#include<climits>
#include<queue>
using namespace std;

class Edge{
    public:
       int v;
       int wt;

       Edge(int v, int wt){
        this->v = v;
        this->wt = wt;
       }

};