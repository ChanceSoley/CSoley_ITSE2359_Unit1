// main.cpp

#include <iostream>
#include "BankAccount.h"

using namespace std;

// Function to process a withdrawal to demonstrate exception propagation
void processWithdrawal(BankAccount& account, double amount) {
    account.withdraw(amount);  // Exception may propagate from here
}

int main() {
    try {
        // Creating a BankAccount object with initial balance
        BankAccount myAccount("12345", 100.0);

        cout << "Initial balance: $" << myAccount.getBalance() << endl;

        // Deposit a valid amount
        myAccount.deposit(50);

        // Attempt to withdraw more than the balance to trigger InsufficientFunds exception
        processWithdrawal(myAccount, 200);

    } catch (const InsufficientFunds& e) {
        cout << e.what() << endl;
    } catch (const NegativeDeposit& e) {
        cout << e.what() << endl;
    } catch (...) {
        cout << "An unexpected error occurred." << endl;
    }

    cout << "Program completed." << endl;
    return 0;
}
