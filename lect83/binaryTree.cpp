#include<iostream>
#include<vector>
using namespace std;

// implementation of binary tree 
// binary tree- each node(root) has 2 chidren.
// pre order traversal - root-left-right 

class Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

int main(){

    vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    return 0;
}