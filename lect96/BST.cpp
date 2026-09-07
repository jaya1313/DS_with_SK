#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

// Binary Search Tree

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

// Insertion of nodes in BST

