#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;                // hidden data
    bool checkLimit(int amount) // hidden logic
    {
        return amount <= balance;
    }

public:
    BankAccount(int initialBalance) {
        balance = initialBalance;
    }

    void deposit(int amount) {   // visible method
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(int amount) {  // visible method
        if(checkLimit(amount)) { // internal checking hidden
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void showBalance() {         // visible method
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(500);

    acc.deposit(200);      // user can do
    acc.withdraw(300);     // user can do
    acc.withdraw(600);     // user cannot see internal logic
    acc.showBalance();     

    return 0;
}
