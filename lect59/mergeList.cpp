#include<iostream>
using namespace std;

//Implementation of linked list

class Node {
    public:
    int data;
    Node* next;

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

    void push_back(int val){// O(1)
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            newNode->data = val;
            newNode->next = NULL;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print_all(){// O(n)
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " "; // 3->2->1->null
            temp = temp->next;
        }
        cout << endl;
    }
