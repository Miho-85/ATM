
#include <iostream>;
#include <unordered_map>;

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
    cout<< "Invalid amount";
} else {
    balance += amount;
    cout << "Successfully deposited " << amount << " $";
    cout << "Current balance: " << balance;
}}

void withdraw(double amount){
    if(amount > 0 && amount <= balance){
        balance -= amount;
        cout << "Successfully withdrew " << amount << " $";
        cout << "Current balance " << balance << " $";
    } else {
        cout << "Invalid amount";
    }
}

void checkBalance(){
    cout << "Current balance: " << balance;
}
};
