 #include<iostream>
using namespace std;


class Student{
    public:

    string name;
    double *cgpaPtr;

    Student(string name, double cgpa){       
        this-> name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa; 

    } 

    //destructor - deletes or deallocates the objects once object gets out of scope
    ~Student(){
        cout << "Hi, I am Destructor.";
        delete cgpaPtr;   // deletes the memory space which points the cgpaPtr
    }

    void getInfo(){
        cout << name << endl;
        cout << *cgpaPtr << endl;
    }
};

int main(){

    Student s1("jayanti", 8.9);
    s1.getInfo();

    return 0;
}