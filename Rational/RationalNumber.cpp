/**
 * @author MingFang Li
 * Course: CSCI 333 - Programming Languages
 * Date: 03/01/2019
 * Assignment: 1
 * Project/Class Description:
 * This program overload operators
 * Known bugs: none
 */
// includes
#include <iostream>
#include <sstream>
#include "RationalNumber.h"
// use identifiers
using std::cout;
using std::string;

// algorithm implementation

// this constructor give a numerator a number,
// and check if the denominator is less or equals to zero,
// if it is, print out the error message,
// if it is not, assign denominator a number.
RationalNumber::RationalNumber(int numerator, int denominator) {
    this->numerator = numerator;
    if (denominator <= 0) {
        cout << "Denominators can not be 0 or negative.";
    } else {
        this->denominator = denominator;
    }
}

// overloading the operator *.
RationalNumber RationalNumber::operator*(RationalNumber &num) {
    return RationalNumber(this->numerator * num.numerator, this->denominator * num.denominator);
}

// overloading the operator /.
RationalNumber RationalNumber::operator/(RationalNumber &num) {
    return RationalNumber(this->numerator * num.denominator, this->denominator * num.numerator);
}

// overloading the operator +.
RationalNumber RationalNumber::operator+(RationalNumber &num) {
    return RationalNumber(this->numerator * num.denominator + this->denominator * num.numerator,
                          this->denominator * num.denominator);
}

// overloading the operator -.
RationalNumber RationalNumber::operator-(RationalNumber &num) {
    return RationalNumber(this->numerator * num.denominator - this->denominator * num.numerator,
                          this->denominator * num.denominator);
}

// overloading the operator ==.
bool RationalNumber::operator==(RationalNumber &num) {
    return this->numerator == num.numerator && this->denominator == num.denominator;
}

// overloading the operator !=.
bool RationalNumber::operator!=(RationalNumber &num) {
    return !(this->numerator == num.numerator && this->denominator == num.denominator);
}

// toString method, used for printing information.
string RationalNumber::toString() {
    return (to_string(this->numerator) + "/" + to_string(this->denominator));;
}