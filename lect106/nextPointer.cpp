#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<climits>
using namespace std;

// given a complete binary tree with each node having its next pointer
// you have to assign the next pointer to its right node at each level
// with the help of level order traversal
// 116 on leetcode.

// time complexity = O(n)

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

static int idx = -1;
Node* buildTree(vector<int> &preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;

}

Node* connect(Node* root){

     if(root == NULL){
        return NULL;
    }


    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    Node* prev = NULL;

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            if(q.size() == 0){
                break;
            }
            else{
                q.push(NULL);
            }
        }
        else{
            if(curr->left != NULL){
                q.push(curr->left);
            }
             if(curr->right != NULL){
                q.push(curr->right);
            }
        }

        if(prev!= NULL){
            prev->next = curr;
        }

        prev = curr;
    }

    return root;
}


int main() {
    vector<int> arr = {1, 
          2, 4, -1, -1, 5, -1, -1, 
          3, 6, -1, -1, 7, -1, -1};
    Node* root = buildTree(arr);

    root = connect(root);

    cout << root->data << endl;
}