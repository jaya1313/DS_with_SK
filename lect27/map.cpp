#include<iostream>
#include<map>
using namespace std;

// map STL
//it has key value pair

int main(){
    map<string,int> m;

    m["tv"]=100;
    m["laptop"]=100;
    m["headphones"]=50;
    m["tablet"]=120;
    m["mobile"]=50;
    m["watch"]=100;

    for(auto p: m){
        cout << p.first << " " <<p.second<< endl;
    }
    return 0;
}