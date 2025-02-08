
#include <iostream>

using namespace std;

class BankAccount {

private:
double balance;    

public:

 BankAccount(double initialBalance) {
        balance = initialBalance;
}

void deposit(double amount){
if(amount<0){
    cout<< "Invalid amount" << endl;
} else {
    balance += amount;
    cout << "Successfully deposited " << amount << "$" << endl;
    cout << "Current balance: " << balance << "$" << endl;
}}

void withdraw(double amount){
    if(amount > 0 && amount <= balance){
        balance -= amount;
        cout << "Successfully withdrew " << amount << "$" << endl;
        cout << "Current balance " << balance << "$" << endl;
    } else {
        cout << "Invalid amount" << endl;
    }
}

void checkBalance(){
    cout << "Current balance: " << balance << "$" << endl;
}
};

int main(){
    BankAccount developer(2008);
    developer.checkBalance();
    developer.deposit(300);
}