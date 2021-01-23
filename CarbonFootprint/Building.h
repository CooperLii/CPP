#ifndef CARBONFOOTPRINT_BUILDING_H
#define CARBONFOOTPRINT_BUILDING_H

// describe an interface

// includes
#include "CarbonFootprint.h"

// inheritance class Building
class Building : public CarbonFootprint {
// public function and constructors.
public:
    Building();

    Building(int);

    void getCarbonFootprint();
// protected variable.
protected:
    int footPrint;
    int squareFeet;
};

#endif //CARBONFOOTPRINT_BUILDING_H

