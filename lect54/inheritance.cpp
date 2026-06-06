#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    // Person(string name, int age){
    //     this-> name = name;
    //     this-> age = age;
    // }
    Person(){

    }
};

//class student , prop-> name, age, rollno

class Student : public Person{
    public:
    int rollno;

    void getInfo(){
        cout << "name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Rollno: " << rollno << endl;
    }
};

int main(){
    Student s1;
    s1.name = "Rahul Kumar";
    s1.age = 31;
    s1.rollno = 1234;
    s1.getInfo();
    return 0;
}