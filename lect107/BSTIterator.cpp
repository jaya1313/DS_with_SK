// 173 on leetcode

#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<climits>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node* next;
    

    Node(int val){
        data = val;
        left = right = NULL;
        
    }
};
