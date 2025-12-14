// min,max element of array
#include <iostream>
using namespace std;
int main(){
    int marks[5]={10,20,-15,2,21};
    int size= sizeof(marks)/sizeof(int);
    int smallest= INT16_MAX;
    int largest= INT64_MIN;
    for(int i=0;i<size;i++){
        if(marks[i]<smallest){
            smallest=marks[i];
        }
        largest=max(marks[i],largest);
    }
    
    cout << "smallest marks is at index = "<< smallest << endl;
    cout << "largest marks = "<< largest;

}