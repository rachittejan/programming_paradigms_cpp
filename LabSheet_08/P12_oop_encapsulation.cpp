#include <iostream>
using namespace std;

// Demonstrate Encapsulation: Hiding data (private balance) and providing controlled access (public functions)
class BankAccount {
private:
    // Private data member (Hiding data)
    double account_balance = 0.0; 

public:
    // Public member function to deposit (Controlled access)
    void deposit(double amount) {
        if (amount > 0) {
            account_balance += amount;
            cout << "Deposited: $" << amount << ". New Balance: $" << account_balance << endl;
        } else {
            cout << "Deposit failed: Amount must be positive." << endl;
        }
    }

    // Public member function to withdraw (Controlled access)
    void withdraw(double amount) {
        if (amount > 0 && amount <= account_balance) {
            account_balance -= amount;
            cout << "Withdrawn: $" << amount << ". New Balance: $" << account_balance << endl;
        } else {
            cout << "Withdrawal failed: Insufficient funds or invalid amount." << endl;
        }
    }
    
    // Public getter function to view the balance (Controlled read access)
    double get_balance() const {
        return account_balance;
    }
};

int main() {
    BankAccount my_account;
    
    // Initial balance
    cout << "Initial Balance: $" << my_account.get_balance() << endl;

    // Valid operations
    my_account.deposit(500.0);
    my_account.withdraw(150.0);
    
    // Invalid operation (protected by encapsulation)
    my_account.withdraw(5000.0); 

    // Note: my_account.account_balance = 9999; would fail because 'account_balance' is private.

    return 0;
}