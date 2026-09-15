// 173 on leetcode

#include<iostream>
#include<vector>
#include<queue>
#include<stack>
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

Node* insertion(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left = insertion(root->left, val);
    }
    else{
        root->right = insertion(root->right, val);
    }

    return root;
}

Node* buildBST(vector<int> &arr){
    Node* root = NULL;

    for(int val: arr){
        root = insertion(root, val);
    }
    return root;
}
// O(1) time comple
// O(h) space compl  h=height of tree

class BSTIterator{

  public:
    
    stack<Node*> s;
    void storeLeftNodes(Node* root){
        while(root!=NULL){
            s.push(root);
            root=root->left;
        }
    }

    BSTIterator(Node* root){
        storeLeftNodes(root);
    }

    int next(){
        Node* ans = s.top();
        s.pop();

        if(ans->right){
            storeLeftNodes(ans->right);
        }
        return ans->data;
    }

    bool isNext(){
        return s.size() > 0;
    }

};

int main() {
    vector<int> arr = {7, 3, 2, 15, 9, 20};
    Node* root = buildBST(arr);

    BSTIterator iterator(root);

    cout << "BST Inorder Traversal:" << endl;
    while(iterator.isNext()){
        cout << iterator.next() << " ";
    }
    cout << endl;

    return 0;
}