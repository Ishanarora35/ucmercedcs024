#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string o, double b) {
        owner = o;
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        }
    }

    string getOwner() const {
        return owner;
    }

    double getBalance() const {
        return balance;
    }

    void print() const {
        cout << "Owner: " << owner << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account("Ishan", 500);

    account.deposit(200);
    account.withdraw(100);

    account.print();

    return 0;
}
