#include<iostream>
using namespace std;

// swap nodes in pairs
// 24 on leetcode

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
    // swap nodes in pair
    Node* swapNodesPair(Node* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        Node* prev = NULL;
        Node* first = head;
        Node* sec = head->next;
        while(first!= NULL && sec != NULL){
            Node* third = sec->next;
            sec->next = first;
            first-> next = third;
            if(prev != NULL){
                prev->next = sec;
            }
            else{
                head = sec;
            }
            //update
            prev = first;
            first = third;
            if(third != NULL){
                sec = third->next;
            }
            else{
                sec = NULL;
            }
        }
        return head;
    }
};

int main(){
    // List ll;
    // ll.push_back(1);
    // ll.push_back(2);
    // ll.push_back(3);
    // ll.push_back(4);
    // ll.swapNodesPair();


}