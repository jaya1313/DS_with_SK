#include<iostream>
using namespace std;

//Encapsulation - binding data and functions together

class Account{
    private:
    double balance;
    string password;  //data hiding

    public:
    string accountId;
    string username;
};
    

int main(){
    Account a1;
    a1.accountId = "1234";
    a1.username = "jayanti55";
    // a1.balance = 10000;  //error - balance is private
    cout << a1.accountId << " " << a1.username << endl;
    return 0;
}