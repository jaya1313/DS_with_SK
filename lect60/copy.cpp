#include<iostream>
#include<unordered_map>
using namespace std;

// copy the linked list with random pointers
// Deep copy
//138 on leetcode

class Node {
    public:
    int data;
    Node* next;
    Node* random;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head = tail = NULL;
    }

    Node* copyList(){
        if(head == NULL){
            return NULL;
        }
        unordered_map<Node*,Node*> m;
        Node* newhead = new Node(head->data);
        Node* oldTemp = head;
        Node* newTemp = newhead;
        
        while(oldTemp != NULL){
            Node* copyNode = new Node(oldTemp->data);
            m[oldTemp]=copyNode;
            newTemp->next = copyNode;
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        oldTemp = head;
        newTemp = newhead;
        while(oldTemp != NULL){
            newTemp->random = m[oldTemp->random];
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;

        }
        return newhead;

    }

};