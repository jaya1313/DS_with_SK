#include<iostream>
using namespace std;

//compile time polymorphism

// 1. constructor overloading

// class Student{
//     public:
//     string name;

//     Student(){
//         cout << "non-parametirized constructor" << endl;
//     }

//     Student(string name){
//         this-> name = name;
//         cout << "parameterized contructor";
//     }
// };


// int main(){
//     Student s1;  //non-parametirized constructor called
//     Student s2("jayanti");  //parametirized constructor called

//     return 0;
// }

//2. function overloading

class Print{
    public:

    void show(int x){
        cout << "x: " << x << endl;
    }

    void show(char ch){
        cout << "ch: " << ch << endl;
    }
};

int main(){
    Print p1;
    p1.show(101);
    p1.show('f');
    return 0;
}