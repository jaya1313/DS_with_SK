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
       cout << "I am a Person constructor"<< endl; // base class constructor always runs 1st 
    }

    ~Person(){
       cout << "I am a Person destructor"<< endl; // base class destructor always runs after the child class 
    }
};

//class student , prop-> name, age, rollno

class Student : public Person{
    public:
    int rollno;

    Student(){
        cout << "I am a student constructor"<< endl;  // this called after the base class constructor
    }

    void getInfo(){
        cout << "name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Rollno: " << rollno << endl;
    }
    ~Student(){
        cout << "I am a student destructor"<< endl;  // this called first (begore the base class destructor)
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