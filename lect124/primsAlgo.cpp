#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// prims algorithm -> minimum cost with v vertex and v-1 edges

class Edge{
    public:
    int v;
    int wt;

    Edge(int v, int wt){
        this->v = v;
        this->wt = wt;
    }

};

int primMST(int V, vector<vector<pair<int,int>>> &adj){
    
}

int main(){
    int V = 4;
    vector<vector<pair<int,int>>> adj(V);

    adj[0].push_back({1,10}); // v, wt
    adj[1].push_back({0,10});

    adj[0].push_back({3,10});
    adj[3].push_back({0,30});

    adj[0].push_back({2,15});
    adj[2].push_back({0,15});

    adj[1].push_back({3,40});
    adj[3].push_back({1,40});

    adj[2].push_back({3,50});
    adj[3].push_back({2,50});

    cout << "Minimum cost of MST:" << primMST(V, adj) << endl;

}