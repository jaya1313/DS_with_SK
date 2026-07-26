// queue data structure
// push - from rear end (from tail of ll)
// pop - from front end (from head of ll)
// front - return front (head of ll)
#include<iostream>
using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
    
//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class Queue{
//     public:
//         Node* head;
//         Node* tail;

//         Queue(){
//             head = tail = NULL;
//         }

//         void push(int val){
//             Node* newNode = new Node(val);
//             if(empty()){
//                head = tail = newNode;
//             }
//             else{
//                 tail->next = newNode;
//                 tail = newNode;
//             }

//         }
//         void pop(){
//             if(empty()){
//                 cout << "Queue is empty";
//                 return;
//             }
//             else{
//                 Node* temp = head;
//                 head = head->next;
//                 delete temp;
//             }

//         }
//         int front(){
//             if(empty()){
//                 cout << "Queue is empty";
//                 return;
//             }
//             else{
//                 return head->data;
//             }

//         }
//         bool empty(){
//             return head == NULL;
//         }
// };

// int main(){
//     Queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);

//     while(!q.empty()){
//         cout << q.front() << " ";
//         q.pop();
//     }

//     return 0;
// }

// // implementation by c++ STL
// #include<queue>

// int main(){
//     queue<int> q;

//     q.push(1);
//     q.push(2);
//     q.push(3);

//     while(!q.empty()){
//         cout << q.front() << " ";
//         q.pop();
//     }

//     return 0;

// }

// implementation of Deque by c++ STL
#include<deque>

int main(){
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4);
    dq.pop_back();

    while(!dq.empty()){
        cout << dq.front() << " ";
        dq.pop_front();
    }

    return 0;

}