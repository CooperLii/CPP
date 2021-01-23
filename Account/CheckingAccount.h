#ifndef UNTITLED1_CHECKINGACCOUNT_H
#define UNTITLED1_CHECKINGACCOUNT_H

// includes
#include "Account.h"

// describe an interface
// class CheckingAccount derive from Account
class CheckingAccount : public Account {
    // protected variables
protected:
    double feePerTrans;
    // public methods and constructors
public:
    CheckingAccount();

    CheckingAccount(double, double);

    void credit(double);

    void debit(double);
};

#endif //UNTITLED1_CHECKINGACCOUNT_H
