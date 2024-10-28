// BankAccount.cpp

#include "BankAccount.h"

// Constructor to initialize the account with a specific account number and initial balance
BankAccount::BankAccount(string accNo, double initialBalance)
    : accountNumber(accNo), balance(initialBalance) {}

// Withdraw function that throws an exception if balance is insufficient
void BankAccount::withdraw(double amount) {
    if (amount > balance) {
        throw InsufficientFunds();
    }
    balance -= amount;
    cout << "Successfully withdrew: $" << amount << endl;
}

// Deposit function that throws an exception if deposit amount is negative
void BankAccount::deposit(double amount) {
    if (amount < 0) {
        throw NegativeDeposit();
    }
    balance += amount;
    cout << "Successfully deposited: $" << amount << endl;
}

// Getter function for balance
double BankAccount::getBalance() const {
    return balance;
}
