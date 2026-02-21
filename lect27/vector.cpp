#include<iostream>
#include<vector>
using namespace std;

 // c++ STL
 // vector (1st container)

 int main(){
    vector<int>vec={1,2,3,4,5};
    vec.push_back(8);  //added to the last
    vec.pop_back();    // delete from the last  // does not affect the capacity
    vec.emplace_back(9);  // same as push_back
    vec.erase(vec.begin()); // delete 1st element
    vec.erase(vec.begin()+2); // delete 3rd element (index 2)
    vec.insert(vec.begin(),1);  // add 1 at 0 index
    vec.insert(vec.begin()+2,4);  // add 4 at 2 index
    //vec.clear();      // clears a vector

    for(int val : vec){
        cout<< val <<" ";
    }
    cout<<endl;
    cout<< vec.size() << endl;
    cout << vec.capacity() << endl;
    cout<<"is empty:" << vec.empty() << endl; // checks if vec is empty or not,if true return 1 otherwise 0
    // cout<< vec[3] << endl;  // or cout<< vec.at(3)
    // cout<< vec.front()<<endl;    //returns the 1st element 
    // cout << vec.back() << endl;  //returns the last element


    // iterators in vector

    //forward
    vector<int>::iterator it;  // or we can write 'auto'
    for(it=vec.begin(); it!=vec.end(); it++){           // vec.end - last index ke baad wala not the last index
        cout << *(it) <<" ";
    }
    cout << endl;
  
    //backward
    for(auto it=vec.rbegin(); it!=vec.rend(); it++){   //rbegin-last index ka next 
        cout << *(it) <<" ";
    }
 }