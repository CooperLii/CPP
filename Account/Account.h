/**
 * @author MingFang Li
 * Course: CSCI 333 - Programming Languages
 * Date: 03/01/2019
 * Assignment: 1
 * Project/Class Description:
 * This program has a base class Account and several derived classes which derive
 * from Account, this program overload credit and debit method to let customers deposit
 * and withdraw money from their account(if it is withdrawable), and tell them if it is
 * successfully done.
 * Known bugs: none
 */

#ifndef UNTITLED1_ACCOUNT_H
#define UNTITLED1_ACCOUNT_H

// describe an interface
// Base class Account
class Account {
// protected variables
protected:
    double accountBalance;
    double initial;
// public methods and constructor
public:
    Account();

    Account(double);

    void credit(double);

    bool debit(double);

    double getBalance();
};

#endif //UNTITLED1_ACCOUNT_H
