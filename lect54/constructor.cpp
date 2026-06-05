#include<iostream>
using namespace std;

//constructor - a special member function that is automatically called when an object is created

class Teacher{

      double salary;

    public:
    //non parameterized constructor
    // Teacher(){
    //     cout << "hi i am contructor" << endl;
    //     dept = "cse";  //set default value for dept
    // }


     //parameterized constructor
    Teacher(string n, string d, string s, double sal){
        //this keyword pints to current object
        this-> name = n;
        this->dept = d;
        this->subject = s;
        this->salary = sal;
    }


    //copy constructor
    Teacher(Teacher &orgobj){
        this-> name = orgobj.name;
        this-> dept = orgobj.dept;
        this-> subject = orgobj.subject;
        this-> salary = orgobj.salary;

    }

    //properties/attributes
    string name;
    string dept;
    string subject;
  

    //methods/member functions
    void changeDept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "subject: " << subject << endl;

    }
};

int main(){

    Teacher t1("jayanti", "cse", "c++", 10100);
    //t1.getInfo();

    //Teacher t2(t1); //copy constructor

    Teacher t2(t1); //custom copy constructor -> invoke
    t2.getInfo();
    return 0;
}




