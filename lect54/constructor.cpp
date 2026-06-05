#include<iostream>
using namespace std;

//constructor - a special member function that is automatically called when an object is created

class Teacher{

      double salary;

    public:

    Teacher(){
        cout << "hi i am contructor" << endl;
    }
    //properties/attributes
    string name;
    string dept;
    string subject;
  

    //methods/member functions
    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }
};

int main(){

    Teacher t1;
    t1.name = "jayaa";
    t1.dept = "cse";
    t1.subject = "oops";
    t1.setSalary(10000);

    cout << t1.name << " " << t1.dept << " " << t1.subject << " " << t1.getSalary() << endl;
    return 0;
}




