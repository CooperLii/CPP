#ifndef CARBONFOOTPRINT_CAR_H
#define CARBONFOOTPRINT_CAR_H

// describe an interface

// includes
#include "CarbonFootprint.h"

// inheritance class Car
class Car : public CarbonFootprint {
//public function and constructors.
public:
    Car();

    Car(int);

    void getCarbonFootprint();
// protected variable.
protected:
    int footPrint;
    int galOfGas;
};

#endif //CARBONFOOTPRINT_CAR_H
