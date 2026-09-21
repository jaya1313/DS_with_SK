// finding the no. of islands
// 1-land and 0-water

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
        l[v].push_back(u);
    }

    int island(vector<vector<char>> grid){
        int islands = 0;
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '1' && !vis[i][j]) {
                    dfs(i, j, vis, grid, n, m);
                    islands++;
                }
            }
        }
        return islands;
    }

    
      
};

int main(){

    Graph g(5);
    g.addEdge(0,1);
    //g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,4);

    return 0;
}