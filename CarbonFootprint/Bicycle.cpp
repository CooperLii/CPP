// includes
#include "Bicycle.h"
#include <iostream>
// use identifiers
using std::cout;
using std::to_string;

// default constructor
// assign variable a default value
Bicycle::Bicycle() {
    this->fp = 0;
}

//implement function getCarbonFootprint
//bicycle has a carbon footprint of 0
//print out the infomation
void Bicycle::getCarbonFootprint() {
    this->fp = 0;
    cout << "Bicycle: " + to_string(this->fp);
    cout << "\n";

}