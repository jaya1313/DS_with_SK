#include<iostream>
using namespace std;

// multi-level Inheritance -> child inherits from parent and parent inherits from grandParent
class Person{
    public:
    string name;
    int age;

};

class Student : public Person{
    public:
    int rollno;
};

class GradStudent : public Student{
    public:
    string researchArea;
};


int main(){
    GradStudent g1;
    g1.name="rahul";
    g1.age = 56;
    g1.rollno = 345;
    g1.researchArea = "Quantum Physics";
    cout << g1.name << endl;
    cout << g1.researchArea << endl;

    return 0;
}