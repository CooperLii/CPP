// includes
#include "SavingsAccount.h"

// default constructor
// assign the variable a default value.
SavingsAccount::SavingsAccount() {
    this->interRate = 0.0;
}

// parameterized  constructor
// assign accoutn balance an initial value
// assign an interest rate.
SavingsAccount::SavingsAccount(double initValue, double interRate) {
    this->accountBalance = initValue;
    this->interRate = interRate;
}

// this method calculate how much interest customers earn from their account
double SavingsAccount::calculateInterest() {
    return this->accountBalance * interRate;
}
