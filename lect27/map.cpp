#include<iostream>
#include<map>
using namespace std;

// map STL
//it has key value pair

int main(){
    // map<string,int> m;

    // m["tv"]=100;
    // m["laptop"]=100;
    // m["headphones"]=50;
    // m["tablet"]=120;
    // m["mobile"]=50;
    // m["watch"]=100;

    // m.emplace("camera",25);

    // m.erase("tv");

    // for(auto p: m){
    //     cout << p.first << " " <<p.second<< endl;
    // }

    // if(m.find("camera") != m.end()) {
    //     cout << "found\n";
    // }
    // else{
    //     cout <<"not found";
    // }


    multimap<string, int> m;

    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);

    m.erase(m.find("tv"));

    for(auto p: m){
         cout << p.first << " " <<p.second<< endl;
     }

     // one more type of map

     // unordered map
     //unordered_map<string,int>m;
    return 0;
}