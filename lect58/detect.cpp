// detect the loop or cyle in the linked list.

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

    // detect the loop in the ll
    bool hasLoop(){
        //slow fast pointer approach
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
        }
       return false;
    }

    // if loop is there then return the value where loop starts and also remove it.
    Node* detect(){
        Node* slow = head;
        Node* fast = head;
        bool hasCycle = false;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                hasCycle = true;
            }
        }
        if(!hasCycle){
            cout << "Linked list has no cycle"<< endl;
            return 0;
        }
       slow = head;
       while(slow != fast){
        slow = slow->next;
        Node* prev = fast;
        fast = fast->next;
       }
       cout << "loop starts from: " << slow->data << endl;

    }

    Node* remove(){
         Node* slow = head;
        Node* fast = head;
        Node* prev;
        bool hasCycle = false;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                hasCycle = true;
            }
        }
        if(!hasCycle){
            cout << "Linked list has no cycle"<< endl;
            return 0;
        }
       slow = head;
       while(slow != fast){
        slow = slow->next;
        prev = fast;
        fast = fast->next;
       }
       prev->next = NULL;
       cout << "hence cycle removed!" << endl;

    }

};

int main(){
    List l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    cout << l1.hasLoop();
    l1.detect();
    l1.remove();
}