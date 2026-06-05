 #include<iostream>
using namespace std;


class Student{
    public:

    string name;
    double cgpa;

    Student(string name, double cgpa){       
        this-> name = name;
        this-> cgpa = cgpa; 

    } 

    //destructor - deletes or deallocates the objects once called
    ~Student(){
        cout << "Hi, I am Destructor.";
    }

    void getInfo(){
        cout << name << endl;
        cout << cgpa << endl;
    }
};

int main(){

    Student s1("jayanti", 8.9);
    s1.getInfo();

    return 0;
}