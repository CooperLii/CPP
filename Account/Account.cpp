// algorithm implementation

// includes
#include "Account.h"
#include <iostream>

// use identifiers
using std::cout;

// default constructor for Account,
// which assign variables default values.
Account::Account() {
    this->accountBalance = 0.0;
    this->initial = 0.0;
}

// parameterized  constructor
// check if the initial balance is greater than or equal to 0,
// if it is, assign that value to the account balance.
// if it is not, print out an error message says the initial account
// balance should be greater than or equal to 0.
Account::Account(double initial) {
    if (initial >= 0.0) {
        this->accountBalance = initial;
    } else {
        accountBalance = 0.0;
        cout << "The initial balance should be greater than or equal to 0.0!";
    }
}

// credit method that let customers to deposit money.
void Account::credit(double amount) {
    this->accountBalance = this->accountBalance + amount;
}

// debit method let customers to withdraw money(if it is withdrawable)
// check if the withdraw amount is greater than the account balance
// if it is not, update the account balance and return true. (withdraw succeeded)
// if it is, print out an error message says debit amount exceeded account balance.
// and doesn't change the account balance and return false.(withdraw declined)
bool Account::debit(double withdrawAmount) {
    if (withdrawAmount <= this->accountBalance) {
        this->accountBalance = this->accountBalance - withdrawAmount;
        return true;
    } else {
        cout << "Debit amount exceeded account balance";
        cout << "\n";
        this->accountBalance = accountBalance;
        return false;
    }
}

// getBalance method get the account balance.
double Account::getBalance() {
    return this->accountBalance;
}

