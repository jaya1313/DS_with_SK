#include<iostream>
#include<vector>
using namespace std;

//gas ststion , 134 on leetcode
// int gasStation(vector<int> &gas, vector<int> &cost){
//     int totalGas =0, totalCost=0;
//     for(int a: gas){
//         totalGas+= a;
//     }
//     for(int a: cost){
//         totalCost+= a;
//     }

//     if(totalGas < totalCost){
//         return -1;
//     }

//     int start=0, currgas=0;
//     for(int i=0; i< gas.size(); i++){
//         currgas += (gas[i] - cost[i]);

//         if(currgas < 0){
//             start = i+1;
//             currgas=0;
//         }
//     }
//     return start;
// }

//optimised - in 1 loop
int gasStation(vector<int>& gas, vector<int>& cost) {

    int start=0, currgas=0;
    int totalGas =0, totalCost=0;
    for(int i=0; i< gas.size(); i++){
    
        totalGas+=gas[i];
        totalCost+=cost[i];

        currgas += (gas[i] - cost[i]);

        if(currgas < 0){
            start = i+1;
            currgas=0;
        }
    }
        return totalGas < totalCost ? -1 : start;
}

int main(){
    vector<int> gas ={1,2,4,5,9};
    vector<int> cost ={3,4,1,10,1};
    cout << gasStation(gas, cost);
    return 0;
}