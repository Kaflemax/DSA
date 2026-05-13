#include<iostream>
using namespace std;
class BankAccount{
    private:
    double balance; //hidden from outside
    protected:
    string ownerName; //visible to derived classes
    public:
    int accountNumber; //fully visible
    void deposit(double amount){
        if(amount>0){
            balance+=amount; //private member accessible inside class
        }
    }
    double getBalance(){
        return balance; // controlled access via public method

    }
};
int main(){
    BankAccount acc;
    acc.accountNumber = 1001;//OK-Public
    acc.deposit(500); //OK - public method
    //acc.balance = 9999 //ERROR - private!
    cout<<acc.getBalance();
    return 0;
}