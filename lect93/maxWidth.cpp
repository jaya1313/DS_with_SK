#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

// finding the max width of binary tree

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

int widthOfBinaryTree(Node* root) {
        
        queue<pair<Node*, unsigned long long>> q;
        q.push({root, 0});
        int maxWidth = 0;

        while(q.size() > 0){
            int currLevelSize = q.size();
            unsigned long long stIdx = q.front().second;
            unsigned long long endIdx = q.back().second;

            maxWidth = max(maxWidth, (int)(endIdx-stIdx+1));

            for(int i=0; i<currLevelSize; i++){
             auto curr = q.front();
                q.pop();

                if(curr.first->left){
                    q.push({curr.first->left, curr.second*2+1});
                }

                if(curr.first->right){
                    q.push({curr.first->right, curr.second*2+2});
                }
            }
        }
        return maxWidth;
    }