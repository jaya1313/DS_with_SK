 #include<iostream>
using namespace std;

// Shallow copyyyyy -> s1 also gets changed when we change the name and cgpa of object s2

class Student{
    public:

    Student(string name, double cgpa){       
        this-> name = name;
        this-> cgpa = cgpa; 

    } 

    Student(Student &obj){
        this-> name = obj.name;
        this-> cgpa = obj.cgpa; 
    }

    string name;
    double cgpa;

    void getInfo(){
        cout << name << endl;
        cout << cgpa << endl;
    }
};

int main(){

    Student s1("jayanti", 8.9);
    s1.getInfo();
    Student s2(s1);
    s2.name = "neha kumar";
    s2.cgpa = 9.2;
    s1.getInfo();    // s1 also gets changed when we change the name and cgpa of object s2

    return 0;
}