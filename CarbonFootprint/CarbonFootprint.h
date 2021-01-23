/**
 * @author MingFang Li
 * Course: CSCI 333 - Programming Languages
 * Date: 03/01/2019
 * Assignment: 1
 * Project/Class Description:
 * This program calculates the carbon footprint of bicycle, car and bilding.
 * Known bugs: none
 */
 
#ifndef CARBONFOOTPRINT_CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_CARBONFOOTPRINT_H

// describe an interface
// an Abstract class CarbonFootprint
class CarbonFootprint {
    // public pure virtual function getCarbonFootprint
public:
    virtual void getCarbonFootprint() = 0;
};

#endif //CARBONFOOTPRINT_CARBONFOOTPRINT_H
