// includes
#include <iostream>
#include "CheckingAccount.h"

// use identifiers
using std::cout;
using std::to_string;

// default constructor
// assign the variable a default value.
CheckingAccount::CheckingAccount() {
    this->feePerTrans = 0.0;
}

// parameterized  constructor
// assign account balance an initial value
// assign a transaction fee
CheckingAccount::CheckingAccount(double iniValue, double fee) {
    this->accountBalance = iniValue;
    this->feePerTrans = fee;
}


/**
 * credit method
 * this method checks if the account balance and the amount that customer wants to
 * put in together is enough to pay the transaction fee.
 * if it is, put the money into checking account and charge transaction fee.
 * if it is not, print out an error message says the balance is not enough to pay for the
 * transaction fee.
 * @param amount of money customer wants to put into checking account.
 */
void CheckingAccount::credit(double amount) {
    if (this->accountBalance + amount >= feePerTrans) {
        this->accountBalance = this->accountBalance + amount - feePerTrans;
        cout << "$" + to_string(this->feePerTrans) + "transaction fee charged.";
        cout << "\n";
    } else {
        cout << "No enough balance to pay for the transaction fee.";
        cout << "\n";
    }
}

// debit method
// this method check if the money is able to be successfully withdrawn.
// if it is, take the withdraw amount out of the checking account.
// if it is not, print out an error message says No fee charged,
// because debit amount exceeded account balance.
void CheckingAccount::debit(double withdrawAmount) {
    if (Account::debit(withdrawAmount)) {
        this->accountBalance = this->accountBalance - feePerTrans;
        cout << "$" + to_string(this->feePerTrans) + "transaction fee charged.";
        cout << "\n";
    } else {
        cout << "No fee charged, because debit amount exceeded account balance";
    }
}