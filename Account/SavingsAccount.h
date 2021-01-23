#ifndef UNTITLED1_SAVINGSACCOUNT_H
#define UNTITLED1_SAVINGSACCOUNT_H

// includes
#include "Account.h"

// describe an interface
// class SavingsAccount derive form Account
class SavingsAccount : public Account {
    // protected variables
protected:
    double interRate;
    // public method and constructors
public:
    SavingsAccount();

    SavingsAccount(double, double);

    double calculateInterest();
};

#endif //UNTITLED1_SAVINGSACCOUNT_H
