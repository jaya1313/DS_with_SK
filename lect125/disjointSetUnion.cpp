// disjoint set union

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class DisjointSetUnion{
    public:
    int n;
    vector<int> par, rank;

    DisjointSetUnion(int n){
        this->n = n;

        for(int i=0; i<n; i++){
            par.push_back(i);
            rank.push_back(0);
        }
    }

    void unionByRank(int a, int b){
        int parA = find(a);
        int parB = find(b);

        if(parA == parB){
            return;
        }

        //case1
        if(rank[parA] == rank[parB]){
            par[parB] = parA;
            rank[parA]++;
        }

        // case2
        else if(rank[parA] > rank[parB]){
            par[parB] = parA;
        }

        //case3
        else{
            par[parA] = parB;
        }

    }

    int find(int x){
        if(par[x] == x){
            return x;
        }
        return find(par[x]);
    }

    void getInfo(){
        for(int i=0; i<n; i++){
            cout << par[i] << " ";
        }
        cout << endl;

        for(int i=0; i<n; i++){
            cout << rank[i] << " ";
        }
    }   

};

int main(){
    DisjointSetUnion dsu(6);
    
    dsu.unionByRank(0,2);
    cout << dsu.find(2) << endl;

    dsu.unionByRank(1,3);
    dsu.unionByRank(2,5);
    dsu.unionByRank(0,3);
    cout << dsu.find(2) << endl;

    dsu.unionByRank(0,4);

    dsu.getInfo();

    return 0;
}