#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<climits>
using namespace std;

// largest BST in Binary tree(BT)
// 99 on leetcode

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