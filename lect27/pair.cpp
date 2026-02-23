#include<iostream>
#include<vector>
using namespace std;

int main(){
    // pair<int,int>p={3,4};

    // cout<<p.first << endl;
    // cout << p.second << endl;

    pair<int,pair<char,int>>p={3,{'a',4}};

    vector<pair<int,int>> vec={{1,2},{2,3},{3,4}};
    vec.push_back({4,5}); //insert
    vec.emplace_back(4,5); // in-place objects create

    for(auto p:vec) {
        cout << p.first << " "<< p.second << endl;
    }

    cout<<p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;


    return 0;
}