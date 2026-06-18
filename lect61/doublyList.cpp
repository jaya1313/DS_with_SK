#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
    
};

class doublyList{

   public:
   Node* head;
   Node* tail;

   doublyList(){
    head = tail = NULL;
   }

   //push-front
   void push_front(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
   }

   void print_all(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "-> ";
        temp = temp->next;
    }
  cout << "Null";
}

   void push_back(int val){
      Node* newNode = new Node(val);
      if(head == NULL){
        head = tail = newNode;
        return;
      }
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
   }

   void pop_front(){
    Node* temp = head;
    if(head == NULL){
        return;
    }
    head = temp->next;
    temp->next = NULL;
    delete temp;
     
   }

   void pop_back(){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp= temp->next;
    }
    tail = temp->prev;
    temp->prev = NULL;
    tail->next = NULL;
    delete temp;
   }

};
int main(){

    doublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_back(4);
    dll.push_back(5);
    dll.pop_front();
    dll.pop_back();
    dll.print_all();
}