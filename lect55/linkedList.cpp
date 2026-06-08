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
    Node* temp , *ttemp;

    //push-front
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
           newNode->next = head;
           newNode = head;
        }
    }

    void print_all(){
        temp = head;
        while(temp->next != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        return;
    }
};

int main(){
    List l1;
    l1.push_front(1);
    l1.print_all();
}