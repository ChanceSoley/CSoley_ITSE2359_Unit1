// BankAccount.h

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <exception>
#include <string>

using namespace std;

// Custom exception for insufficient funds
class InsufficientFunds : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Insufficient funds for this withdrawal.";
    }
};

// Custom exception for negative deposit
class NegativeDeposit : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Deposit amount cannot be negative.";
    }
};

// BankAccount class to manage account balance and transactions
class BankAccount {
    double balance;
    string accountNumber;

public:
    // Constructor to initialize account with number and balance
    BankAccount(string accNo, double initialBalance);

    // Withdraw function with exception for insufficient funds
    void withdraw(double amount);

    // Deposit function with exception for negative deposits
    void deposit(double amount);

    // Getter for balance
    double getBalance() const;
};

#endif // BANKACCOUNT_H
