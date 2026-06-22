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
    void print_all(){
        if(head==NULL){
            return;
        }
        cout << head->data << " ";
        Node* temp = head->next;
        while(temp!= head){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << head->data;
        cout << endl;
    }

    void insertAtTail(int val){
        Node* newNode =  new Node(val);
        if(head == NULL){
           head=tail=newNode;
           return;
        }
        tail->next = newNode;
        tail = newNode;
        newNode->next = head;
    }

};

int main(){
    circularList cll;
    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);
    cll.insertAtTail(4);
    cll.insertAtTail(5);
    cll.print_all();
}