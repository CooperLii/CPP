#ifndef CARBONFOOTPRINT_BICYCLE_H
#define CARBONFOOTPRINT_BICYCLE_H

// describe an interface

// includes
#include "CarbonFootprint.h"

// inheritance class Bicycle
class Bicycle : public CarbonFootprint {
    //public function and default constructor.
public:
    Bicycle();

    void getCarbonFootprint();
    //protected variable.
protected:
    int fp;
};

#endif //CARBONFOOTPRINT_BICYCLE_H
