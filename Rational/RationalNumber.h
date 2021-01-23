
#ifndef UNTITLED1_INTERFACE4RATIONAL_H
#define UNTITLED1_INTERFACE4RATIONAL_H

// use identifiers
using namespace std;

// describe an interface
class RationalNumber {
// private variables.
private:
    int numerator, denominator;
// public methods and constructor.
public:
    RationalNumber(int, int);

    RationalNumber operator*(RationalNumber &num);

    RationalNumber operator/(RationalNumber &num);

    RationalNumber operator+(RationalNumber &num);

    RationalNumber operator-(RationalNumber &num);

    bool operator==(RationalNumber &num);

    bool operator!=(RationalNumber &num);

    string toString();
};

#endif //UNTITLED1_INTERFACE4RATIONAL_H
