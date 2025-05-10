#include <iostream>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        owner = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        }
    }

    void display() {
        cout << "Owner: " << owner << ", Balance: " << balance << endl;
    }

    void addInterest(double rate) {
        balance += (balance * rate / 100);
        cout << "Interest added. New Balance: " << balance << endl;
    }

};

int main() {
    BankAccount account1("Alice", 500);
    account1.deposit(200);
    account1.withdraw(100);
    account1.addInterest(39);
    account1.display();

    return 0;
}
