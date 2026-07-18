// queue data structure
// push - from rear end (from tail of ll)
// pop - from front end (from head of ll)
// front - return front (head of ll)
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    public:
        Node* head;
        Node* tail;

        Queue(){
            head = tail = NULL;
        }

        void push(int val){
            Node* newNode = new Node(val);
            if(empty()){
               head = tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }

        }
        void pop(){

        }
        int front(){

        }
        bool empty(){
            return head == NULL;
        }
}

int main(){
    return 0;
}