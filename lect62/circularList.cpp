#include<iostream>
using namespace std;

//circular linked list

class Node {
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class circularList{
    Node* head;
    Node* tail;

    public:
    circularList(){
        head = tail = NULL;
    }

    //insert at head
    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next= head;
        }
        newNode->next = head;
        head = newNode;
        tail->next = head;
    } 

};

int main(){
    circularList cll;
    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);
}