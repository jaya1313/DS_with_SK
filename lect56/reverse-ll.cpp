
// reverse linked list
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

    Node* reverse(){
        Node* prev;
        Node* curr;
        Node* nxt;
        nxt = prev = NULL;
        curr = head;
        while(curr != NULL){
             nxt = curr->next;
             curr->next = prev;
             prev = curr;
             curr = nxt;
        }
        head = prev;
    }

};

int main(){
    List l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.reverse();
    l1.print_all();

}