#include<iostream>
#include<vector>
using namespace std;
//pointers basics

int main(){
    int a=10;
    int *ptr=&a;
    int **parptr=&ptr;     // pointer to pointer
    cout << &a << " ";
    cout << &ptr << " ";
    cout << &parptr << " ";

//dereferencing (value at address)

    cout << *(&a) << endl;
    cout << *(ptr) << endl;
    cout << **(parptr) << endl;

    // null pointer
    int *ptr=NULL;
};