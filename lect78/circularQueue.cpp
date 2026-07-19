#include<iostream>
using namespace std;

// circular queue
class CircularQueue {
    int *arr;
    int currSize, cap;
    int f,r;
    
    public:
        CircularQueue(int size){
            cap = size;
            arr = new int(cap);
            f=0;
            r=-1;
        }
        void  push(int data);
};

int main(){

}