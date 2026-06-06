#include<iostream>
using namespace std;

//abstract class -> we cannot create object of abstract class
//the class contain pure virtual function is called abstract class

class Shape{  // abstract class 

    public:
    virtual void draw() = 0; //pure virtual function
};

class Circle : public Shape{
    public:
    void draw(){
        cout << "drawing a circle" << endl;
    }
};

int main(){
    Circle c1;
    c1.draw();
    return 0;
}