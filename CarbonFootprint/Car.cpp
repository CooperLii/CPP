//includes
#include <iostream>
#include "Car.h"
// use identifiers
using std::cout;
using std::to_string;

// default constructor
// assign footprint and gallon of gas a default value
Car::Car() {
    this->footPrint = 0;
    this->galOfGas = 0;
}

// parameterized constructor
// take in the amount of gallon of gas
// calculate the footprint of car
Car::Car(int gallonOfGas) {
    this->galOfGas = gallonOfGas;
    this->footPrint = gallonOfGas * 20;
}

// implement class getCarbonFootprint
// print out the information
void Car::getCarbonFootprint() {

    cout << "Car that has used " + to_string(this->galOfGas) + " gallons of gas: " + to_string(this->footPrint);
    cout << "\n";

}
