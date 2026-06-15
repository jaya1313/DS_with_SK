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

    Node* merge2Lists(Node* head1, Node* head2){
        if(head1 == NULL || head2 == NULL){
            return head1 = NULL ? head2 : head1;
        }

        if(head1-> data <= head2->data){
            head1->next = merge2Lists(head1->next, head2->next);
        }
        else{
            head2->next = merge2Lists(head1, head2->next);
        }
    }
};