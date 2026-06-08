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

    //push-front
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
           newNode->next = head;
           head = newNode;
        }
    }

    void print_all(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " "; // 3->2->1->null
            temp = temp->next;
        }
        cout << endl;
    }

    // push-back
    void push_back(int val){
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
};

int main(){
    List l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_back(4);
    l1.push_back(5);
    l1.print_all();
}