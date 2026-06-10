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

    //pop-front
    void pop_front(){
        Node* temp = head;
        if(head == NULL){
            cout << "linked list is empty";
            return;
        }
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        Node* ttemp;
        Node* temp = head;
        if(tail == NULL){
            cout << "linked list is empty";
            return;
        }
        while(temp->next != NULL){
             ttemp = temp;
            temp = temp->next;
        }
        tail = ttemp;
        ttemp->next = NULL;
        delete temp;

    }

    //or
    // void pop_back(){
    //     if(tail == NULL){
    //         cout << "linked list is empty";
    //         return;
    //     }
    //     Node*temp = head;
    //     while(temp->next == tail){
    //         temp = temp->next;
    //     }
    //     temp->next = NULL;
    //     delete tail;
    //     tail = temp;
    // }

    // add node at any place
    void insert(int val, int pos){
        if(pos < 0){
            cout << "Invalid pos\n";
            return; 
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        Node *temp = head;
        for(int i=0; i<pos-1; i++){
            temp= temp->next;
        }
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

    }
};

int main(){
    List l1;
    l1.push_front(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.insert(5,1);
    l1.print_all();
}