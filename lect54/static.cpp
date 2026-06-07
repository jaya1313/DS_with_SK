#include<iostream>
using namespace std;

// //static variable
// void fun(){
//    static int x = 0;
//     cout << "x: "<< x << endl;
//     x++;
// }

// int main(){
//     fun();
//     fun();
//     return 0;
// }

//static obj
class ABC{
    public:
    ABC(){
        cout << "constructor" << endl;
    }

    ~ABC(){
        cout << "Destructor" << endl;
    }
};

int main() {
   if(true) {
    static ABC obj;
   }

   cout << "end of main fnx\n";
   return 0;

    return 0;
}