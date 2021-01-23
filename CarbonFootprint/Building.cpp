//includes
#include <iostream>
#include "Building.h"
// use identifiers
using std::cout;
using std::to_string;

// default constructor
// assign footprint and square feet a default value
Building::Building() {
    this->footPrint = 0;
    this->squareFeet = 0;
}

// parameterized constructor
// take in the size
// calculate the footprint of building
Building::Building(int squareFeet) {
    this->squareFeet = squareFeet;
    this->footPrint = squareFeet * 134;
}

// implement class getCarbonFootprint
// print out the information
void Building::getCarbonFootprint() {
    cout << "Building with " + to_string(this->squareFeet) + " square feet: " + to_string(this->footPrint);
    cout << "\n";
}
