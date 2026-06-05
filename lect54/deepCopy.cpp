#include<iostream>
using namespace std;

// Deep copyyyyy -> // s1 does not  gets changed when we change the name and cgpa of object s2

class Student{
    public:

    Student(string name, double cgpa){       
        this-> name = name;
        cgpaPtr = new double; // dynamic memory allocation (called at runtime), points to the new double
        *cgpaPtr = cgpa; 

    } 

    Student(Student &obj){
        this-> name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *(obj.cgpaPtr); 
    }

    string name;
    double * cgpaPtr;

    void getInfo(){
        cout << name << endl;
        cout << *cgpaPtr << endl;
    }
};

int main(){

    Student s1("jayanti", 8.9);
    
    Student s2(s1);
    s2.name = "neha kumar";
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();   //s1 wont change now because we created a depp copy which copies but in different references
    s2.getInfo();

    return 0;
}